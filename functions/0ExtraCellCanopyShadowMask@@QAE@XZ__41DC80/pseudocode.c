ExtraCellCanopyShadowMask *__thiscall ExtraCellCanopyShadowMask::ExtraCellCanopyShadowMask(
        ExtraCellCanopyShadowMask *this,
        int a2,
        int a3)
{
  int v4; // edi

  *((_BYTE *)this + 4) = 0xF; /*0x41dcad*/
  *((_DWORD *)this + 2) = 0; /*0x41dcb1*/
  *(_DWORD *)this = &ExtraCellCanopyShadowMask::`vftable'; /*0x41dcb4*/
  *((_DWORD *)this + 4) = 0; /*0x41dcbe*/
  *((_DWORD *)this + 3) = a2; /*0x41dcc9*/
  v4 = *((_DWORD *)this + 4); /*0x41dccc*/
  if ( v4 != a3 ) /*0x41dcd6*/
  {
    if ( v4 ) /*0x41dcda*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v4 + 4)) ) /*0x41dce0*/
        (**(void (__thiscall ***)(int, int))v4)(v4, 1); /*0x41dcf6*/
    }
    *((_DWORD *)this + 4) = a3; /*0x41dcfa*/
    if ( a3 ) /*0x41dcfd*/
      InterlockedIncrement((volatile LONG *)(a3 + 4)); /*0x41dd03*/
  }
  *((_DWORD *)this + 6) = 0; /*0x41dd09*/
  return this; /*0x41dd0e*/
}
