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

  v4 = dbl_A31C78;
  v30 = flt_B39B10 * v4;
  v5 = v30;
  if ( v30 < 0.0 )
    v5 = (float)0.0;
  v6 = dbl_A641E0;
  if ( v6 < v5 )
    v5 = flt_A3F3E0;
  v7 = dbl_A3D360;
  v32 = v5 * v7;
  v8 = v4 * flt_B39B18;
  v9 = v7;
  v31 = v8;
  v10 = v31;
  if ( v31 < 0.0 )
  {
    v31 = 0.0;
    v10 = (float)0.0;
  }
  v11 = v10 < v6;
  v12 = v10 == v6;
  v13 = v10;
  if ( !v11 && !v12 )
  {
    v31 = flt_A3F3E0;
    v13 = v31;
  }
  v14 = v13;
  v15 = v9 * v13;
  v16 = v14;
  v33 = v15;
  v17 = a3;
  if ( a3 <= v5 )
  {
    if ( v32 > v17 )
      v17 = v32;
  }
  else
  {
    v34 = v5;
    v17 = v34;
  }
  if ( a4 <= v16 )
  {
    v20 = v17;
    if ( a4 < (double)v33 )
      a4 = v33;
  }
  else
  {
    v18 = v17;
    v19 = v16;
    v20 = v18;
    a4 = v19;
  }
  v21 = v5;
  v22 = v20;
  v23 = v21;
  v24 = a1 + 0xA4;
  v25 = *(void (__thiscall **)(int, int, _DWORD, int))(*(_DWORD *)(a1 + 0xA4) + 0x4C);
  if ( v22 < 0.0 )
  {
    v25(v24, 0xA, 0.0, a2);
    v36 = a4 / v33;
    v26 = v36;
  }
  else
  {
    v35 = v22 / v23;
    v25(v24, 0xA, LODWORD(v35), a2);
    v26 = 0.0;
  }
  v29 = v26;
  (*(void (__thiscall **)(int, int, _DWORD, float))(*(_DWORD *)v24 + 0x4C))(
    v24,
    9,
    LODWORD(v29),
    COERCE_FLOAT(LODWORD(v31)));
  (*(void (__thiscall **)(int, int))(*(_DWORD *)v24 + 0x4C))(v24, 0xB);
  return (*(int (__thiscall **)(int, int))(*(_DWORD *)v24 + 0x4C))(v24, 8);
}
