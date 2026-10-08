void __thiscall sub_43FF80(_DWORD *this, int a2)
{
  int v2; // edi
  int v3; // eax
  _DWORD *v4; // esi
  _DWORD *v5; // esi
  int v6; // edx

  if ( a2 ) /*0x43ff87*/
  {
    v2 = uExteriorCellBuffer - 1; /*0x43ff90*/
    v3 = 0; /*0x43ff93*/
    if ( v2 > 0 ) /*0x43ff97*/
    {
      v4 = (_DWORD *)*(this + 0xF); /*0x43ff9a*/
      while ( a2 != *v4 ) /*0x43ffa4*/
      {
        if ( *v4 ) /*0x43ffa0*/
        {
          ++v3; /*0x43ffaa*/
          ++v4; /*0x43ffad*/
          if ( v3 < v2 ) /*0x43ffb2*/
            continue; /*0x43ffb2*/
        }
        return; /*0x43ffb2*/
      }
      for ( ; v3 < v2; *v5 = v6 ) /*0x43ffbc*/
      {
        v5 = (_DWORD *)(*(this + 0xF) + 4 * v3); /*0x43ffc3*/
        v6 = v5[1]; /*0x43ffc6*/
        if ( !v6 ) /*0x43ffcb*/
          break; /*0x43ffcb*/
        if ( *(_BYTE *)(v6 + 0x26) != 6 ) /*0x43ffd1*/
          break; /*0x43ffd1*/
        ++v3; /*0x43ffd3*/
      }
      *(_DWORD *)(*(this + 0xF) + 4 * v3) = a2; /*0x43ffdf*/
    }
  }
}
