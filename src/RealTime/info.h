#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

#define SHM_KEY 8000
#define SHM_KEY2 5000

#define MAX_PROCESSOS 20
#define EVER ;;

typedef struct process
{
    char name[10]; // Nome do Programa
    int index;     // Numero do processo
    int init;      // Inicio (tempo)
    int duration;  // tempo de duracao
    int last;      // é o último (0 = false | 1 = true)
    pid_t pid;
} Process;

typedef struct node
{
    Process process;
    struct node *next;
} Node;

typedef struct queue
{
    Node *front;
    Node *rear;
} Queue;

void initQueue(Queue *q);
int isEmpty(Queue *q);
void enqueue(Queue *q, Process p);
void dequeue(Queue *q);
Process frontData(Queue *q);
void displayQueue(Queue *q);
void queueSort(Queue *q);
