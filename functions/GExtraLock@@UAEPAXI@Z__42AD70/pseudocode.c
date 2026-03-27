ExtraLock *__thiscall ExtraLock::`scalar deleting destructor'(ExtraLock *this, char a2)
{
  unsigned int v4; // [esp-4h] [ebp-8h]

  v4 = *((_DWORD *)this + 3);
  *(_DWORD *)this = &ExtraLock::`vftable';
  FormHeapFree(v4);
  *(_DWORD *)this = &BSExtraData::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
