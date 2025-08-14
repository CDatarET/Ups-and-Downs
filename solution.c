#include <stdio.h>

int main() {
	int cases;
	scanf("%d", &cases);
	for(int i = 0; i < cases; i++){
	    int l;
	    scanf("%d", &l);
	    
	    int arr[l];
	    
	    for(int i = 0; i < l; i++){
	        scanf("%d", &arr[i]);
	    }
	    
	    for(int i = 0; i < l - 1; i++){
	        if (i % 2 == 0){
                if (arr[i] > arr[i + 1]){
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                }
            }
            else{
                if (arr[i] < arr[i + 1]){
                    int temp = arr[i];
                    arr[i] = arr[i + 1];
                    arr[i + 1] = temp;
                }
	        }
        }
        
	    
	    for(int i = 0; i < l; i++){
	        printf("%d ", arr[i]);
	    }
	    printf("\n");
	    
	}
}

