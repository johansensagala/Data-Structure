#include <iostream>
#include <string.h>
using namespace std;

#define MAX 100

/*stack variables*/
int top=-1;
int item;

char stack_string[MAX];


int isEmpty()
{
    if(top==-1)
        return 1;
    else
        return 0;
}

int isFull()
{
    if(top==MAX-1)
        return 1;
    else
        return 0;
}


void pushChar(char item)
{
    if(isFull())
    {
        cout<<"\nStack penuh!\n";
        return;
    }

    top=top+1;
    stack_string[top]=item;
}
 
char popChar()
{
    if(isEmpty())
    {
        cout<<"\nStack Kosong!\n";
        return 0;
    }

    item = stack_string[top];
    top=top-1;
    return item;
}
 
int main()
{
    char str[MAX];
    
    int i;
    
    cout<<"Masukan sebuah kata/kalimat: ";
    gets(str); /*can be used to read string with spaces*/
    
    for(i=0;i<strlen(str);i++)
        pushChar(str[i]);
        
    for(i=0;i<strlen(str);i++)
        str[i]=popChar();

    cout<<"Kata/kalimat setelah dibalik: "<<str;
    
    return 0;
}
 
