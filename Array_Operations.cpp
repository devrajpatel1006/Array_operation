//Functions for searching, shorting, and manupulating
#include<iostream>
#define N=10

using namespace std;

void search(int *ptr);
void sort(int *ptr);
void left_shift(int *ptr);
void right_shift(int *ptr);
double average(int *ptr);


int main()
{
    int array[N]={6,7,8,4,3,2,1,9,8,10};
    int *ptr=array;
    int s;
    cin>>s;
    select(s)
    {
        case 1: search(ptr);break;
        case 2: sort(ptr);break;
        case 3: left_shift(ptr);break;
        case 4: right_shift(ptr);break;
        case 5: average(ptr);break;
        default: break;
    }
    for(int i=0;i<N;i++)
    {
        cout<array[i];
    }

    return 0;
}
//Write the functions here, one by one.

double average(int *ptr){
    double avg = 0;
    int sum = 0;
    int n = N;
    while(n--){
        sum += *ptr;
        ptr++;
    }
    avg = (double)sum/N;
    return avg;
}
