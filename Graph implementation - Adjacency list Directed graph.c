#include <stdio.h>

    if (temp == NULL) return;

    if (prev == NULL)
        graph[src] = temp->next;
    else
        prev->next = temp->next;

    free(temp);

    printf("After deleting edge the adjacency list is : \n");
    print(N);
}


void deleteVertex(int *N) {
    int v;
    printf("Enter the vertex to be deleted : ");
    scanf("%d", &v);

    if (v < 1 || v > *N) {
        printf("Invalid vertex.\n");
        return;
    }


    for (int i = 1; i <= *N; i++) {
        GNODE temp = graph[i], prev = NULL;

        while (temp != NULL) {
            if (temp->vertex == v) {
                if (prev == NULL)
                    graph[i] = temp->next;
                else
                    prev->next = temp->next;

                GNODE del = temp;
                temp = temp->next;
                free(del);
            } else {
                prev = temp;
                temp = temp->next;
            }
        }
    }


    GNODE temp = graph[v];
    while (temp != NULL) {
        GNODE del = temp;
        temp = temp->next;
        free(del);
    }


    for (int i = v; i < *N; i++) {
        graph[i] = graph[i + 1];
    }

    graph[*N] = NULL;


    for (int i = 1; i <= *N; i++) {
        GNODE temp2 = graph[i];
}