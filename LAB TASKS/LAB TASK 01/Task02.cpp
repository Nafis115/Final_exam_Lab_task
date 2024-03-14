#include<bits/stdc++.h>
using namespace std;
class X{
    private:
 int n;
    public:
X(){
    n=0;
}
X(int n){
    this->n=n;
}
X operator+(int a){
    X temp;
    temp.n=n+a;
    return temp;
}
X operator*(X obj){
X temp;
temp.n=n*obj.n;
return temp;
}
void show(){
    cout<<n<<endl;
}
};
int main(){

  X obj1, obj2(10),obj3(20);

 obj1=(obj2+2)*obj3;
 obj1.show();







     return 0;
}