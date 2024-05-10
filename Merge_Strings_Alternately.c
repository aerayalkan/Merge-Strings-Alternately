
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mergeAlternately(char *word1, char *word2) {
    int len1 = strlen(word1);
    int len2 = strlen(word2);
    int mergedLen = len1 + len2;
    char *merged = (char *)malloc((mergedLen + 1) * sizeof(char));
    int i = 0, j = 0, k = 0;

    while (i < len1 && j < len2) {
        merged[k++] = word1[i++];
        merged[k++] = word2[j++];
    }

    while (i < len1) {
        merged[k++] = word1[i++];
    }

    while (j < len2) {
        merged[k++] = word2[j++];
    }

    merged[k] = '\0'; 
    return merged;
}

int main() {
    char word1[101], word2[101];
    printf("ENTER THE FIRST WORD: ");
    scanf("%s", word1);
    printf("ENTER THE SECOND WORD: ");
    scanf("%s", word2);

    char *result = mergeAlternately(word1, word2);
    printf("Merged string: %s\n", result);
    free(result); 

    return 0;
}
