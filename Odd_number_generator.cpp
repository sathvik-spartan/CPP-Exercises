#include <bits/stdc++.h>
using namespace std;

int main(){

    int count = 0;
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    while (count <= num){
        if(count % 2 == 0) // skips true values
        {
            count++;
            continue;
        }

        cout << count << endl;
        count++;
    }

    return 0;
}
