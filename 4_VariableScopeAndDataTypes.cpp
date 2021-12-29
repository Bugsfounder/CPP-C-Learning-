# include <iostream>

using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<<glo;
}


int main(int argc, char const *argv[])
{
    int glo = 9;
    glo = 97;
    // int a = 3;
    // int b = 5;
    int a = 3, b = 5;
    float pi = 3.14;
    char c = 'M';
    bool is_true = true;
    bool is_false = false;
    sum();
    cout<<"\nThis is Tutorial 4\nHere The value of a is: "<<a<<"\nHere The Value of b is: "<<b<<"\nThe Value of PI is: "<<pi;
    cout<<"\nThe Value of c is: "<<c;
    cout<<"\nThe Value of glo is: "<<glo;
    cout<<"\n"<<is_true;
    cout<<"\n"<<is_false;
    return 0;
}
