int __thiscall sub_52B520(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  v2 = this + 0x23; /*0x52b520*/
  if ( this != (_DWORD *)0xFFFFFF74 ) /*0x52b528*/
  {
    while ( *v2 ) /*0x52b534*/
    {
      if ( *(_DWORD *)(*v2 + 0xC) == a2 ) /*0x52b539*/
        return *v2; /*0x52b547*/
      v2 = (_DWORD *)v2[1]; /*0x52b53b*/
      if ( !v2 ) /*0x52b540*/
        return 0; /*0x52b540*/
    }
  }
  return 0; /*0x52b544*/
}
