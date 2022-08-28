#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main() {
    int xrx[100], i, j, n, HeadMoment = 0, current, size, move;
   
    printf("Enter total disk size:");
    scanf("%d", &size);
    printf("Enter the number of Requests:");
    scanf("%d", &n);
    printf("Enter the Requests sequence:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &xrx[i]);
    printf("Enter initial head position:");
    scanf("%d", &current);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (xrx[j] > xrx[j + 1]) {
                int temp;
                temp = xrx[j];
                xrx[j] = xrx[j + 1];
                xrx[j + 1] = temp;
            }
        }
    }
    int index;
    for (i = 0; i < n; i++) {
        if (current < xrx[i]) {
            index = i;
            break;
        }
    }
    printf("%d",current);
    for (i = index; i < n; i++) {
        HeadMoment = HeadMoment + abs(xrx[i] - current);
        printf(" -> %d", xrx[i]);
        current = xrx[i];
    }
    HeadMoment = HeadMoment + abs(size - xrx[i - 1] - 1);
    HeadMoment = HeadMoment + abs(size - 1);
    current = 0;
    printf("-> %d",size-1);
    printf("-> %d",current);
    for (i = 0; i < index; i++) {
        HeadMoment = HeadMoment + abs(xrx[i] - current);
        current = xrx[i];
        printf(" --> %d", xrx[i]);
    }
    printf("\nTotal head movement is: %d\n", HeadMoment);
    return 0;
}
