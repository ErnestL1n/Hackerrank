void printKMax(int arr[], int n, int k){
	//Write your code here.
    deque<int> dq;
    for(int i=0;i<k;++i){
        while(dq.size() and arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    for(int i=k;i<n;++i){
        cout << arr[dq.front()] <<" ";
        while(dq.size() and dq.front()<=i-k){
            dq.pop_front();
        }
        while(dq.size() and arr[i]>=arr[dq.back()]){
            dq.pop_back();
        }
        dq.push_back(i);
    }
    cout << arr[dq.front()] <<" ";
    cout << "\n";
}
