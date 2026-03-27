void __thiscall sub_7A3940(void *this, float a2)
{
  unsigned int v3; // edi
  int i; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  double v8; // st7
  int v9; // ecx
  double v10; // st7
  double v11; // st7
  _DWORD *v12; // ecx
  int v13; // ebp
  bool v14; // cc
  int v15; // edi
  int v16; // edx
  _DWORD *v17; // eax
  int v18; // ecx
  int v19[3]; // [esp-4h] [ebp-68h] BYREF
  float v20; // [esp+8h] [ebp-5Ch]
  float v21; // [esp+20h] [ebp-44h]
  int v22; // [esp+24h] [ebp-40h]
  int v23; // [esp+28h] [ebp-3Ch] BYREF
  unsigned int v24; // [esp+2Ch] [ebp-38h]
  int v25; // [esp+30h] [ebp-34h]
  int v26; // [esp+34h] [ebp-30h]
  float v27; // [esp+38h] [ebp-2Ch] BYREF
  unsigned int v28; // [esp+3Ch] [ebp-28h]
  unsigned int v29; // [esp+60h] [ebp-4h]

  v3 = 0;
  v21 = flt_A30634;
  for ( i = 0; ; i += 0x54 )
  {
    v5 = *((_DWORD *)this + 0x26);
    if ( !v5 || v3 >= (*((_DWORD *)this + 0x27) - v5) / 0x54 )
      break;
    v6 = *((_DWORD *)this + 0x26);
    if ( !v6 || v3 >= (*((_DWORD *)this + 0x27) - v6) / 0x54 )
      _invalid_parameter_noinfo();
    v7 = *((_DWORD *)this + 0x26);
    v8 = *(float *)(v7 + i + 0x48);
    v9 = i + v7;
    if ( *(float *)(v9 + 0x4C) >= v8 )
      v10 = *(float *)(v9 + 0x4C);
    else
      v10 = *(float *)(v9 + 0x48);
    *(float *)&v22 = v10;
    v11 = *((float *)this + 0x29) * *(float *)&v22;
    ++v3;
    if ( v21 < v11 )
      v21 = v11;
  }
  if ( flt_A30634 == v21 )
    v21 = flt_A31C80;
  v12 = *((_DWORD **)this + 0x35);
  if ( v12 )
  {
    sub_79B2F0(v12, (int)this + 0x74);
    v13 = 1;
    v14 = *((_DWORD *)this + 0x30) <= 1;
    v22 = 1;
    if ( !v14 )
    {
      v15 = 0x10;
      v21 = v21 * dbl_A3F3E8;
      do
      {
        *(float *)&v22 = (double)v22 * a2 + dbl_A2F928;
        v20 = *(float *)&v22;
        sub_7A8F00((int)&v27, (int)this + 0x84, v21, *((float *)this + 0x39), *(float *)&v22);
        v16 = *((_DWORD *)this + 0x35) + v15 - 0x10;
        *(float *)&v22 = COERCE_FLOAT(v19);
        v29 = 0;
        sub_7A3580(v19, v13, v16);
        v17 = sub_7A9740(&v27, &v23, v19[0], v19[1], v19[2], SLODWORD(v20));
        v18 = *((_DWORD *)this + 0x35);
        LOBYTE(v29) = 1;
        sub_79B2F0((_DWORD *)(v15 + v18), (int)v17);
        if ( v24 )
          FormHeapFree(v24);
        v24 = 0;
        v25 = 0;
        v26 = 0;
        v29 = 0xFFFFFFFF;
        if ( v28 )
          FormHeapFree(v28);
        ++v13;
        v15 += 0x10;
        v14 = v13 < *((_DWORD *)this + 0x30);
        v22 = v13;
      }
      while ( v14 );
    }
  }
}
