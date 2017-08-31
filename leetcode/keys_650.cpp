#include <iostream>

using namespace std;



int main(int argc, char const *argv[])
{
    if (n == 1){
        return 0;
    }
    if (n<=5 ){
        return n;
    }
    int memo[n + 1], min, holder;

    for (int i = 1; i < 6; ++i)
    {
        memo[i] = i;
    }
    
    for (int i = 6; i < n+1; ++i)
    {
        if (i%2 == 0){
            min = 2 + memo[(i/2)];
            for (int j = 1; j < i%2; ++j)
            {
                if (i%j == 0){
                    holder = (i/j) + memo[j];
                    if(holder<min){
                        min = holder;
                    }
                }
            }
            memo[i] = min;
        }
        else{
            min = i;
            for (int j = 3; j < i/2; j += 2)
            {
                if (i%j == 0){
                    holder = (i/j) + memo[j];
                    if(holder<min){
                        min = holder;
                    }
                }
            }
            memo[i] = min;
        }
    }
    return memo[n];

}

