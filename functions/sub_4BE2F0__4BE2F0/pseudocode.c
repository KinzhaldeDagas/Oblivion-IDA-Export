unsigned int *__thiscall sub_4BE2F0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 7); /*0x4be2f6*/
  *this = (unsigned int)&ExteriorCellLoaderTask::`vftable'; /*0x4be2f7*/
  FormHeapFree(v4); /*0x4be2fd*/
  *this = (unsigned int)&BSTask<__int64>::`vftable'; /*0x4be30a*/
  InterlockedDecrement(&unk_B35B94); /*0x4be310*/
  if ( (a2 & 1) != 0 ) /*0x4be31b*/
    FormHeapFree((unsigned int)this); /*0x4be31e*/
  return this; /*0x4be328*/
}
