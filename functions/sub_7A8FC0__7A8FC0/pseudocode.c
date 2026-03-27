unsigned int *__thiscall sub_7A8FC0(float *this, unsigned int *a2)
{
  unsigned int *v3; // ebx
  unsigned int v4; // edi
  bool v5; // cc
  unsigned int v6; // esi
  float *v7; // eax
  bool v8; // cf
  float *v9; // esi
  float *v10; // eax
  double v11; // st7
  int v12; // ebx
  int v13; // eax
  int v14; // ebx
  unsigned int v15; // esi
  int v16; // esi
  int v17; // ebx
  float v18; // edx
  double v19; // st6
  double v20; // st5
  float *v21; // esi
  float *v22; // eax
  double v23; // rt1
  float *v25; // [esp+1Ch] [ebp-60h] BYREF
  int v26; // [esp+20h] [ebp-5Ch]
  float v27; // [esp+24h] [ebp-58h]
  float v28; // [esp+28h] [ebp-54h]
  float v29; // [esp+2Ch] [ebp-50h]
  float v30; // [esp+30h] [ebp-4Ch]
  float v31; // [esp+34h] [ebp-48h]
  float v32; // [esp+38h] [ebp-44h]
  float v33; // [esp+3Ch] [ebp-40h]
  float v34; // [esp+40h] [ebp-3Ch]
  float v35; // [esp+44h] [ebp-38h]
  float v36; // [esp+48h] [ebp-34h]
  float v37[3]; // [esp+4Ch] [ebp-30h] BYREF
  float v38[3]; // [esp+58h] [ebp-24h] BYREF
  float v39[3]; // [esp+64h] [ebp-18h] BYREF
  int v40; // [esp+78h] [ebp-4h]

  v26 = 0;
  if ( (dword_B42CA4 & 1) == 0 )
  {
    dword_B42CA4 |= 1u;
    v40 = 1;
    sub_78EAF0(&unk_B42CA0);
    atexit(sub_A27070);
  }
  v3 = a2;
  a2[1] = 0;
  a2[2] = 0;
  a2[3] = 0;
  v26 = 1;
  v4 = *((_DWORD *)this + 1);
  v5 = v4 <= *((_DWORD *)this + 2);
  v40 = 0;
  if ( !v5 )
    _invalid_parameter_noinfo();
  while ( 1 )
  {
    v6 = *((_DWORD *)this + 2);
    if ( *((_DWORD *)this + 1) > v6 )
      _invalid_parameter_noinfo();
    if ( v4 == v6 )
      break;
    if ( *(this + 5) < sub_78EA00(0.0, 1.0) )
    {
      if ( v4 >= *((_DWORD *)this + 2) )
        _invalid_parameter_noinfo();
      v7 = sub_7A7E50(*(void **)v4);
      v8 = v4 < *((_DWORD *)this + 2);
      v25 = v7;
      if ( !v8 )
        _invalid_parameter_noinfo();
      v9 = (float *)(*(_DWORD *)(v4 + 4) + 4);
      if ( v4 >= *((_DWORD *)this + 2) )
        _invalid_parameter_noinfo();
      v10 = (float *)(*(_DWORD *)v4 + 4);
      v8 = v4 < *((_DWORD *)this + 2);
      v31 = *v9 + *v10;
      v32 = v9[1] + v10[1];
      v33 = v9[2] + v10[2];
      v11 = dbl_A2FAA0;
      v28 = v31 * v11;
      v29 = v32 * v11;
      v30 = v33 * v11;
      if ( !v8 )
      {
        _invalid_parameter_noinfo();
        v11 = dbl_A2FAA0;
      }
      v12 = *((_DWORD *)this + 6);
      v13 = *(_DWORD *)(v12 + 0x14);
      v14 = v12 + 0x10;
      v15 = *(unsigned __int8 *)(*(_DWORD *)v4 + 0x40) >> 1;
      if ( !v13 || v15 >= (*(_DWORD *)(v14 + 8) - v13) / 0x54 )
      {
        _invalid_parameter_noinfo();
        v11 = dbl_A2FAA0;
      }
      v16 = *(_DWORD *)(v14 + 4) + 0x54 * v15;
      v17 = (int)v25;
      v18 = v29;
      v19 = *(float *)(v16 + 0x4C) * *(this + 7) * v11;
      v20 = *(float *)(v16 + 0x34);
      v25[1] = v28;
      *(float *)(v17 + 8) = v18;
      v27 = (v20 - v11) * v19;
      v30 = v27 + v30;
      *(float *)(v17 + 0xC) = v30;
      if ( v4 >= *((_DWORD *)this + 2) )
      {
        _invalid_parameter_noinfo();
        if ( v4 >= *((_DWORD *)this + 2) )
          _invalid_parameter_noinfo();
      }
      v21 = sub_7A7EC0(*(unsigned __int8 **)(v4 + 4), v38);
      v22 = sub_7A7EC0(*(unsigned __int8 **)v4, v39);
      v34 = *v22 + *v21;
      v35 = v21[1] + v22[1];
      v36 = v21[2] + v22[2];
      v23 = dbl_A2FAA0;
      v37[0] = v34 * v23;
      v37[1] = v35 * v23;
      v37[2] = v23 * v36;
      sub_7A7F10(v17, v37, 0);
      sub_791770(a2, &v25);
      v3 = a2;
    }
    if ( v4 >= *((_DWORD *)this + 2) )
      _invalid_parameter_noinfo();
    v4 += 8;
  }
  return v3;
}
