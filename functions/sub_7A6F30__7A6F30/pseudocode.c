_DWORD *__thiscall sub_7A6F30(_DWORD *this, char a2)
{
  bool v3; // zf

  v3 = *((_BYTE *)this + 0x10) == 0;
  *this = &PosGen::`vftable';
  if ( v3 )
  {
    FormHeapFree(*(this + 2));
    FormHeapFree(*(this + 3));
  }
  *this = &Random::`vftable';
  if ( (a2 & 1) != 0 )
    FormHeapFree((unsigned int)this);
  return this;
}
