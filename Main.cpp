#include <iostream>
#include <vector>
using namespace std;

int getSum(vector<int> elements){
    int sum = 0;
    for(int i=0 ; i<elements.size() ; i++){
        sum += elements[i];
    }
    return sum;

}
int getAverage(vector<int> elements){
    int sum = getSum(elements);
    int avg = sum / elements.size() ;
    return avg;
}
int getMin(vector<int> elements){
    int min = elements[0];
     for(int i=1 ; i<elements.size() ; i++){
        if(elements[i] < min){
            min = elements[i];
        }
    }
    return min;
}
int main(){
    vector<int> v = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    cout<<"GetSum: "<<getSum(v)<<endl;
    cout<<"GetAverage: "<<getAverage(v)<<endl;
    cout<<"GetMin: "<<getMin(v)<<endl;
    return 0;
}
