#include <iostream>
#include<vector>

std::vector<int> Merge(int A[], int p, int q, int r) {
    std::vector<int> result;
    int b = q;// border

    for (int i = 0; i <= r; i++) {
        switch (A[p] > A[q]) {

        case true:
           result.push_back( A[q]);
            q++;
            break;

        case false:
            switch (p < b) {
            case true:
                result.push_back(A[p]);
                p++;
                break;
            case false:
                result.push_back(A[q]);
                q++;
                break;
            }

            break;
        }
    }
    for (auto it: result)
        std::cout << it << " ";

    return result;
}

int main() {

    int A[] = {2,4,5,6,1,2,3,6};
    int p = 0;
    int q = 4;
    int r = sizeof(A) / sizeof(*A)-1;
    
   Merge(A, p, q, r);

    }