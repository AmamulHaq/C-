#include <iostream>
#include <cstring> 

using namespace std;

int main()
{
    int size = 20, i, m, n;
    char name[24];
    char str1[] = "oop ", str2[] = "notebook";
    cout << "\nEnter name: ";
    cin.getline(name, size);
    cout << "Your name is: " << name << endl; 
    m = strlen(str1); 
    n = strlen(str2);
    for (i = 0; i < n; i++)
    {
        cout.write(str2, 1);
        cout<<endl;
    }
    for (i = n; i > 0; i--)
    {
        cout.write(str2, i);
        cout<<endl;
    }
    return 0;
}
