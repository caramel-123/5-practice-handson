#include <stdio.h>
#include <stdlib.h>
void ascending(int *table, int tableSize) {
  int temp;

  for (int i=0; i<(tableSize - 1); i++) {
    for (int j=(i+1); j<tableSize; j++) {
      if (*(table + i) > *(table + j)) {
        temp = *(table + i);
        *(table + i) = *(table + j);
        *(table + j) = temp;
      }
    }
  }
}

void descending(int *table, int tableSize) {
  int temp;

  for (int i=0; i<(tableSize - 1); i++) {
    for (int j=(i+1); j<tableSize; j++) {
      if (*(table + i) < *(table + j)) {
        temp = *(table + j);
        *(table + j) = *(table + i);
        *(table + i) = temp;
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
  printf("\nAsceding Table:\n");
  display(table, tableSize, columnSize);

  descending(table, tableSize);
  printf("\nDescending Table:\n");
  display(table, tableSize, columnSize);

  return 0;
}


/* if arrange by row
void ascending(int **table, int rowSize, int columnSize) {
  int temp;
  for (int k=0; k<rowSize; k++) {
    for (int i=0; i<(columnSize - 1); i++) {
      for (int j=(i+1); j<columnSize; j++) {
        if (*(table[k] + i) > *(table[k] + j)) {
          temp = *(table[k] + i);
          *(table[k] + i) = *(table[k] + j);
          *(table[k] + j) = temp;
        }
      } 
    }
  }
}
*/