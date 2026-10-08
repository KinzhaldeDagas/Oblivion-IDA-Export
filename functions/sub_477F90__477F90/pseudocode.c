void __thiscall sub_477F90(int this)
{
  int v1; // esi
  unsigned __int16 v2; // ax
  __int16 v3; // ax

  if ( *(_WORD *)(this + 0xA) ) /*0x477f90*/
  {
    v1 = *(_DWORD *)(this + 4); /*0x477f98*/
    do /*0x477fbd*/
    {
      v2 = *(_WORD *)(this + 0xA); /*0x477fa0*/
      if ( *(_DWORD *)(v1 + 4 * v2 - 4) ) /*0x477fa7*/
        break; /*0x477fb1*/
      v3 = v2 - 1; /*0x477fb3*/
      *(_WORD *)(this + 0xA) = v3; /*0x477fb9*/
    }
    while ( v3 ); /*0x477fbd*/
  }
}
