
 long long toh(int n, int from, int to, int aux) {
        // Your code here
         if(n == 1) {
            cout << "move disk" << n << "from rod" << from << "to rod" << to << endl;
            return 1;
        }
        int count = toh(n-1, from, aux, to);
        
        cout << "move disk" << n << "from rod" << from <<"to rod" << to << endl;
        
        count += 1;
        count += toh(n-1, aux, to, from);
        return count;
    }
