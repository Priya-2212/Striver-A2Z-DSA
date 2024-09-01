 void frequencyCount(vector<int>& arr, int N, int P){
        // do modify in the given array
        for(int i=0;i<N;i++)
            if(arr[i]>N)
                arr[i]=0;
                
        int i=0;
        
        while(i<N){
            int j=arr[i]-1;
            
            if(arr[i]<=0)
                i++;
            else{
                if(arr[j]<=0){
                    arr[j]--;
                    arr[i]=0;
                    i++;
                }
                else{
                    swap(arr[i], arr[j]);
                    arr[j]=-1;
                }
            }
        }
        
        for(int i=0;i<N;i++)
            arr[i]=-arr[i];
    }
};
