#include <stdio.h>
#include <stdlib.h>

void ascending(int *table, int tableSize) {
  int temp;
  for (int i=0; i<(tableSize-1); i++) {
    for (int j=(i+1); j<tableSize; j++) {
      if (*(table + i) > *(table + i)) {
        temp = *(table + i);
        *(table + i) = *(table + j);
        *(table + j) = temp;
      }
    }
  }
}
void display(int *table, int tableSize, int columnSize) {
  for (int i = 0; i < tableSize; i++) {
    printf("%d ", *(table + i));
    if ((i + 1) % columnSize == 0)
      printf("\n");
  }
} 
int main() {
  int rowSize, columnSize;
  int *table;

  printf("How many rows: ");
  scanf("%d", &rowSize);
  printf("How many columns: ");
  scanf("%d", &columnSize);

  int tableSize = rowSize * columnSize;

  table = (int *) malloc(tableSize * sizeof(int));

  for (int i=0; i<tableSize; i++) {
    printf("Enter: ");
    scanf("%d", table + i);
  }

  ascending(table, tableSize);
  printf("Ascending: ");
  display(table, tableSize, columnSize);



}