// Pass221: Refcounted NiTPointerList head-insert helper; node+0x08 owns the payload reference.
MEF_RefListNode32 *__thiscall NiTRefPointerList__AddHead(MEF_RefList32 *self, void **payload)
{
  struct MEF_RefListNode32 *v3; // edi
  volatile LONG *v4; // ebx
  volatile LONG *v5; // eax
  bool v6; // zf
  MEF_RefListNode32 *result; // eax

  v3 = (struct MEF_RefListNode32 *)(*((int (__thiscall **)(MEF_RefList32 *))self->vtable + 1))(self); /*0x749811*/
  v4 = (volatile LONG *)v3->payload; /*0x749813*/
  if ( v4 != *payload ) /*0x749819*/
  {
    if ( v4 ) /*0x74981d*/
    {
      if ( !InterlockedDecrement(v4 + 1) ) /*0x749823*/
        (**(void (__thiscall ***)(void *, int))v4)((void *)v4, 1); /*0x749839*/
    }
    v5 = (volatile LONG *)*payload; /*0x74983b*/
    v6 = *payload == 0; /*0x74983e*/
    v3->payload = *payload; /*0x749840*/
    if ( !v6 ) /*0x749843*/
      InterlockedIncrement(v5 + 1); /*0x749849*/
  }
  v3->previous = 0; /*0x74984f*/
  v3->next = self->head; /*0x749859*/
  result = self->head; /*0x74985b*/
  if ( result ) /*0x749860*/
  {
    result->previous = v3; /*0x749862*/
    ++self->count; /*0x749865*/
  }
  else
  {
    ++self->count; /*0x749873*/
    self->tail = v3; /*0x749877*/
  }
  self->head = v3; /*0x749869*/
  return result; /*0x74986c*/
}
