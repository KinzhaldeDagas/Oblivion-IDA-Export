unsigned int __thiscall NiTLargeArray_RawPointer_AddFirstEmpty(MEF_RawPointerArray32 *self, void **element)
{
  unsigned int result; // eax
  unsigned int usedEnd; // edi
  void **data; // edx
  void **v6; // ecx
  void **v7; // edx

  if ( !*element ) /*0x449076*/
    return 0xFFFFFFFF; /*0x449086*/
  usedEnd = self->usedEnd; /*0x44908a*/
  result = 0; /*0x44908d*/
  if ( usedEnd ) /*0x449091*/
  {
    data = self->data; /*0x449093*/
    v6 = data; /*0x449096*/
    while ( *v6 ) /*0x44909b*/
    {
      ++result; /*0x44909d*/
      ++v6; /*0x4490a0*/
      if ( result >= usedEnd ) /*0x4490a5*/
        goto LABEL_7; /*0x4490a5*/
    }
    data[result] = *element; /*0x4490e1*/
    ++self->occupiedCount; /*0x4490e4*/
  }
  else
  {
LABEL_7:
    if ( usedEnd >= self->capacity ) /*0x4490aa*/
      NiTLargeArray_Resize32((unsigned int *)self, usedEnd + self->growBy); /*0x4490b4*/
    if ( usedEnd < self->usedEnd ) /*0x4490bc*/
    {
      if ( *element ) /*0x4490ee*/
      {
        v7 = self->data; /*0x4490f4*/
        if ( !v7[usedEnd] ) /*0x4490f7*/
        {
          ++self->occupiedCount; /*0x4490fd*/
          v7[usedEnd] = *element; /*0x449106*/
          return usedEnd; /*0x44910f*/
        }
      }
      else if ( self->data[usedEnd] ) /*0x449115*/
      {
        --self->occupiedCount; /*0x44911b*/
      }
    }
    else
    {
      self->usedEnd = usedEnd + 1; /*0x4490c1*/
      if ( *element ) /*0x4490c4*/
      {
        ++self->occupiedCount; /*0x4490ca*/
        self->data[usedEnd] = *element; /*0x4490d4*/
        return usedEnd; /*0x4490dd*/
      }
    }
    self->data[usedEnd] = *element; /*0x449125*/
    return usedEnd; /*0x449128*/
  }
  return result; /*0x449080*/
}
