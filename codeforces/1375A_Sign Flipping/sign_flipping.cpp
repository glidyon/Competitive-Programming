#include <bits/stdc++.h>

using namespace std;


int main(){

    int t;
    scanf("%d", &t);
    while(t--){
        const int mxN = 99;

        int n, a[mxN];
        scanf("%d", &n);

        for(int i = 0; i < n; i++){
            scanf("%d", &a[i]);
        }


        for(int i = 0; i < n; i++){
            if(i % 2 == 0){
                if(a[i] <= 0) continue;

                a[i] = -a[i];
            }
            else{
                if(a[i] >= 0) continue;

                a[i] = -a[i];
            }
        }

        for(int i = 0; i < n; i++){
            printf("%d ", a[i]);
        }

        printf("\n");

    }



    return 0;
}
