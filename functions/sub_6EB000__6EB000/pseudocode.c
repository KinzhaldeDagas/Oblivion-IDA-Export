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

  v14 = 1.0;
  *(_BYTE *)(this + 0x40) = 0;
  *(_DWORD *)(this + 0x30) = dword_B25AD0;
  *(_DWORD *)(this + 0x34) = dword_B25AD4;
  *(_DWORD *)(this + 0x38) = dword_B25AD8;
  v5 = 0;
  v6 = *(_BYTE *)(this + 0xD) == 0;
  *(_DWORD *)(this + 0x3C) = dword_B25ADC;
  if ( !v6 )
  {
    v7 = 0.0;
    do
    {
      v9 = 0x18 * v5;
      v10 = *(_DWORD *)(this + 0x14) + v9;
      v11 = *(_DWORD *)v10;
      if ( *(_DWORD *)v10 )
      {
        if ( v7 < *(float *)(v10 + 8) )
        {
          v19 = v7;
          v20 = v7;
          v21 = v7;
          v22 = v7;
          v23 = a2;
          if ( !v11 )
            goto LABEL_10;
          if ( v7 == *(float *)(v10 + 8) )
            goto LABEL_10;
          if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
            v23 = *(float *)(v10 + 0x14);
          if ( flt_A79F00 == v23 )
          {
LABEL_10:
            v14 = v14 - *(float *)(v10 + 8);
          }
          else
          {
            if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v11 + 0x50))(
                   COERCE_FLOAT(LODWORD(v23)),
                   a3,
                   &v19) )
            {
              v12 = *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8);
              v15 = v19 * v12;
              v16 = v20 * v12;
              v17 = v21 * v12;
              v18 = v12 * v22;
              *(float *)(this + 0x30) = *(float *)(this + 0x30) + v15;
              *(float *)(this + 0x34) = *(float *)(this + 0x34) + v16;
              *(float *)(this + 0x38) = v17 + *(float *)(this + 0x38);
              *(float *)(this + 0x3C) = *(float *)(this + 0x3C) + v18;
              *(_BYTE *)(this + 0x40) = 1;
            }
            else
            {
              v14 = v14 - *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8);
            }
            v7 = 0.0;
          }
        }
      }
      ++v5;
    }
    while ( v5 < *(_BYTE *)(this + 0xD) );
  }
  if ( *(_BYTE *)(this + 0x40) )
  {
    *(float *)(this + 0x30) = *(float *)(this + 0x30) / v14;
    *(float *)(this + 0x34) = *(float *)(this + 0x34) / v14;
    *(float *)(this + 0x38) = *(float *)(this + 0x38) / v14;
    *(float *)(this + 0x3C) = *(float *)(this + 0x3C) / v14;
    *a4 = *(_DWORD *)(this + 0x30);
    a4[1] = *(_DWORD *)(this + 0x34);
    a4[2] = *(_DWORD *)(this + 0x38);
    a4[3] = *(_DWORD *)(this + 0x3C);
    return 1;
  }
  else
  {
    *(_DWORD *)(this + 0x30) = dword_B24FD4;
    *(_DWORD *)(this + 0x34) = dword_B24FD8;
    *(_DWORD *)(this + 0x38) = dword_B24FDC;
    *(_DWORD *)(this + 0x3C) = dword_B24FE0;
    *a4 = *(_DWORD *)(this + 0x30);
    a4[1] = *(_DWORD *)(this + 0x34);
    a4[2] = *(_DWORD *)(this + 0x38);
    a4[3] = *(_DWORD *)(this + 0x3C);
    return 0;
  }
}
