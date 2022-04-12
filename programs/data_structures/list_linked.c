// LINKED LIST

struct listElement
{
	struct listElement *next; 
	int key;
};

// O(1)
struct listElement* createElement(int value)
{
	struct listElement *element = (struct listElement*)malloc(sizeof(struct listElement));
	element->key = value;
	element->next = NULL;
	return element;
}

// O(n)
struct listElement *listSearch(struct listElement *head, int value)
{
	x = head;
	while (x != NULL && x->key != value)
	{
		x = x->next;
	}
	return x;
}


// O(n), since it's bound to worst case scenario
void listInsert(struct listElement *head, struct listElement *element)
{	
	if (head->next == NULL)
		head->next = element;
	else
	{
		curr = head;
		while (curr->next != NULL)
		{
			curr = curr->next;
		}
		curr->next = element;
	}
}

// O(n), since it's bound to worst case scenario
void listDelete(struct listElement *head, struct listElement* element)
{
	if (head == element)
		free(head);
	else 
	{
		//find the element before the element to be deleted
		prev = head
		while (curr->next != element)
			prev = prev->next;

		//splice and delete
		after = element->next;
		prev->next = after;
		free(element);
	}
}
