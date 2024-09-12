#include <iostream>

struct Node {
  int data;
  Node *next;
};

Node *CreateNode(int data);
void InsertNode(Node **list, Node *element);
void PrintList(Node *list);
Node *GetNode(Node *list, int index);

int main(int argc, char *argv[]) {
  Node *lista = nullptr;

  InsertNode(&lista, CreateNode(1));
  InsertNode(&lista, CreateNode(2));
  InsertNode(&lista, CreateNode(3));
  InsertNode(&lista, CreateNode(4));
  InsertNode(&lista, CreateNode(5));
  InsertNode(&lista, CreateNode(6));

  PrintList(lista);

  Node *e = GetNode(lista, 4);
  if (e!= nullptr) std::cout << e->data << std::endl;

  return 0;
}

Node *CreateNode(int data) {
  Node *newNode = nullptr;
  newNode = (Node *)malloc(sizeof(Node));
  newNode->data = data;
  //(*newNode).data = data;
  newNode->next = nullptr;
  return newNode;
}

void InsertNode(Node **list, Node *element) {
  if (*list == nullptr) {
    *list = element;
    return;
  }
  Node *s = *list;

  while (s->next != nullptr) {
    s = s->next;
  }
  s->next = element;
}

void PrintList(Node *list) {
  Node *s = list;
  while (s != nullptr) {
    std::cout << s->data << std::endl;
    s = s->next;
  }
}

Node *GetNode(Node *list, int index) {
  Node *s = list;
  for (int i = 0; i < index && s != nullptr; ++i) {
    s = s->next;
  }
  return s;
}