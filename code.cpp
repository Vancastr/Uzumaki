#include <iostream>
#include <iomanip>

using namespace std;

int main() 
{
    int n, m, minim;
    cin >> n >> m;
    if (n > m)
        minim = m;
    else 
        minim = n;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            a[i][j] = 0;
        }
    }
    int min = 1;
    int k = n;
    int l = m;
    int x = 0, y = 0;
    int counter = 1;
    bool boo = false;

    while (minim - min >= 0)
    {
        if (minim - min == 0)
        {
            if (minim == n)
            {
                for (int i = 0; i < (m - min); i++)
                {
                    a[x][y] = counter;
                    counter++;
                    y++;
                }
                a[x][y] = counter;
            }
            else
            {
                for (int i = 0; i < (n - min); i++)
                {
                    a[x][y] = counter;
                    counter++;
                    x++;
                }
                a[x][y] = counter;
            }
            boo = true;
        }
        if (boo == true)
            break;
        for (int i = 0; i < (m - min); i++)
        {
            a[x][y] = counter;
            counter++;
            y++;
        }
        for (int i = 0; i < (n - min); i++)
        {
            a[x][y] = counter;
            counter++;
            x++;
        }
        for (int i = 0; i < (m - min); i++)
        {
            a[x][y] = counter;
            counter++;
            y--;
        }
        for (int i = 0; i < (n - min); i++)
        {
            a[x][y] = counter;
            counter++;
            x--;
        }
        y++;
        x++;
        min += 2;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << setw(4) << a[i][j];
        }
        cout << "\n";
    }
    return 0;
}