unsigned int __thiscall NiTLargeArray32_SetSlot(
        NiTLargeArrayUInt32 *self,
        unsigned int index,
        const unsigned int *value)
{
  unsigned int result; // eax
  const unsigned int *v4; // edx
  unsigned int *data; // esi

  result = index; /*0x446c50*/
  if ( index < self->count ) /*0x446c57*/
  {
    v4 = value; /*0x446c77*/
    data = self->data; /*0x446c7f*/
    if ( *value ) /*0x446c7b*/
    {
      if ( !data[index] ) /*0x446c84*/
      {
        ++self->nonzeroCount; /*0x446c8a*/
        self->data[index] = *value; /*0x446c94*/
        return result; /*0x446c97*/
      }
    }
    else if ( data[index] ) /*0x446c9a*/
    {
      --self->nonzeroCount; /*0x446ca0*/
    }
  }
  else
  {
    self->count = index + 1; /*0x446c5c*/
    v4 = value; /*0x446c5f*/
    if ( *value ) /*0x446c63*/
    {
      ++self->nonzeroCount; /*0x446c68*/
      self->data[index] = *value; /*0x446c71*/
      return result; /*0x446c74*/
    }
  }
  self->data[index] = *v4; /*0x446caa*/
  return result; /*0x446c74*/
}
