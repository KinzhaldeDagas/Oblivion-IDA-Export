unsigned int __thiscall NiTObjectArray_SetAt(MEF_RefPointerArray16 *self, unsigned int index, void **element)
{
  unsigned int result; // eax
  int v5; // ecx
  void **data; // edx
  void **v7; // ecx
  volatile LONG *v8; // esi
  void **v9; // edi
  bool v10; // zf

  if ( (dword_B35AD8[0] & 1) == 0 ) /*0x4b34f1*/
  {
    dword_B35AD8[0] |= 1u; /*0x4b34f3*/
    unk_B35AD4 = 0; /*0x4b34fe*/
    atexit(sub_A1B600); /*0x4b3508*/
  }
  result = index; /*0x4b3514*/
  if ( index < self->usedEnd ) /*0x4b351e*/
  {
    v5 = unk_B35AD4; /*0x4b3538*/
    data = self->data; /*0x4b3541*/
    if ( *element == (void *)unk_B35AD4 ) /*0x4b3544*/
    {
      if ( data[index] != (void *)v5 ) /*0x4b3554*/
        --self->occupiedCount; /*0x4b3556*/
    }
    else if ( data[index] == (void *)v5 ) /*0x4b3549*/
    {
      ++self->occupiedCount; /*0x4b354b*/
    }
  }
  else
  {
    self->usedEnd = index + 1; /*0x4b3523*/
    if ( *element != (void *)unk_B35AD4 ) /*0x4b3530*/
      ++self->occupiedCount; /*0x4b3532*/
  }
  v7 = self->data; /*0x4b355c*/
  v8 = (volatile LONG *)v7[index]; /*0x4b355f*/
  v9 = &v7[index]; /*0x4b3565*/
  if ( v8 != *element ) /*0x4b3568*/
  {
    if ( v8 ) /*0x4b356c*/
    {
      if ( !InterlockedDecrement(v8 + 1) ) /*0x4b3572*/
        (**(void (__thiscall ***)(void *, int))v8)((void *)v8, 1); /*0x4b3587*/
    }
    result = (unsigned int)*element; /*0x4b3589*/
    v10 = *element == 0; /*0x4b358c*/
    *v9 = *element; /*0x4b358e*/
    if ( !v10 ) /*0x4b3590*/
      return InterlockedIncrement((volatile LONG *)(result + 4)); /*0x4b3596*/
  }
  return result; /*0x4b359c*/
}
