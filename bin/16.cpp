/* compares (with respect to the lexicographic order) the subarrays 
with the first n elements of given arrays t1 and t2, 
returns  0 if the subarrays are equal,
         1 if the subarray in t1 is greater than in t2,
        -1 if the subarray in t2 is greater than in t1
*/

int ArrayCmp(int n, int* t1, int* t2) {
  int i;
  for (i = 0; i < n; i++) {   /* line 10 */
    if (t1[i] > t2[i])        /* line 11 */
      return 1;
    else if (t1[i] < t2[i])   /* line 13 */
      return -1;
  }
  return 0;
}

