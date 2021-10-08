#include <stdio.h>
#define max(a,b)(((a)>(b)) ? (a) : (b))
int main(void) {
	int t;
	scanf("%d\n", &t);
	while(t--){
	    int n;
	    scanf("%d\n", &n);
	    if(n==1){
	        printf("1\n");
	        continue;
	    }
	    int m=1;
	    while(m*2<=n){
	        m*=2;
	    }
	    int a=n-m+1;
	    if(n==m){
	        printf("%d\n", m/2);
	    }
	    else {
	        printf("%d\n", max(a,m/2));
	    }
	    
	}
	return 0;
}

