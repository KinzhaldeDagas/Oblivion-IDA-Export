unsigned int *__thiscall sub_5706D0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x5706d6*/
  *this = (unsigned int)&NiTArray<NiAVObject *>::`vftable'; /*0x5706d7*/
  FormHeapFree(v4); /*0x5706dd*/
  if ( (a2 & 1) != 0 ) /*0x5706ea*/
    FormHeapFree((unsigned int)this); /*0x5706ed*/
  return this; /*0x5706f7*/
}
