/* quicksort */

#include <stdio.h>
#include <stdlib.h>

typedef int T;                  /* type of item to be sorted */
typedef int tblIndex;           /* type of subscript */

#define compGT(a,b) (a > b)
#define compLT(a,b) (a < b)

void sortByInsertion(T *x, tblIndex lb, tblIndex ub) {
    tblIndex i, j;

    for (i = lb + 1; i <= ub; i++) {
        T t = x[i];

        /* shift down until insertion point found */
        for (j = i-1; j >= 0 && compGT(x[j], t); j--)
            x[j+1] = x[j];

        /* insert */
        x[j+1] = t;
    }
}

tblIndex partition(T *x, tblIndex lb, tblIndex ub) {

    /* select a pivot */
    double pivot = x[(lb+ub)/2];

    /* work from both ends, swapping to keep   */
    /* values less than pivot to the left, and */
    /* values greater than pivot to the right  */
    tblIndex i = lb - 1;
    tblIndex j = ub + 1;
    while (1) {
        T t;

        while (compGT(x[--j], pivot));
        while (compLT(x[++i], pivot));
        if (i >= j) break;

        /* swap x[i], x[j] */
        t = x[i];
        x[i] = x[j];
        x[j] = t;
    }

    return j;
}

void quickSort(T *x, tblIndex lb, tblIndex ub) {
    tblIndex m;

    if (lb >= ub) return;
    m = partition(x, lb, ub);
    quickSort(x, lb, m);
    quickSort(x, m + 1, ub);
}

void quickSortImproved(T *x, tblIndex lb, tblIndex ub) {
    while (lb < ub) {
        tblIndex m;

        /* quickly sort short lists */
        if (ub - lb <= 50) {
            sortByInsertion(x, lb, ub);
            return;
        }

        m = partition(x, lb, ub);

        /* eliminate tail recursion and */
        /* sort the smallest partition first */
        /* to minimize stack requirements    */
        if (m - lb <= ub - m) {
            quickSortImproved(x, lb, m);
            lb = m + 1;
        } else {
            quickSortImproved(x, m + 1, ub);
            ub = m;
        }
    }
}

void fill(T *a, tblIndex lb, tblIndex ub) {
    tblIndex i;
    srand(1);
    for (i = lb; i <= ub; i++) a[i] = rand();
}

int main(int argc, char *argv[]) {
    tblIndex maxnum, lb, ub;
    T *a;

    /* command-line:
     *
     *   qui maxnum
     *
     *   qui 2000
     *       sorts 2000 records
     *
     */

    maxnum = atoi(argv[1]);
    lb = 0; ub = maxnum - 1;
    if ((a = malloc(maxnum * sizeof(T))) == 0) {
        fprintf (stderr, "insufficient memory (a)\n");
        exit(1);
    }

    fill(a, lb, ub);
    quickSortImproved(a, lb, ub);

    return 0;
}