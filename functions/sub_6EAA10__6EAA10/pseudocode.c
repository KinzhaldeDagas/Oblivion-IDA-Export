char __thiscall sub_6EAA10(int this, float a2, int a3, _DWORD *a4)
{
  unsigned __int8 v5; // bl
  bool v6; // zf
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  double v12; // st5
  float v14; // [esp+1Ch] [ebp-1Ch]
  float v15; // [esp+20h] [ebp-18h]
  float v16; // [esp+24h] [ebp-14h]
  float v17; // [esp+28h] [ebp-10h]
  float v18[3]; // [esp+2Ch] [ebp-Ch] BYREF
  float v19; // [esp+40h] [ebp+8h]
  float v20; // [esp+40h] [ebp+8h]

  v14 = 1.0; /*0x6eaa17*/
  *(_BYTE *)(this + 0x3C) = 0; /*0x6eaa1d*/
  *(float *)(this + 0x30) = g_zeroNiPoint3.x; /*0x6eaa26*/
  *(float *)(this + 0x34) = g_zeroNiPoint3.y; /*0x6eaa2f*/
  v5 = 0; /*0x6eaa38*/
  v6 = *(_BYTE *)(this + 0xD) == 0; /*0x6eaa3a*/
  *(float *)(this + 0x38) = g_zeroNiPoint3.z; /*0x6eaa3d*/
  if ( !v6 ) /*0x6eaa40*/
  {
    do /*0x6eab45*/
    {
      v8 = *(_DWORD *)(this + 0x14); /*0x6eaa58*/
      v9 = 0x18 * v5; /*0x6eaa5f*/
      v10 = *(_DWORD *)(v8 + v9); /*0x6eaa61*/
      v11 = v8 + v9; /*0x6eaa66*/
      if ( v10 ) /*0x6eaa69*/
      {
        if ( *(float *)(v11 + 8) > 0.0 ) /*0x6eaa77*/
        {
          v19 = a2; /*0x6eaa83*/
          if ( 0.0 == *(float *)(v11 + 8) ) /*0x6eaa91*/
            goto LABEL_8; /*0x6eaa91*/
          if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6eaa97*/
            v19 = *(float *)(v11 + 0x14); /*0x6eaa9c*/
          if ( flt_A79F00 == v19 ) /*0x6eaab3*/
          {
LABEL_8:
            v14 = v14 - *(float *)(v11 + 8); /*0x6eaabe*/
          }
          else if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x54))( /*0x6eaad3*/
                      COERCE_FLOAT(LODWORD(v19)),
                      a3,
                      v18) )
          {
            v12 = *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8); /*0x6eaaec*/
            v15 = v18[0] * v12; /*0x6eaaf2*/
            v16 = v18[1] * v12; /*0x6eaafc*/
            v17 = v12 * v18[2]; /*0x6eab04*/
            *(float *)(this + 0x30) = *(float *)(this + 0x30) + v15; /*0x6eab0f*/
            *(float *)(this + 0x34) = v16 + *(float *)(this + 0x34); /*0x6eab19*/
            *(float *)(this + 0x38) = *(float *)(this + 0x38) + v17; /*0x6eab23*/
            *(_BYTE *)(this + 0x3C) = 1; /*0x6eab26*/
          }
          else
          {
            v14 = v14 - *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8); /*0x6eab37*/
          }
        }
      }
      ++v5; /*0x6eab3f*/
    }
    while ( v5 < *(_BYTE *)(this + 0xD) ); /*0x6eab45*/
  }
  if ( *(_BYTE *)(this + 0x3C) ) /*0x6eab4d*/
  {
    v20 = 1.0 / v14; /*0x6eab98*/
    *(float *)(this + 0x30) = *(float *)(this + 0x30) * v20; /*0x6eaba9*/
    *(float *)(this + 0x34) = *(float *)(this + 0x34) * v20; /*0x6eabb1*/
    *(float *)(this + 0x38) = v20 * *(float *)(this + 0x38); /*0x6eabb7*/
    *a4 = *(_DWORD *)(this + 0x30); /*0x6eabbd*/
    a4[1] = *(_DWORD *)(this + 0x34); /*0x6eabc2*/
    a4[2] = *(_DWORD *)(this + 0x38); /*0x6eabc9*/
    return 1; /*0x6eabcc*/
  }
  else
  {
    *(_DWORD *)(this + 0x30) = dword_B24FC8; /*0x6eab59*/
    *(_DWORD *)(this + 0x34) = dword_B24FCC; /*0x6eab61*/
    *(_DWORD *)(this + 0x38) = dword_B24FD0; /*0x6eab6e*/
    *a4 = *(_DWORD *)(this + 0x30); /*0x6eab74*/
    a4[1] = *(_DWORD *)(this + 0x34); /*0x6eab79*/
    a4[2] = *(_DWORD *)(this + 0x38); /*0x6eab80*/
    return 0; /*0x6eab83*/
  }
}
