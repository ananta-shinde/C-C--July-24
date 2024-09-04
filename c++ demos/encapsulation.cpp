#include<iostream>
using namespace std;

class College{
    private :
        int id;
        string email;
        string addreess;
    public:

        College(int num,string n)
        {
            id = num;
            name = n;
        }
        int getId()
        {
            return id;
        }
        string name;
};

int main(int argc, char const *argv[])
{
    College c1(100,"MIT"),c2(200,"COEP");
    // c1.name = "MIT";
    cout << c1.getId()<< " ," << c1.name ;
    return 0;
}
