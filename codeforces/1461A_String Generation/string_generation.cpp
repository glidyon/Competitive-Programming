#include <bits/stdc++.h>

using namespace std;




int main(){

    int t;
    cin >> t;

    while(t--){

        int n, k;
        cin >> n >> k;
        
        string ans = "";
        for(int i = 0; i < k; i++){
            ans += 'a';
        }

        char added = 'b';
        for(int i = 0; i < n-k; i++){
            if(added > 99){
                added = 'a';
            }

            ans += added;
            added++;
        }

        cout << ans << endl;


    }



    return 0;
}
