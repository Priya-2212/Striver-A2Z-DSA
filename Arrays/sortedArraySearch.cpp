 int searchInSorted(int arr[], int N, int K) {

        // Your code here
        int i;
        for(i = 0; i < N; i++) {
            if(arr[i] == K) {
                return 1;
            }
        }
        return -1;
    }
