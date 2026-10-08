// Generic refcounted NiT pointer-list RemoveHead helper. Unlinks the head, returns a strong reference to its payload, frees the node through the allocator virtual, and decrements count.
void **__thiscall NiTRefPointerList__RemoveHead(MEF_RefList32 *self, void **result)
{
  MEF_RefListNode32 *head; // edi
  MEF_RefListNode32 *next; // eax
  bool v5; // zf
  volatile LONG *payload; // eax

  head = self->head; /*0x7c176d*/
  next = head->next; /*0x7c1770*/
  v5 = head->next == 0; /*0x7c1772*/
  self->head = head->next; /*0x7c1774*/
  if ( v5 ) /*0x7c1777*/
    self->tail = 0; /*0x7c177e*/
  else
    next->previous = 0; /*0x7c1779*/
  payload = (volatile LONG *)head->payload; /*0x7c1781*/
  *result = (void *)payload; /*0x7c178a*/
  if ( payload ) /*0x7c178c*/
    InterlockedIncrement(payload + 1); /*0x7c1792*/
  (*((void (__thiscall **)(MEF_RefList32 *, MEF_RefListNode32 *))self->vtable + 2))(self, head); /*0x7c17ac*/
  --self->count; /*0x7c17ae*/
  return result; /*0x7c17b4*/
}
