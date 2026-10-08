void __thiscall sub_6EDA10(_DWORD *this, int a2, unsigned int a3, char a4)
{
  _DWORD *v4; // ecx
  _DWORD *v5; // ecx

  if ( a3 == 1 ) /*0x6eda17*/
  {
    if ( *(this + 6) < 0x10u ) /*0x6eda1d*/
      v4 = this + 1; /*0x6eda38*/
    else
      v4 = (_DWORD *)*(this + 1); /*0x6eda1f*/
    *((_BYTE *)v4 + a2) = a4; /*0x6eda2a*/
  }
  else
  {
    if ( *(this + 6) < 0x10u ) /*0x6eda45*/
      v5 = this + 1; /*0x6eda4c*/
    else
      v5 = (_DWORD *)*(this + 1); /*0x6eda47*/
    _memset((int)v5 + a2, a4, a3); /*0x6eda5d*/
  }
}
