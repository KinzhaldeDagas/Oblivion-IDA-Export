BSTECreateTask_Layout_t *__thiscall BSTECreateTask_DeletingDestructor(
        BSTECreateTask_Layout_t *this,
        unsigned int flags)
{
  if ( (flags & 2) != 0 ) /*0x56b9cb*/
  {
    _LN21((char *)this, 0x10u, *((_DWORD *)this + 0xFFFFFFFF), (void (__thiscall *)(void *))BSTECreateTask_Dtor); /*0x56b9dd*/
    if ( (flags & 1) != 0 ) /*0x56b9e5*/
      FormHeapFree((unsigned int)this + 0xFFFFFFFC); /*0x56b9e8*/
    return (BSTECreateTask_Layout_t *)((char *)this + 0xFFFFFFFC); /*0x56b9f0*/
  }
  else
  {
    BSTECreateTask_Dtor(this); /*0x56b9f8*/
    if ( (flags & 1) != 0 ) /*0x56ba00*/
      FormHeapFree((unsigned int)this); /*0x56ba03*/
    return this; /*0x56ba0b*/
  }
}
