#include <iostream>
using namespace std;


bool soLe(int number){
    return (number % 2 == 1);
}
int main(){
    int n;
    cin >> n;
    cout << soLe(n) << endl;
    cout << "Huy DC Ngu";
    return 0;
}