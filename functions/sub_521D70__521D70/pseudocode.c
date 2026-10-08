unsigned int *__thiscall sub_521D70(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 1); /*0x521d76*/
  *this = (unsigned int)&NiTArray<FaceGenUndo *>::`vftable'; /*0x521d77*/
  FormHeapFree(v4); /*0x521d7d*/
  if ( (a2 & 1) != 0 ) /*0x521d8a*/
    FormHeapFree((unsigned int)this); /*0x521d8d*/
  return this; /*0x521d97*/
}
