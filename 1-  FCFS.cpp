#include<iostream>
#include<algorithm> 
#include<iomanip> 
using namespace std;

struct process{
    int pid,AT,BT,ST,CT,TAT,WT,RT;
};

bool compareArrival(process p1, process p2) 
{ 
    return p1.AT<p2.AT;
}

bool compareID(process p1, process p2) 
{  
    return p1.pid<p2.pid;
}

int main() {

    int n;
    struct process p[100];
    float avg_TAT;
    float avg_WT;
    float avg_RT;
    int total_TAT = 0;
    int total_WT = 0;
    int total_RT = 0;
    cout << setprecision(2) << fixed;

    cout<<" Please Enter the number of processes: ";
    cin>>n;

    for(int i = 0; i < n; i++) {
        cout<<"Enter  the arrival time of process "<<i+1<<": ";
        cin>>p[i].AT;
        cout<<"Enter the burst time of process "<<i+1<<": ";
        cin>>p[i].BT;
        p[i].pid = i+1;
        cout<<endl;
    }

    sort(p,p+n,compareArrival);

    for(int i = 0; i < n; i++) {
        p[i].ST = (i == 0)?p[i].AT:max(p[i-1].CT,p[i].AT);
        p[i].CT = p[i].ST + p[i].BT;
        p[i].TAT = p[i].CT - p[i].AT;
        p[i].WT= p[i].TAT - p[i].BT;
        p[i].RT = p[i].ST - p[i].AT;

        total_TAT += p[i].TAT;
        total_WT += p[i].WT;
        total_RT += p[i].RT;
    }

    avg_TAT = (float) total_TAT / n;
    avg_WT = (float) total_WT / n;
    avg_RT = (float) total_RT / n;
    
    sort(p,p+n,compareID);

    cout<<endl;
    cout<<"Pid\t"<<"AT\t"<<"BT\t"<<"ST\t"<<"CT\t"<<"TAT\t"<<"WT\t"<<"RT\t"<<"\n"<<endl;

    for(int i = 0; i < n; i++) {
        cout<<p[i].pid<<"\t"<<p[i].AT<<"\t"<<p[i].BT<<"\t"<<p[i].ST<<"\t"<<p[i].CT<<"\t"<<p[i].TAT<<"\t"<<p[i].WT<<"\t"<<p[i].RT<<"\t"<<"\n"<<endl;
    }
    cout<<"Average Turnaround Time = "<<avg_TAT<<endl;
    cout<<"Average Waiting Time = "<<avg_WT<<endl;
    cout<<"Average Response Time = "<<avg_RT<<endl;


}

