void __thiscall sub_5273A0(char *this, char a2, char a3, char a4)
{
  double v5; // st7
  double v6; // st6
  double v7; // st4
  double v8; // st6
  double v9; // st5
  double v10; // st3
  bool v11; // c0
  bool v12; // c3
  double v13; // st7
  double v14; // st7
  double v15; // st7
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st5
  double v21; // st7
  double v22; // st7
  bool v23; // zf
  char *v24; // eax
  char *v25; // eax
  int v26; // edi
  float v27; // [esp+8h] [ebp-E8h]
  float v28; // [esp+18h] [ebp-D8h]
  float v29; // [esp+18h] [ebp-D8h]
  float v30; // [esp+18h] [ebp-D8h]
  float v31; // [esp+18h] [ebp-D8h]
  float v32; // [esp+18h] [ebp-D8h]
  float v33; // [esp+18h] [ebp-D8h]
  float v34; // [esp+18h] [ebp-D8h]
  float v35; // [esp+1Ch] [ebp-D4h]
  float v36; // [esp+1Ch] [ebp-D4h]
  float v37; // [esp+1Ch] [ebp-D4h]
  float Age; // [esp+20h] [ebp-D0h]
  float v39; // [esp+20h] [ebp-D0h]
  float v40; // [esp+20h] [ebp-D0h]
  float v41; // [esp+20h] [ebp-D0h]
  float v42; // [esp+20h] [ebp-D0h]
  int a1[24]; // [esp+24h] [ebp-CCh] BYREF
  int v44[24]; // [esp+84h] [ebp-6Ch] BYREF
  unsigned int v45; // [esp+ECh] [ebp-4h]

  ArrayConstructor(a1, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  v45 = 0;
  ArrayConstructor(v44, 0x18u, 4, (int)sub_43EB30, (void (__thiscall *)(void *))sub_43ACE0);
  LOBYTE(v45) = 1;
  sub_552880(v44);
  sub_553B70(fNPCGeneticVariation, *((_DWORD *)this + 0x3A) + 0x29C, (int)a1);
  Age = BSFaceGen_GetAge(a1, 0, 0);
  v28 = BSFaceGen_GetAge(a1, 0, 1);
  v5 = dbl_A492F0;
  if ( a2 )
  {
    v6 = Age;
  }
  else
  {
    v6 = (double)GetRandomLargeInteger_(0) / dbl_A3D5A8 * dbl_A3F3D0 + dbl_A492F0;
    v5 = dbl_A492F0;
  }
  v35 = v6;
  v39 = v28 - (Age - v35);
  if ( v35 > v5 && flt_A47800 <= (double)v35 )
  {
    v9 = flt_A47800;
    v8 = flt_A468FC;
    v7 = v9;
  }
  else
  {
    v7 = v35;
    if ( v35 <= v5 )
      v7 = flt_A468FC;
    v8 = flt_A468FC;
    v9 = flt_A47800;
  }
  v10 = v39;
  if ( v39 > v5 && v10 >= v9 )
  {
    v13 = v7;
    v39 = v9;
  }
  else
  {
    v11 = v10 < v5;
    v12 = v10 == v5;
    v13 = v7;
    if ( v11 || v12 )
      v39 = v8;
  }
  v27 = v13;
  sub_555A00((int)a1, 0, 0, v27);
  sub_555A00((int)a1, 0, 1, v39);
  if ( TESActorBase_IsFemale(this) )
    v14 = fConstant_2;
  else
    v14 = flt_A53954;
  v29 = v14;
  v40 = BSFaceGen_GetAge(a1, 1, 0) - v29;
  if ( TESActorBase_IsFemale(this) )
    v15 = fConstant_2;
  else
    v15 = flt_A53954;
  v30 = v15;
  v31 = BSFaceGen_GetAge(a1, 1, 1) - v30;
  if ( a3 )
  {
    v36 = v40;
    v41 = v31;
    v16 = v36;
  }
  else
  {
    v36 = (double)GetRandomLargeInteger_(0) / dbl_A3D5A8 * dbl_A3C800 - dbl_A3D0C0;
    v16 = v36;
    v41 = v31 - (v40 - v36);
  }
  v17 = flt_A53954;
  if ( v17 < v16 && fConstant_2 <= v16 )
  {
    v36 = fConstant_2;
    v19 = v36;
  }
  else
  {
    v18 = v16;
    v19 = fConstant_2;
    if ( v18 <= v17 )
      v36 = flt_A53954;
  }
  v20 = v41;
  if ( v41 > v17 && v20 >= v19 )
  {
    v41 = v19;
  }
  else if ( v17 >= v20 )
  {
    v41 = flt_A53954;
  }
  if ( TESActorBase_IsFemale(this) )
    v21 = fConstant_2;
  else
    v21 = flt_A53954;
  v32 = v21;
  v37 = v32 + v36;
  if ( TESActorBase_IsFemale(this) )
    v22 = fConstant_2;
  else
    v22 = flt_A53954;
  v33 = v22;
  v42 = v33 + v41;
  sub_555A00((int)a1, 1, 0, v37);
  sub_555A00((int)a1, 1, 1, v42);
  if ( !a4 )
  {
    v34 = (double)GetRandomLargeInteger_(0) / dbl_A3D5A8;
    *((float *)this + 0x73) = v34;
  }
  sub_552C10((int *)(*((_DWORD *)this + 0x3A) + 0x29C), (int)a1, (int)v44);
  v23 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 0x128))(this, 0x45) == 0;
  v24 = this + 0x168;
  if ( v23 )
    v24 = this + 0x108;
  if ( sub_551990((char *)v44, v24) )
  {
    v23 = (*(int (__thiscall **)(char *, int))(*(_DWORD *)this + 0x128))(this, 0x45) == 0;
    v25 = this + 0x168;
    if ( v23 )
      v25 = this + 0x108;
    sub_5528F0(v44, (int)v25);
    v26 = *((_DWORD *)this + 0x77);
    if ( v26 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v26 + 4)) )
        (**(void (__thiscall ***)(int, int))v26)(v26, 1);
      *((_DWORD *)this + 0x77) = 0;
    }
  }
  LOBYTE(v45) = 0;
  _LN21(v44, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
  v45 = 0xFFFFFFFF;
  _LN21(a1, 0x18u, 4, (void (__thiscall *)(void *))sub_43ACE0);
}
