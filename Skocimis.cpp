#include<stdio.h>
int main() {
    int pos[3];
    int count=0;
    scanf("%d %d %d",&pos[0],&pos[1],&pos[2]);
    for (int i=0;i<100;i++){
        if (pos[2]-pos[1] == 1 && pos[1]-pos[0] == 1){
            break;
        }
        else{
            if (pos[2]-pos[1]>pos[1]-pos[0]){
                int temp = pos[1];
                pos[0] = temp;
                pos[1] += 1;
                count += 1;
            }
            else {
                int temp = pos[1];
                pos[2] = temp;
                pos[1] -= 1;
                count += 1;
            }
        }
    }
    printf("%d",count);
}