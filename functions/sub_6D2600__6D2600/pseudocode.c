char __thiscall sub_6D2600(int this, float a2, int a3, float *a4)
{
  double v4; // st7
  unsigned __int8 v6; // bl
  int v8; // eax
  int v9; // edi
  int v10; // ecx
  int v11; // edx
  char v13; // [esp+1Fh] [ebp-9h]
  float v14; // [esp+20h] [ebp-8h]
  float v15; // [esp+24h] [ebp-4h] BYREF
  float v16; // [esp+30h] [ebp+8h]
  float v17; // [esp+30h] [ebp+8h]

  v4 = 0.0;
  *(float *)(this + 0x30) = 0.0;
  v6 = 0;
  v14 = 1.0;
  v13 = 0;
  if ( *(_BYTE *)(this + 0xD) )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)(this + 0x14);
      v9 = 0x18 * v6;
      v10 = *(_DWORD *)(v9 + v8);
      v11 = v9 + v8;
      if ( v10 )
      {
        if ( v4 < *(float *)(v11 + 8) )
        {
          v16 = a2;
          if ( v4 == *(float *)(v11 + 8) )
            goto LABEL_11;
          if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
            v16 = *(float *)(v11 + 0x14);
          if ( flt_A79F00 == v16 )
          {
LABEL_11:
            v14 = v14 - *(float *)(v11 + 8);
          }
          else if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x5C))(
                      COERCE_FLOAT(LODWORD(v16)),
                      a3,
                      &v15) )
          {
            v13 = 1;
            *(float *)(this + 0x30) = *(float *)(v9 + *(_DWORD *)(this + 0x14) + 8) * v15 + *(float *)(this + 0x30);
          }
          else
          {
            v14 = v14 - *(float *)(v9 + *(_DWORD *)(this + 0x14) + 8);
          }
        }
      }
      if ( ++v6 >= *(_BYTE *)(this + 0xD) )
        break;
      v4 = 0.0;
    }
  }
  v17 = *(float *)(this + 0x30) / v14;
  *(float *)(this + 0x30) = v17;
  if ( v13 )
  {
    *a4 = v17;
    return 1;
  }
  else
  {
    *a4 = flt_A7C6B0;
    *(float *)(this + 0x30) = flt_A7C6B0;
    return 0;
  }
}
