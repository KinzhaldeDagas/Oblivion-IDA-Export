unsigned int __thiscall NiTObjectArray_AddFirstEmpty(MEF_RefPointerArray16 *self, void **element)
{
  unsigned __int16 usedEnd; // di
  unsigned __int16 v5; // ax
  void **data; // ebp
  unsigned int v7; // ebx
  volatile LONG *v8; // edi
  volatile LONG *v9; // eax
  bool v10; // zf

  if ( !*element ) /*0x4b3685*/
    return 0xFFFFFFFF; /*0x4b3694*/
  usedEnd = self->usedEnd; /*0x4b369d*/
  v5 = 0; /*0x4b36a1*/
  if ( usedEnd ) /*0x4b36a6*/
  {
    data = self->data; /*0x4b36a8*/
    while ( data[v5] ) /*0x4b36bd*/
    {
      if ( ++v5 >= self->usedEnd ) /*0x4b36c6*/
        goto LABEL_7; /*0x4b36c6*/
    }
    v7 = v5; /*0x4b36f3*/
    v8 = (volatile LONG *)data[v5]; /*0x4b36f6*/
    if ( v8 != *element ) /*0x4b36fc*/
    {
      if ( v8 ) /*0x4b3700*/
      {
        if ( !InterlockedDecrement(v8 + 1) ) /*0x4b3706*/
          (**(void (__thiscall ***)(void *, int))v8)((void *)v8, 1); /*0x4b371c*/
      }
      v9 = (volatile LONG *)*element; /*0x4b3722*/
      v10 = *element == 0; /*0x4b3724*/
      data[v7] = *element; /*0x4b3726*/
      if ( !v10 ) /*0x4b372a*/
        InterlockedIncrement(v9 + 1); /*0x4b3730*/
    }
    ++self->occupiedCount; /*0x4b3736*/
    return v7; /*0x4b373e*/
  }
  else
  {
LABEL_7:
    if ( usedEnd >= (unsigned int)self->capacity ) /*0x4b36d1*/
      NiTObjectArray_Resize16(self, usedEnd + self->growBy); /*0x4b36dc*/
    NiTObjectArray_SetAt(self, usedEnd, element); /*0x4b36e5*/
    return usedEnd; /*0x4b36ea*/
  }
}
