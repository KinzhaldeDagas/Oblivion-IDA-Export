unsigned int __thiscall NiTLargeArray32_AppendSlot(NiTLargeArrayUInt32 *self, const unsigned int *value)
{
  unsigned int count; // edi

  count = self->count; /*0x5a6ab4*/
  if ( count >= self->capacity ) /*0x5a6aba*/
    NiTLargeArray_Resize32((unsigned int *)self, count + self->growBy); /*0x5a6ac2*/
  NiTLargeArray32_SetSlot(self, count, value); /*0x5a6acf*/
  return count; /*0x5a6ad6*/
}
