_DWORD *__thiscall sub_405AA0(_DWORD *this, char a2)
{
  dword_BA7A00 = 0;
  *this = &hkCollisionListener::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
