// Searches a refcounted pointer list by payload identity, removes the first matching node through RemovePosition, and returns a strong reference. Used for active/full shadow lights and receiver geometry removal.
void **__thiscall NiTRefPointerList__RemoveFirstByValue(MEF_RefList32 *self, void **result, void **payload)
{
  char v3; // bl
  MEF_RefListNode32 *head; // eax
  void **v5; // ebp
  bool v6; // zf
  MEF_RefListNode32 *v7; // esi
  void **p_next; // eax
  void **v9; // eax
  volatile LONG *v10; // eax
  void (__thiscall ***v11)(void *, int); // esi
  void *v13[4]; // [esp+18h] [ebp-10h] BYREF

  v3 = 0; /*0x7d5fa7*/
  head = self->head; /*0x7d5fad*/
  v5 = payload; /*0x7d5fb2*/
  if ( head ) /*0x7d5fb6*/
  {
    while ( 1 ) /*0x7d5fc0*/
    {
      v6 = *payload == head->payload; /*0x7d5fc0*/
      v7 = head; /*0x7d5fc6*/
      head = head->next; /*0x7d5fc8*/
      if ( v6 ) /*0x7d5fca*/
        break; /*0x7d5fca*/
      if ( !head ) /*0x7d5fce*/
        goto LABEL_4; /*0x7d5fce*/
    }
    p_next = (void **)&v7->next; /*0x7d5ff0*/
  }
  else
  {
LABEL_4:
    p_next = 0; /*0x7d5fd0*/
  }
  payload = p_next; /*0x7d5fd4*/
  if ( p_next ) /*0x7d5fd8*/
  {
    v9 = NiTRefPointerList__RemovePosition(self, v13, (MEF_RefListNode32 **)&payload); /*0x7d5fe4*/
    v3 = 1; /*0x7d5fe9*/
  }
  else
  {
    v9 = v5; /*0x7d5ff4*/
  }
  v10 = (volatile LONG *)*v9; /*0x7d5ff6*/
  *result = (void *)v10; /*0x7d5ffe*/
  if ( v10 ) /*0x7d6000*/
    InterlockedIncrement(v10 + 1); /*0x7d6006*/
  v13[3] = 0; /*0x7d6012*/
  if ( (v3 & 1) != 0 ) /*0x7d601a*/
  {
    v11 = (void (__thiscall ***)(void *, int))v13[0]; /*0x7d601c*/
    if ( v13[0] ) /*0x7d6029*/
    {
      if ( !InterlockedDecrement((volatile LONG *)v13[0] + 1) ) /*0x7d602f*/
      {
        if ( v11 ) /*0x7d603b*/
          (**v11)(v11, 1); /*0x7d6045*/
      }
    }
  }
  return result; /*0x7d6049*/
}
