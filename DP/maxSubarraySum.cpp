#include <algorithm>

using namespace std;

//Kadane's algorithm


int maxSumSubarray(int array[], int n){
		int best = array[0];
		int curr = array[0];

		for(int i = 1; i < n; i++){
				curr = max(array[i], curr + array[i]);
				best = max(best, curr);
		}
		return best;
}
		
