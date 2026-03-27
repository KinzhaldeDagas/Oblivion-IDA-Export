unsigned int *__thiscall sub_439CE0(unsigned int *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *(this + 2);
  *this = (unsigned int)&LockFreeStringMap<KFModel *>::LockFreeStringMapIterator::`vftable';
  FormHeapFree(v4);
  *(this + 2) = 0;
  *this = (unsigned int)&LockFreeMap<char const *,KFModel *>::LockFreeMapIterator::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
