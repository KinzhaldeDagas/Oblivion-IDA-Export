char __thiscall sub_568FD0(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // eax

  v2 = a2; /*0x568fd4*/
  if ( *(this + 1) || *this ) /*0x568fdb*/
  {
    while ( *this && v2 && *v2 && *this == *v2 ) /*0x568ff2*/
    {
      this = (_DWORD *)*(this + 1); /*0x568ff4*/
      v2 = (_DWORD *)v2[1]; /*0x568ff9*/
      if ( !this ) /*0x568ffc*/
        return v2 != 0; /*0x569000*/
    }
    return 1; /*0x569002*/
  }
  else
  {
    return a2[1] || *a2; /*0x569013*/
  }
}
