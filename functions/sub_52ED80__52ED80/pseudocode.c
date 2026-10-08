unsigned int __thiscall sub_52ED80(unsigned int *this, unsigned int index, unsigned int *value)
{
  if ( index >= *(this + 2) ) /*0x52ed8b*/
    NiTLargeArray_Resize32(this, index + *(this + 5)); /*0x52ed93*/
  NiTLargeArray32_SetSlot((NiTLargeArrayUInt32 *)this, index, value); /*0x52eda0*/
  return index; /*0x52eda7*/
}
