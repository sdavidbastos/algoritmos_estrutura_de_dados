#include <cstdio>
#include <cstdlib>
struct Array {
    int size;
    int length;
    int *A ;
};
void display(struct Array arr){
    printf("\nElements are\n");
    for (int i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}
int main() {
    struct Array arr{};
    int n;
    printf("Enter size of array \n");
    scanf("%d", &arr.size);
    arr.A = (int*) malloc(arr.size*sizeof(int));
    arr.length = 0;
    printf("Enter number of numbers");
    scanf("%d", &n);

    printf("Enter all elements \n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr.A[i]);
    }
    arr.length=n;
    display(arr);
    return 0;
}
