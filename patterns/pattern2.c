#include <stdio.h>
/*
    pattern: 
        011222
        222110
        011222
        222110
*/

int main() {
    for (int i = 0; i < 4; i++) {
        if(i%2==0)
        {
            for(int j=0;j<3;j++)
            {
                for(int k=0;k<j+1;k++)
                {
                    printf("%d",j);
                }
            }
            printf("\n");
        }
        else
        {
            for(int j=2;j>=0;j--)
            {
                for(int k=0;k<j+1;k++)
                {
                    printf("%d",j);
                }
            }
            printf("\n");
        }
        
    }
    return 0;
}