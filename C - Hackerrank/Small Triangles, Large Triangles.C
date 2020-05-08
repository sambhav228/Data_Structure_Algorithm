https://www.hackerrank.com/challenges/small-triangles-large-triangles/copy-from/132090405

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
    //Sort an array a of the length n
    float p[n],area[n],t1=0.0,t2=0.0,t3=0.0,tmp=0.0;
    for(int i=0;i<n;i++){
        p[i]=(tr[i].a+tr[i].b+tr[i].c)/2.0;
        area[i]=sqrt(p[i]*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c));
     }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(area[i]>area[j]){
                tmp=area[i];
                area[i]=area[j];
                area[j]=tmp;
                t1=tr[i].a;
                tr[i].a=tr[j].a;
                tr[j].a=t1;
                t2=tr[i].b;
                tr[i].b=tr[j].b;
                tr[j].b=t2;
                t3=tr[i].c;
                tr[i].c=tr[j].c;
                tr[j].c=t3;
             }
         }   
     }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}
