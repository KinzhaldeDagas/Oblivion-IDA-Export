char __thiscall sub_794AE0(int this, __int16 a2)
{
  char result; // al
  int v4; // eax
  unsigned int v5; // ecx
  unsigned __int16 v6; // di
  int v7; // eax
  unsigned int i; // ebp
  unsigned __int16 v9; // bx
  int v10; // ecx
  int v11; // edi
  int v12; // eax
  unsigned __int16 v13; // ax
  int v14; // ecx
  int v15; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // edi
  int v19; // ecx
  unsigned int v20; // ebx
  int v21; // ecx
  int v22; // eax
  int v23; // edi
  int v24; // ecx
  double v25; // st7
  float *v26; // edi
  float *v27; // eax
  double v28; // st7
  int v29; // eax
  float *v30; // eax
  int j; // [esp+4h] [ebp-3Ch]
  unsigned int v32; // [esp+8h] [ebp-38h]
  float v33; // [esp+10h] [ebp-30h]
  float v34; // [esp+1Ch] [ebp-24h]
  float v35; // [esp+20h] [ebp-20h]
  float v36; // [esp+24h] [ebp-1Ch]
  float v37; // [esp+28h] [ebp-18h]
  float v38; // [esp+2Ch] [ebp-14h]
  float v39; // [esp+30h] [ebp-10h]
  float v40; // [esp+34h] [ebp-Ch]
  float v41; // [esp+38h] [ebp-8h]
  float v42; // [esp+3Ch] [ebp-4h]

  result = 0;
  if ( !*(_BYTE *)(this + 0x12) )
  {
    v4 = *(_DWORD *)(this + 0x6C);
    if ( v4 )
      v5 = (*(_DWORD *)(this + 0x70) - v4) >> 2;
    else
      v5 = 0;
    v6 = v5 / 3;
    if ( !*(_DWORD *)(this + 0xC) )
      *(_DWORD *)(this + 0xC) = FormHeapAlloc(v6);
    v7 = 0;
    if ( v6 )
    {
      do
      {
        *(_BYTE *)(v7 + *(_DWORD *)(this + 0xC)) = 0;
        ++v7;
      }
      while ( v7 < v6 );
    }
    for ( i = 0; ; ++i )
    {
      v9 = a2;
      v32 = i;
      if ( a2 <= (__int16)0xFFFFFFFF )
        goto LABEL_16;
      v10 = *(_DWORD *)(this + 0x4C);
      if ( !v10 || a2 >= (unsigned int)((*(_DWORD *)(this + 0x50) - v10) >> 4) )
        _invalid_parameter_noinfo();
      v11 = *(_DWORD *)(this + 0x4C) + 0x10 * a2;
      v12 = *(_DWORD *)(v11 + 4);
      if ( v12 )
        v13 = (*(_DWORD *)(v11 + 8) - v12) >> 2;
      else
LABEL_16:
        v13 = 0;
      if ( (int)i >= v13 )
        break;
      for ( j = 0; ; ++j )
      {
        v14 = *(_DWORD *)(this + 0x3C);
        if ( !v14 || v9 >= (unsigned int)((*(_DWORD *)(this + 0x40) - v14) >> 4) )
          _invalid_parameter_noinfo();
        v15 = *(_DWORD *)(this + 0x3C) + 0x10 * v9;
        v16 = *(_DWORD *)(v15 + 4);
        if ( !v16 || i >= (*(_DWORD *)(v15 + 8) - v16) >> 1 )
          _invalid_parameter_noinfo();
        if ( j >= *(unsigned __int16 *)(*(_DWORD *)(v15 + 4) + 2 * i) )
          break;
        v17 = *(_DWORD *)(this + 0x4C);
        if ( !v17 || v9 >= (unsigned int)((*(_DWORD *)(this + 0x50) - v17) >> 4) )
          _invalid_parameter_noinfo();
        v18 = *(_DWORD *)(this + 0x4C) + 0x10 * v9;
        v19 = *(_DWORD *)(v18 + 4);
        if ( !v19 || i >= (*(_DWORD *)(v18 + 8) - v19) >> 2 )
          _invalid_parameter_noinfo();
        v20 = *(unsigned __int16 *)(*(_DWORD *)(*(_DWORD *)(v18 + 4) + 4 * i) + 2 * j);
        if ( !*(_BYTE *)(v20 + *(_DWORD *)(this + 0xC)) )
        {
          v21 = *(_DWORD *)(this + 0xFC);
          if ( !v21 || v20 >= (*(_DWORD *)(this + 0x100) - v21) >> 2 )
            _invalid_parameter_noinfo();
          v22 = *(_DWORD *)(this + 0x7C);
          v33 = *(float *)(*(_DWORD *)(this + 0xFC) + 4 * v20);
          if ( !v22 || !((*(_DWORD *)(this + 0x80) - v22) >> 2) )
            _invalid_parameter_noinfo();
          v23 = *(_DWORD *)(this + 0x7C);
          v24 = *(_DWORD *)(this + 0x10C);
          v25 = *(float *)(v23 + 0xC * v20);
          v26 = (float *)(0xC * v20 + v23);
          v37 = v25;
          v38 = v26[1];
          v39 = v26[2];
          if ( !v24 || v20 >= *(_DWORD *)(this + 0x110) - v24 )
            _invalid_parameter_noinfo();
          v27 = (float *)(dword_B42A14 + (*(unsigned __int8 *)(*(_DWORD *)(this + 0x10C) + v20) << 6));
          v40 = v27[8] * v39 + *v27 * v37 + v27[4] * v38 + v27[0xC];
          v41 = v27[5] * v38 + v27[1] * v37 + v27[9] * v39 + v27[0xD];
          v28 = v37 * v27[2] + v38 * v27[6] + v39 * v27[0xA] + v27[0xE];
          v29 = *(_DWORD *)(this + 0x6C);
          v42 = v28;
          v34 = *v26 + (v40 - *v26) * v33;
          v35 = (v41 - v26[1]) * v33 + v26[1];
          v36 = v33 * (v42 - v26[2]) + v26[2];
          if ( !v29 || !((*(_DWORD *)(this + 0x70) - v29) >> 2) )
            _invalid_parameter_noinfo();
          v30 = (float *)(0xC * v20 + *(_DWORD *)(this + 0x6C));
          i = v32;
          *v30 = v34;
          v30[1] = v35;
          v30[2] = v36;
          *(_BYTE *)(v20 + *(_DWORD *)(this + 0xC)) = 1;
        }
        v9 = a2;
      }
    }
    *(_BYTE *)(this + 0x12) = 1;
    return 1;
  }
  return result;
}
