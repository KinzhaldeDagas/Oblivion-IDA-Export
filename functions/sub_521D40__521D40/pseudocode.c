unsigned int *__thiscall sub_521D40(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x521d46*/
  *this = (unsigned int)&NiTArray<TESTexture *>::`vftable'; /*0x521d47*/
  FormHeapFree(v4); /*0x521d4d*/
  if ( (a2 & 1) != 0 ) /*0x521d5a*/
    FormHeapFree((unsigned int)this); /*0x521d5d*/
  return this; /*0x521d67*/
}
