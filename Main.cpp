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

int main(){
    vector<int> v = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};
    cout<<getSum(v)<<endl;
    return 0;
}