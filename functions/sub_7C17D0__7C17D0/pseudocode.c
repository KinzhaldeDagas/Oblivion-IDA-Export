// Generic refcounted NiT pointer-list RemovePosition helper handling head, tail and middle nodes while returning a strong payload reference and preserving list links/count.
void **__thiscall NiTRefPointerList__RemovePosition(MEF_RefList32 *self, void **result, MEF_RefListNode32 **position)
{
  MEF_RefListNode32 *v4; // ebp
  struct MEF_RefListNode32 *previous; // edx
  MEF_RefListNode32 *next; // eax
  volatile LONG *payload; // edi

  v4 = *position; /*0x7c1802*/
  if ( *position == self->head ) /*0x7c1807*/
  {
    *position = v4->next; /*0x7c1810*/
    NiTRefPointerList__RemoveHead(self, result); /*0x7c1815*/
    return result; /*0x7c181a*/
  }
  else if ( v4 == self->tail ) /*0x7c1834*/
  {
    *position = 0; /*0x7c183a*/
    NiTRefPointerList__RemoveTail(self, result); /*0x7c1843*/
    return result; /*0x7c1848*/
  }
  else
  {
    previous = v4->previous; /*0x7c185f*/
    next = v4->next; /*0x7c1864*/
    *position = v4->next; /*0x7c1867*/
    if ( previous ) /*0x7c1869*/
      previous->next = next; /*0x7c186b*/
    if ( next ) /*0x7c186f*/
      next->previous = previous; /*0x7c1871*/
    payload = (volatile LONG *)v4->payload; /*0x7c1874*/
    if ( payload ) /*0x7c187d*/
      InterlockedIncrement(payload + 1); /*0x7c1883*/
    (*((void (__thiscall **)(MEF_RefList32 *, MEF_RefListNode32 *))self->vtable + 2))(self, v4); /*0x7c1899*/
    --self->count; /*0x7c189b*/
    *result = (void *)payload; /*0x7c18a5*/
    if ( payload ) /*0x7c18a7*/
    {
      InterlockedIncrement(payload + 1); /*0x7c18ad*/
      if ( !InterlockedDecrement(payload + 1) ) /*0x7c18c8*/
        (**(void (__thiscall ***)(volatile LONG *, int))payload)(payload, 1); /*0x7c18da*/
    }
    return result; /*0x7c18dc*/
  }
}
