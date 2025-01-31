/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* dailyTemperatures(int* temperatures, int temperaturesSize, int* returnSize) {
    int n = temperaturesSize;
    int* result = (int*)malloc(n * sizeof(int));
    int* nextWarmer = (int*)malloc(n * sizeof(int)); 
    int nextIndex = 0; 

    for (int i = n - 1; i >= 0; i--) {
        while (nextIndex > 0 && temperatures[i] >= temperatures[nextWarmer[nextIndex - 1]]) {
            nextIndex--; 
        }

        if (nextIndex > 0) {
            result[i] = nextWarmer[nextIndex - 1] - i; 
        } else {
            result[i] = 0; 
        }

        nextWarmer[nextIndex++] = i; 
    }

    *returnSize = n;
    free(nextWarmer);
    return result;
}