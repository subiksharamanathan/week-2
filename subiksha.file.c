#include <stdio.h>
int main() {
int n, b, I, j;
scanf("%d", &n);
int arr[n];
for(I = 0; I < n; i++)
scanf("%d", &arr[i]);
Scanf("%d", &b);
for(I = 0; I < n; i++)
for(j = 1 + 1; j<n; j++)
if(arr[i] + arr[j] == b)
Printf("%d %d\n", I, j);
return 0;
}
