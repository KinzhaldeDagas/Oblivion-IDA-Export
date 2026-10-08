char __thiscall sub_6EB000(int this, float a2, int a3, _DWORD *a4)
{
  unsigned __int8 v5; // bl
  bool v6; // zf
  double v7; // st7
  int v9; // edi
  int v10; // edx
  int v11; // ecx
  double v12; // st5
  float v14; // [esp+1Ch] [ebp-24h]
  float v15; // [esp+20h] [ebp-20h]
  float v16; // [esp+24h] [ebp-1Ch]
  float v17; // [esp+28h] [ebp-18h]
  float v18; // [esp+2Ch] [ebp-14h]
  float v19; // [esp+30h] [ebp-10h] BYREF
  float v20; // [esp+34h] [ebp-Ch]
  float v21; // [esp+38h] [ebp-8h]
  float v22; // [esp+3Ch] [ebp-4h]
  float v23; // [esp+48h] [ebp+8h]

  v14 = 1.0; /*0x6eb007*/
  *(_BYTE *)(this + 0x40) = 0; /*0x6eb00d*/
  *(_DWORD *)(this + 0x30) = dword_B25AD0; /*0x6eb016*/
  *(_DWORD *)(this + 0x34) = dword_B25AD4; /*0x6eb01f*/
  *(_DWORD *)(this + 0x38) = dword_B25AD8; /*0x6eb028*/
  v5 = 0; /*0x6eb030*/
  v6 = *(_BYTE *)(this + 0xD) == 0; /*0x6eb032*/
  *(_DWORD *)(this + 0x3C) = dword_B25ADC; /*0x6eb035*/
  if ( !v6 ) /*0x6eb038*/
  {
    v7 = 0.0; /*0x6eb03e*/
    do /*0x6eb183*/
    {
      v9 = 0x18 * v5; /*0x6eb053*/
      v10 = *(_DWORD *)(this + 0x14) + v9; /*0x6eb055*/
      v11 = *(_DWORD *)v10; /*0x6eb058*/
      if ( *(_DWORD *)v10 ) /*0x6eb058*/
      {
        if ( v7 < *(float *)(v10 + 8) ) /*0x6eb06a*/
        {
          v19 = v7; /*0x6eb072*/
          v20 = v7; /*0x6eb076*/
          v21 = v7; /*0x6eb07a*/
          v22 = v7; /*0x6eb07e*/
          v23 = a2; /*0x6eb086*/
          if ( !v11 ) /*0x6eb08a*/
            goto LABEL_10; /*0x6eb08a*/
          if ( v7 == *(float *)(v10 + 8) ) /*0x6eb094*/
            goto LABEL_10; /*0x6eb094*/
          if ( (*(_BYTE *)(this + 0xC) & 1) != 0 ) /*0x6eb09a*/
            v23 = *(float *)(v10 + 0x14); /*0x6eb09f*/
          if ( flt_A79F00 == v23 ) /*0x6eb0b6*/
          {
LABEL_10:
            v14 = v14 - *(float *)(v10 + 8); /*0x6eb0c1*/
          }
          else
          {
            if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v11 + 0x50))( /*0x6eb0db*/
                   COERCE_FLOAT(LODWORD(v23)),
                   a3,
                   &v19) )
            {
              v12 = *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8); /*0x6eb108*/
              v15 = v19 * v12; /*0x6eb11e*/
              v16 = v20 * v12; /*0x6eb128*/
              v17 = v21 * v12; /*0x6eb132*/
              v18 = v12 * v22; /*0x6eb13a*/
              *(float *)(this + 0x30) = *(float *)(this + 0x30) + v15; /*0x6eb145*/
              *(float *)(this + 0x34) = *(float *)(this + 0x34) + v16; /*0x6eb14f*/
              *(float *)(this + 0x38) = v17 + *(float *)(this + 0x38); /*0x6eb159*/
              *(float *)(this + 0x3C) = *(float *)(this + 0x3C) + v18; /*0x6eb163*/
              *(_BYTE *)(this + 0x40) = 1; /*0x6eb166*/
            }
            else
            {
              v14 = v14 - *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8); /*0x6eb177*/
            }
            v7 = 0.0; /*0x6eb17b*/
          }
        }
      }
      ++v5; /*0x6eb17d*/
    }
    while ( v5 < *(_BYTE *)(this + 0xD) ); /*0x6eb183*/
  }
  if ( *(_BYTE *)(this + 0x40) ) /*0x6eb18d*/
  {
    *(float *)(this + 0x30) = *(float *)(this + 0x30) / v14; /*0x6eb1eb*/
    *(float *)(this + 0x34) = *(float *)(this + 0x34) / v14; /*0x6eb1f3*/
    *(float *)(this + 0x38) = *(float *)(this + 0x38) / v14; /*0x6eb1fb*/
    *(float *)(this + 0x3C) = *(float *)(this + 0x3C) / v14; /*0x6eb201*/
    *a4 = *(_DWORD *)(this + 0x30); /*0x6eb207*/
    a4[1] = *(_DWORD *)(this + 0x34); /*0x6eb20c*/
    a4[2] = *(_DWORD *)(this + 0x38); /*0x6eb212*/
    a4[3] = *(_DWORD *)(this + 0x3C); /*0x6eb219*/
    return 1; /*0x6eb21c*/
  }
  else
  {
    *(_DWORD *)(this + 0x30) = dword_B24FD4; /*0x6eb198*/
    *(_DWORD *)(this + 0x34) = dword_B24FD8; /*0x6eb1a1*/
    *(_DWORD *)(this + 0x38) = dword_B24FDC; /*0x6eb1aa*/
    *(_DWORD *)(this + 0x3C) = dword_B24FE0; /*0x6eb1b2*/
    *a4 = *(_DWORD *)(this + 0x30); /*0x6eb1bc*/
    a4[1] = *(_DWORD *)(this + 0x34); /*0x6eb1c1*/
    a4[2] = *(_DWORD *)(this + 0x38); /*0x6eb1c7*/
    a4[3] = *(_DWORD *)(this + 0x3C); /*0x6eb1ce*/
    return 0; /*0x6eb1d1*/
  }
}
