unsigned int *__thiscall sub_439CA0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x439ca6*/
  *this = (unsigned int)&LockFreeStringMap<Model *>::LockFreeStringMapIterator::`vftable'; /*0x439ca7*/
  FormHeapFree(v4); /*0x439cad*/
  *(this + 2) = 0; /*0x439cba*/
  *this = (unsigned int)&LockFreeMap<char const *,Model *>::LockFreeMapIterator::`vftable'; /*0x439cc1*/
  if ( (a2 & 1) != 0 ) /*0x439cc7*/
    FormHeapFree((unsigned int)this); /*0x439cca*/
  return this; /*0x439cd4*/
}
