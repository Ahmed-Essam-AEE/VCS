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
int main(){
    vector<int> v = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    cout<<"GetSum: "<<getSum(v)<<endl;
    cout<<"GetAverage: "<<getAverage(v)<<endl;
    return 0;
}
