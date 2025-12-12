#include<iostream>
using namespace std;
void highest_lowest( int temp[7][4]);
void average(int temp[7][4]);
int main(){
    int temp[7][4]={
        {24,26,30,33},
        {21,26,29,31},
        {30,35,37,39},
        {29,31,38,41},
        {31,34,30,29},
        {39,36,27,21},
        {7,15,25,40}
    };
    cout<<endl;
    
    highest_lowest(temp);
    
    average(temp);
    cout<<endl;

}
void highest_lowest( int temp[7][4]){
    int min=0;
    int max=0;
    int minday;
    int maxday;
    for(int i=0; i<7;i++){
        for(int j=0;j<4;j++){
            if(temp[i][j]<min){
                min=temp[i][j];
                minday=i+1;
            }
            if(temp[i][j]>max){
                max=temp[i][j];
                maxday=i+1;
            }
        }
          cout << "Highest temperature: " << max << "C on day " << maxday << endl;
    cout << "Lowest temperature : " << min << "C on day " << minday << endl;
    cout<<endl;
      
    }
 
  
}   

void average(int temp[7][4]){
    int sum=0;
    double average=0;
      for(int i=0; i<7;i++){
        for(int j=0;j<4;j++){
            sum=0;
            sum=sum+j;
        }
        average=sum/4.0;
        cout << "Average temperature of day " << i + 1 << " = " << average << "C" << endl;
    }

}