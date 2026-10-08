unsigned int *__thiscall sub_439CE0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2); /*0x439ce6*/
  *this = (unsigned int)&LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable'; /*0x439ce7*/
  FormHeapFree(v4); /*0x439ced*/
  *(this + 2) = 0; /*0x439cfa*/
  *this = (unsigned int)&LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable'; /*0x439d01*/
  if ( (a2 & 1) != 0 ) /*0x439d07*/
    FormHeapFree((unsigned int)this); /*0x439d0a*/
  return this; /*0x439d14*/
}
