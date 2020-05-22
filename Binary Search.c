int binarySearch(int b[],int searchKey,int low,int high){
    int middle;

    while(low<=high){
        middle = (low+high)/2;

        if(searchKey==b[middle]){
            return middle;
        }
        else if(searchKey<b[middle]){
            high = middle-1;
        }
        else(searchKey>b[middle]){
            low = middle+1;
        }
    }
    return -1 // not found.
}
