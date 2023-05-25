#include <bits/stdc++.h>
using namespace std;                                                                                                                                                                                                                                                                                            int main()
{                                                                                                                                                               
    int n = 0;                                                                                                                                                              
    int m = 0;                                                                                                                                              
    int counter = 1;                                                                                                                                        
    cin >> n >> m;                                                                                                                                          
    if (n <= 100 && n >= 1 && m <= 100 && m >= 1)                                                                                                           
    {                                                                                                                                                               
        int number = n * m;                                                                                                                                     
        for (int i = 0; i < n; i++)                                                                                                                             
        {                                                                                                                                                               
            for (int j = 0; j < m; j++)                                                                                                                             
            {                                                                                                                                                               
                cout << counter << " ";                                                                                                                                 
                counter++;                                                                                                                                      
            }                                                                                                                                                       
            cout << endl;                                                                                                                                   
        }                                                                                                                                               
    }                                                                                                                                                                                                                                                                                                               
    return 0;
}
