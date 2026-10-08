int __userpurge sub_54B8C0@<eax>(int a1@<ecx>, int a2@<esi>, float a3, float a4)
{
  double v4; // st7
  double v5; // st5
  double v6; // st4
  double v7; // rt0
  double v8; // st2
  double v9; // st7
  double v10; // st2
  bool v11; // c0
  bool v12; // c3
  double v13; // st4
  double v14; // rt2
  double v15; // st4
  double v16; // st7
  double v17; // st4
  double v18; // rtt
  double v19; // st4
  double v20; // st7
  double v21; // rt1
  double v22; // st5
  double v23; // st7
  int v24; // esi
  void (__thiscall *v25)(int, int, _DWORD, int); // edx
  double v26; // st7
  float v29; // [esp+1Ch] [ebp-10h]
  float v30; // [esp+20h] [ebp-Ch]
  float v31; // [esp+20h] [ebp-Ch]
  float v32; // [esp+24h] [ebp-8h]
  float v33; // [esp+28h] [ebp-4h]
  float v34; // [esp+30h] [ebp+4h]
  float v35; // [esp+30h] [ebp+4h]
  float v36; // [esp+34h] [ebp+8h]

  v4 = dbl_A31C78; /*0x54b8d1*/
  v30 = unk_B39B10 * v4; /*0x54b8d3*/
  v5 = v30; /*0x54b8d8*/
  if ( v30 < 0.0 ) /*0x54b8e2*/
    v5 = (float)0.0; /*0x54b8e9*/
  v6 = dbl_A641E0; /*0x54b8ec*/
  if ( v6 < v5 ) /*0x54b8ff*/
    v5 = flt_A3F3E0; /*0x54b90b*/
  v7 = dbl_A3D360; /*0x54b919*/
  v32 = v5 * v7; /*0x54b91b*/
  v8 = v4 * unk_B39B18; /*0x54b927*/
  v9 = v7; /*0x54b927*/
  v31 = v8; /*0x54b929*/
  v10 = v31; /*0x54b92c*/
  if ( v31 < 0.0 ) /*0x54b936*/
  {
    v31 = 0.0; /*0x54b93c*/
    v10 = (float)0.0; /*0x54b946*/
  }
  v11 = v10 < v6; /*0x54b948*/
  v12 = v10 == v6; /*0x54b948*/
  v13 = v10; /*0x54b94c*/
  if ( !v11 && !v12 ) /*0x54b94e*/
  {
    v31 = flt_A3F3E0; /*0x54b955*/
    v13 = v31; /*0x54b958*/
  }
  v14 = v13; /*0x54b963*/
  v15 = v9 * v13; /*0x54b963*/
  v16 = v14; /*0x54b963*/
  v33 = v15; /*0x54b965*/
  v17 = a3; /*0x54b969*/
  if ( a3 <= v5 ) /*0x54b978*/
  {
    if ( v32 > v17 ) /*0x54b98f*/
      v17 = v32; /*0x54b997*/
  }
  else
  {
    v34 = v5; /*0x54b97e*/
    v17 = v34; /*0x54b982*/
  }
  if ( a4 <= v16 ) /*0x54b9ae*/
  {
    v20 = v17; /*0x54b9c7*/
    if ( a4 < (double)v33 ) /*0x54b9c5*/
      a4 = v33; /*0x54b9c9*/
  }
  else
  {
    v18 = v17; /*0x54b9b4*/
    v19 = v16; /*0x54b9b4*/
    v20 = v18; /*0x54b9b4*/
    a4 = v19; /*0x54b9b6*/
  }
  v21 = v5; /*0x54b9d1*/
  v22 = v20; /*0x54b9d1*/
  v23 = v21; /*0x54b9d1*/
  v24 = a1 + 0xA4; /*0x54b9d6*/
  v25 = *(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)(a1 + 0xA4) + 0x4C); /*0x54b9e6*/
  if ( v22 < 0.0 ) /*0x54b9e9*/
  {
    v25(v24, 0xA, 0.0, a2); /*0x54ba0b*/
    v36 = a4 / v33; /*0x54ba15*/
    v26 = v36; /*0x54ba19*/
  }
  else
  {
    v35 = v22 / v23; /*0x54b9ef*/
    v25(v24, 0xA, LODWORD(v35), a2); /*0x54b9fc*/
    v26 = 0.0; /*0x54b9fe*/
  }
  v29 = v26; /*0x54ba23*/
  (*(void (__thiscall **)(int, int, _DWORD, float))(*(_DWORD *)v24 + 0x4C))( /*0x54ba2a*/
    v24,
    9,
    LODWORD(v29),
    COERCE_FLOAT(LODWORD(v31)));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 0x4C))(v24, 0xB); /*0x54ba56*/
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v24 + 0x4C))(v24, 8); /*0x54ba85*/
}
