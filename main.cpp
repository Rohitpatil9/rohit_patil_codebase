#include<iostream>
using namespace std;

int main()
{
    int T;
    char pattern[1000] , text_string[100000];
    
    cin >> T; 
    
    while(T > 0)
    {
        cin >> pattern;
        cin >> text_string;
        int ans = 1;
        for(int i=0; pattern[i] != '\0'; i++)
        {
            int flag = 1;
            for(int j=0; text_string[j] != '\0'; j++)
            {
                if (pattern[i] == text_string[j])
                {
                    flag = 0;
                    text_string[j] = '#';
                    break;
                }
            }
            
            if (flag)
            {
                ans = 0;
                break;
            }
                
        }
        
        if (ans)
            cout <<"YES"<<endl;
        else
            cout << "NO" << endl;
            
        T--;
    }

    return 0;
}
