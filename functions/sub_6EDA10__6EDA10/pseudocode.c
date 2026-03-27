void __thiscall sub_6EDA10(_DWORD *this, int a2, int a3, char a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx

  if ( a3 == 1 )
  {
    if ( *(this + 6) < 0x10u )
      v4 = this + 1;
    else
      v4 = (_DWORD *)*(this + 1);
    *((_BYTE *)v4 + a2) = a4;
  }
  else
  {
    if ( *(this + 6) < 0x10u )
      v5 = this + 1;
    else
      v5 = (_DWORD *)*(this + 1);
    _memset((char *)v5 + a2, a4, a3);
  }
}
