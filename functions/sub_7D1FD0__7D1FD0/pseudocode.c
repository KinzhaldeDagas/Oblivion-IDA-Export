void **__thiscall NiTRefPointerList__RemoveTail(MEF_RefList32 *self, void **result)
{
  MEF_RefListNode32 *tail; // edi
  MEF_RefListNode32 *previous; // eax
  volatile LONG *payload; // eax

  tail = self->tail; /*0x7d1ffe*/
  previous = tail->previous; /*0x7d2001*/
  self->tail = previous; /*0x7d2006*/
  if ( previous ) /*0x7d2009*/
    previous->next = 0; /*0x7d200b*/
  else
    self->head = 0; /*0x7d2013*/
  payload = (volatile LONG *)tail->payload; /*0x7d201a*/
  *result = (void *)payload; /*0x7d2023*/
  if ( payload ) /*0x7d2025*/
    InterlockedIncrement(payload + 1); /*0x7d202b*/
  (*((void (__thiscall **)(MEF_RefList32 *, MEF_RefListNode32 *))self->vtable + 2))(self, tail); /*0x7d2049*/
  --self->count; /*0x7d204b*/
  return result; /*0x7d2051*/
}
