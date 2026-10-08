struct __declspec(align(8)) dictionary
{
comparefunc comp;
destroyfunc destroy;
void *extra;
dictionary_entry *head;
UINT num_entries;
};
