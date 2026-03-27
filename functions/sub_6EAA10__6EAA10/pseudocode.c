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

  v14 = 1.0;
  *(_BYTE *)(this + 0x3C) = 0;
  *(float *)(this + 0x30) = Vector3_InitValue_;
  *(float *)(this + 0x34) = *(&Vector3_InitValue_ + 1);
  v5 = 0;
  v6 = *(_BYTE *)(this + 0xD) == 0;
  *(float *)(this + 0x38) = dword_B3F9B0;
  if ( !v6 )
  {
    do
    {
      v8 = *(_DWORD *)(this + 0x14);
      v9 = 0x18 * v5;
      v10 = *(_DWORD *)(v8 + v9);
      v11 = v8 + v9;
      if ( v10 )
      {
        if ( *(float *)(v11 + 8) > 0.0 )
        {
          v19 = a2;
          if ( 0.0 == *(float *)(v11 + 8) )
            goto LABEL_8;
          if ( (*(_BYTE *)(this + 0xC) & 1) != 0 )
            v19 = *(float *)(v11 + 0x14);
          if ( flt_A79F00 == v19 )
          {
LABEL_8:
            v14 = v14 - *(float *)(v11 + 8);
          }
          else if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x54))(
                      COERCE_FLOAT(LODWORD(v19)),
                      a3,
                      v18) )
          {
            v12 = *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8);
            v15 = v18[0] * v12;
            v16 = v18[1] * v12;
            v17 = v12 * v18[2];
            *(float *)(this + 0x30) = *(float *)(this + 0x30) + v15;
            *(float *)(this + 0x34) = v16 + *(float *)(this + 0x34);
            *(float *)(this + 0x38) = *(float *)(this + 0x38) + v17;
            *(_BYTE *)(this + 0x3C) = 1;
          }
          else
          {
            v14 = v14 - *(float *)(*(_DWORD *)(this + 0x14) + v9 + 8);
          }
        }
      }
      ++v5;
    }
    while ( v5 < *(_BYTE *)(this + 0xD) );
  }
  if ( *(_BYTE *)(this + 0x3C) )
  {
    v20 = 1.0 / v14;
    *(float *)(this + 0x30) = *(float *)(this + 0x30) * v20;
    *(float *)(this + 0x34) = *(float *)(this + 0x34) * v20;
    *(float *)(this + 0x38) = v20 * *(float *)(this + 0x38);
    *a4 = *(_DWORD *)(this + 0x30);
    a4[1] = *(_DWORD *)(this + 0x34);
    a4[2] = *(_DWORD *)(this + 0x38);
    return 1;
  }
  else
  {
    *(_DWORD *)(this + 0x30) = dword_B24FC8;
    *(_DWORD *)(this + 0x34) = dword_B24FCC;
    *(_DWORD *)(this + 0x38) = dword_B24FD0;
    *a4 = *(_DWORD *)(this + 0x30);
    a4[1] = *(_DWORD *)(this + 0x34);
    a4[2] = *(_DWORD *)(this + 0x38);
    return 0;
  }
}
