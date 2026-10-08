char __thiscall sub_4FA1B0(_DWORD *this, int a2)
{
  _DWORD *v2; // eax

  if ( *this ) /*0x4fa1b0*/
  {
    v2 = (_DWORD *)(*this + 0x40); /*0x4fa1b6*/
    if ( *this != 0xFFFFFFC0 ) /*0x4fa1b9*/
    {
      while ( *v2 ) /*0x4fa1c4*/
      {
        if ( *(_DWORD *)(*v2 + 0xC) == a2 ) /*0x4fa1c9*/
          return 1; /*0x4fa1d7*/
        v2 = (_DWORD *)v2[1]; /*0x4fa1cb*/
        if ( !v2 ) /*0x4fa1d0*/
          return 0; /*0x4fa1d0*/
      }
    }
  }
  return 0; /*0x4fa1d4*/
}
