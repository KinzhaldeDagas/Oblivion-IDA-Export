void __thiscall sub_6CFC20(int this)
{
  unsigned __int16 v2; // di
  bool v3; // zf
  double v4; // st7
  int v5; // edx
  float v6; // [esp+8h] [ebp-8h] BYREF
  float v7; // [esp+Ch] [ebp-4h] BYREF

  if ( (*(_BYTE *)(this + 8) & 0x20) == 0 ) /*0x6cfc2e*/
  {
    *(float *)(this + 0x14) = flt_A7DEB4; /*0x6cfc3b*/
    v2 = 0; /*0x6cfc3e*/
    v3 = *(_WORD *)(this + 0x44) == 0; /*0x6cfc40*/
    *(float *)(this + 0x18) = -flt_A7DEB4; /*0x6cfc4c*/
    if ( !v3 ) /*0x6cfc4f*/
    {
      do /*0x6cfcba*/
      {
        v4 = flt_A7DEB4; /*0x6cfc51*/
        v5 = *(_DWORD *)(this + 0x3C); /*0x6cfc57*/
        v7 = -v4; /*0x6cfc67*/
        v6 = v4; /*0x6cfc71*/
        (*(void (__thiscall **)(int, float *, float *))(*(_DWORD *)(v5 + 0x30 * v2) + 0x80))(v5 + 0x30 * v2, &v6, &v7); /*0x6cfc83*/
        if ( *(float *)(this + 0x14) > (double)v6 ) /*0x6cfc93*/
          *(float *)(this + 0x14) = v6; /*0x6cfc95*/
        if ( *(float *)(this + 0x18) < (double)v7 ) /*0x6cfcaa*/
          *(float *)(this + 0x18) = v7; /*0x6cfcac*/
        ++v2; /*0x6cfcb3*/
      }
      while ( v2 < *(_WORD *)(this + 0x44) ); /*0x6cfcba*/
    }
    if ( flt_A7DEB4 == *(float *)(this + 0x14) && -flt_A7DEB4 == *(float *)(this + 0x18) ) /*0x6cfce1*/
      sub_6D0510(this); /*0x6cfce9*/
  }
}
