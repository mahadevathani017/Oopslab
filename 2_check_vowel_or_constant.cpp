#include<iostream>
#include<cctype>

using namespace std;

void checkAlphabet(char alpa, char  &result)
{
    if(alpa=='a'||alpa=='e'||alpa=='i'||alpa=='o'||alpa=='u'
    || alpa=='A' ||alpa=='E'||alpa=='I'||alpa=='O'||alpa=='U')
    {
        result=alpa-1;
        cout<<alpa<<" "<<"Is vowel "<<"its predecssor "<<result<<endl;

    }
    else
    {
        result=alpa+1;
        cout<<alpa<<" "<<"Is consonant "<<"its succesor "<<result<<endl;
    }
}

int main()
{
    char alphabet,result;
    cout<<"Enter an alphabet:";
    cin>>alphabet;
    if(!isalpha(alphabet))
    {
        cout<<"Entered character is not alphabet"<<endl;
        
    }
    else
    {
         checkAlphabet(alphabet,result);   
    }
    return 0;
}

