void __thiscall sub_7A45F0(_BYTE *this, float a2)
{
  float *v3; // eax
  _DWORD *v4; // ebx
  float *v5; // eax
  bool v6; // zf
  int v7; // edi
  unsigned int v8; // ecx
  int *v9; // eax
  int *v10; // edi
  unsigned int v11; // ebp
  int v12; // ecx
  int *v13; // edx
  int v14; // ebx
  double v15; // st7
  unsigned int v16; // ecx
  unsigned int v17; // edi
  int i; // ebx
  int v19; // eax
  int v20; // eax
  int v21; // eax
  double v22; // st7
  float *v23; // eax
  int v24; // ecx
  int v25; // eax
  unsigned int v26; // eax
  int v27; // [esp+2Ch] [ebp-60h]
  int v28; // [esp+44h] [ebp-48h] BYREF
  int v29; // [esp+48h] [ebp-44h] BYREF
  int v30[3]; // [esp+50h] [ebp-3Ch] BYREF
  int v31[9]; // [esp+5Ch] [ebp-30h] BYREF
  int v32; // [esp+88h] [ebp-4h]

  byte_B2B704 = *(this + 0xD8) == 0;
  v3 = (float *)FormHeapAlloc(0x40u);
  v28 = (int)v3;
  v4 = 0;
  v32 = 0;
  if ( v3 )
    v5 = sub_7915C0(v3, 0);
  else
    v5 = 0;
  v6 = *(this + 0xD8) == 0;
  v32 = 0xFFFFFFFF;
  *((_DWORD *)this + 0x16) = v5;
  if ( v6 )
  {
    v7 = *((_DWORD *)this + 0x30);
    v8 = (unsigned __int64)(unsigned int)v7 >> 0x1C != 0 ? 0xFFFFFFFF : 0x10 * v7;
    v9 = (int *)FormHeapAlloc(__CFADD__(v8, 4) ? 0xFFFFFFFF : v8 + 4);
    v28 = (int)v9;
    v32 = 1;
    if ( v9 )
    {
      v4 = v9 + 1;
      *v9 = v7;
      ArrayConstructor(v9 + 1, 0x10u, v7, (int)sub_6EF4A0, (void (__thiscall *)(void *))sub_794EB0);
    }
    v32 = 0xFFFFFFFF;
    *((_DWORD *)this + 0x35) = v4;
  }
  dword_B2B708 = *((_DWORD *)this + 0x3C);
  sub_790B00();
  v10 = (int *)dword_B429E4;
  dword_B429B8 = (int)(this + 0x84);
  v11 = 0;
  while ( 1 )
  {
    v12 = *((_DWORD *)this + 0x19);
    if ( !v12 || v11 >= (*((_DWORD *)this + 0x1A) - v12) >> 2 )
      break;
    v13 = (int *)dword_B429E0;
    v6 = dword_B429E0 == 0;
    v14 = *(_DWORD *)(*((_DWORD *)this + 0x19) + 4 * v11);
    v28 = v14;
    if ( v6 || v10 - v13 >= (unsigned int)((dword_B429E8 - (int)v13) >> 2) )
    {
      if ( v13 > v10 )
        _invalid_parameter_noinfo();
      sub_7A3620(&dword_B429DC, (unsigned int **)&v29, &dword_B429DC, v10, &v28);
      v10 = (int *)dword_B429E4;
      ++v11;
    }
    else
    {
      *v10++ = v14;
      dword_B429E4 = v10;
      ++v11;
    }
  }
  sub_78EA30(*((_DWORD *)this + 0x12));
  *(float *)&v28 = *((float *)this + 0x14) + *((float *)this + 0x13);
  v27 = v28;
  *(float *)&v28 = *((float *)this + 0x13) - *((float *)this + 0x14);
  v15 = sub_78EA00(*(float *)&v28, *(float *)&v27);
  v16 = *((_DWORD *)this + 0x15);
  *(float *)&v28 = v15;
  srand(v16);
  if ( *((float *)this + 0x13) > 0.0 )
  {
    v17 = 0;
    for ( i = 0; ; i += 0x54 )
    {
      v19 = *((_DWORD *)this + 0x26);
      if ( !v19 || v17 >= (*((_DWORD *)this + 0x27) - v19) / 0x54 )
        break;
      v20 = *((_DWORD *)this + 0x26);
      if ( !v20 || v17 >= (*((_DWORD *)this + 0x27) - v20) / 0x54 )
        _invalid_parameter_noinfo();
      v21 = *((_DWORD *)this + 0x26);
      v22 = *(float *)(v21 + i + 0x3C);
      v23 = (float *)(i + v21);
      ++v17;
      v23[0x12] = v22 * *((float *)this + 0x13);
      v23[0x13] = v23[0x10] * *((float *)this + 0x13);
    }
  }
  sub_78EA30(*((_DWORD *)this + 0x12));
  sub_798090(*((_DWORD **)this + 0x17), *((_WORD *)this + 0x38));
  sub_794A90(*((_DWORD *)this + 0x17), 0);
  v24 = *((_DWORD *)this + 0x12);
  *(float *)v30 = 0.0;
  *(float *)&v30[1] = 0.0;
  dword_B429C0 = v24;
  v25 = *((_DWORD *)this + 0x12);
  *(float *)&v30[2] = 1.0;
  *(float *)v31 = 1.0;
  *(float *)&v31[4] = 1.0;
  *(float *)&v31[8] = 1.0;
  *(float *)&v31[1] = 0.0;
  *(float *)&v31[2] = 0.0;
  *(float *)&v31[3] = 0.0;
  *(float *)&v31[5] = 0.0;
  *(float *)&v31[6] = 0.0;
  *(float *)&v31[7] = 0.0;
  sub_7925B0(
    *((int **)this + 0x16),
    v25,
    *(float *)&v28,
    0,
    (_DWORD *)this + 1,
    0.0,
    0.0,
    (float *)v31,
    (float *)v30,
    *((_DWORD *)this + 0x17),
    (int)(this + 0x74),
    1.0,
    v25,
    flt_A30634);
  sub_7A3C80((float *)this);
  if ( !*(this + 0xD8) )
    sub_7A3940(this, a2);
  v26 = _time64(0);
  srand(v26);
}
