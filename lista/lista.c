#include <stdio.h>

struct node
{
    int val;
    struct node *next;
};

void imprimirlista(){
    struct node *head;
    head = malloc (sizeof(struct node));
    struct node *t;
    t=head;

    while (t!= NULL)
    {
        printf ("%d", t->val);
        t = t->next;
    }
}
void crearlista()
{
    struct node *head,*cur,*prev;
    head = malloc (sizeof(struct node));
    prev = malloc (sizeof (struct node));
    head ->val = 1;
    prev = head;
    int i;
    for (i = 2; i <= 4; i++)
    {
        cur = malloc (sizeof (struct node));
        cur ->  val = i;
        prev ->  next = cur;
        prev = cur;
        }
    prev ->next = NULL;
}struct node *head,
void eliminar(int key)
{
    struct node *head,*cur,*prev,*temp;
    head = malloc (sizeof(struct node));
    prev = malloc (sizeof (struct node));
    temp = malloc (sizeof (struct node));
    cur = malloc (sizeof (struct node));
    if(head-> val == key)
    {
        temp = head;
        head = head -> next;
        free(temp);struct node *head,
    }
    else
        {
            prev = head;
            cur = head ->  next;

        while (cur != NULL)
        {
            if (cur->val == key)
            {
                prev ->next = cur->  next;
                free(cur);
                break;
            }
        prev = cur;
        cur = cur ->  next;

        }

    }

}

main()
{

   crearlista();
   imprimirlista();
   eliminar(2);


}
