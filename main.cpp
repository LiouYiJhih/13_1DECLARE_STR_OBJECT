#include <iostream>
#include <cstring>
using namespace std;

class String
{
private:
    /* data */
    char* string;
    int len;
public:
    void show_string();
    void set_string(char* i_string);
};

void String::show_string()
{
    cout << "string : " << string << ",length : " << len << endl; 
}

void String::set_string(char* i_string)
{
    // Calculate length of the string, but not including /0.
    len = strlen(i_string);    
    // memory configuration
    string = new char[len+1];
    // Copies the C string pointed by source into the array pointed by destination
    // ,including the terminating null character.
    strcpy(string, i_string);
}

int main()
{
    String A_String;
    char i_string[10] = "My string";
    A_String.set_string(i_string);
    A_String.show_string();

    return 0;
}