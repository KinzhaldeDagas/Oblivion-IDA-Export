int __thiscall sub_7501F0(const char **this, _DWORD **a2)
{
  NiTimeController *v3; // eax
  int v4; // esi
  double v5; // st7

  v3 = (NiTimeController *)FormHeapAlloc(0x64u); /*0x7501f7*/
  v4 = (int)v3; /*0x7501fc*/
  if ( v3 ) /*0x750205*/
  {
    sub_75E540(v3); /*0x750209*/
    *(_DWORD *)v4 = &NiPSysEmitterCtlr::`vftable'; /*0x750212*/
    *(_DWORD *)(v4 + 0x48) = 0; /*0x750218*/
    v5 = flt_A7DEB4; /*0x75021b*/
    *(_BYTE *)(v4 + 0x54) = 0; /*0x750221*/
    *(float *)(v4 + 0x50) = -v5; /*0x750226*/
    *(_DWORD *)(v4 + 0x58) = 0; /*0x75022d*/
    *(_DWORD *)(v4 + 0x5C) = 0; /*0x750230*/
    *(_DWORD *)(v4 + 0x60) = 0; /*0x750233*/
    sub_74FD50(this, v4, a2); /*0x750236*/
    return v4; /*0x75023c*/
  }
  else
  {
    sub_74FD50(this, 0, a2); /*0x75024d*/
    return 0; /*0x750253*/
  }
}
