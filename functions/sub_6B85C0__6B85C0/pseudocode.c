BOOL __thiscall sub_6B85C0(_DWORD *this, char a2)
{
  _DWORD *v2; // ecx

  *this = this + 1;
  if ( a2 )
  {
    if ( this == (_DWORD *)0xFFFFFFFC )
      return 0;
    *this = *(this + 2);
  }
  v2 = (_DWORD *)*this;
  return v2 && *v2;
}
