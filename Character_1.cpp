#include <iostream>

using namespace std; //no hej ^^

int main(void) //bede pierwsza
{
    int t,l,c;
    cin >> t;

    for (int i=0; i<t; i++) //komentarz dla Pawełka ;*
    {
        cin >> l;
        cin >> c;

        for (int p=0; p<l; p++)
        {
            for (int j=0; j<c; j++)
            {
                if(p%2==0)
                {
                    if( j%2==0)
                    {
                        cout<<"*";
                    }
                    else
                    {
                        cout<<".";
                    }
                }
                else
                if( j%2==0)
                {
                    cout<<".";
                }
                else
                {
                    cout<<"*";
                }
            }
            cout<<"\n";

        }

    }


}
