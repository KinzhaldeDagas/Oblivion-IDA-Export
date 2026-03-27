char __userpurge sub_54C090@<al>(int *a1@<ecx>, int a2@<edi>, float a3, float a4)
{
  int (__thiscall *v6)(int *, _DWORD, int, int); // edx
  char v7; // al
  char v8; // al
  char v9; // bl
  char v10; // al
  char v11; // al
  bool v12; // al
  bool v13; // zf
  int v14; // edi
  double v15; // st7
  void (__thiscall *v16)(int *, float *, _DWORD); // eax
  int v17; // edi
  int *SafeFloatPointer; // eax
  int v19; // edi
  int *v20; // eax
  void (__thiscall *v21)(int *, float *, _DWORD); // edx
  float v22; // [esp+64h] [ebp-68h]
  int v23; // [esp+68h] [ebp-64h]
  char v24; // [esp+80h] [ebp-4Ch]
  char v25; // [esp+80h] [ebp-4Ch]
  char v26; // [esp+80h] [ebp-4Ch]
  char v27; // [esp+80h] [ebp-4Ch]
  char v28; // [esp+81h] [ebp-4Bh]
  char v29; // [esp+81h] [ebp-4Bh]
  char v30; // [esp+81h] [ebp-4Bh]
  char v31; // [esp+81h] [ebp-4Bh]
  char v32; // [esp+82h] [ebp-4Ah]
  char v33; // [esp+83h] [ebp-49h]
  double v34; // [esp+84h] [ebp-48h]
  double v35; // [esp+84h] [ebp-48h]
  double v36; // [esp+84h] [ebp-48h]
  float v37; // [esp+8Ch] [ebp-40h] BYREF
  float v38; // [esp+90h] [ebp-3Ch]

  if ( a3 <= 0.0 )
    return 0;
  v6 = *(int (__thiscall **)(int *, _DWORD, int, int))(a1[4] + 0x3C);
  v23 = a1[3];
  v22 = a3;
  *((_BYTE *)a1 + 0x1D7) = 0;
  v28 = v6(a1 + 4, LODWORD(v22), v23, a2);
  v24 = sub_54BA90(a4, a1 + 9, a1 + 0xD, 1);
  if ( !v24 )
  {
    if ( !v28 )
    {
      (*(void (__thiscall **)(int *))(*a1 + 0xD4))(a1);
      v32 = 0;
      goto LABEL_12;
    }
    goto LABEL_7;
  }
  if ( v28 )
  {
LABEL_7:
    (*(void (__thiscall **)(int *, int *))(a1[0x12] + 0x28))(a1 + 0x12, a1 + 4);
    if ( v24 )
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x12] + 0x1C))(a1 + 0x12, a1 + 0xD, 1.0, 0, 0);
    goto LABEL_11;
  }
  (*(void (__thiscall **)(int *, int *))(a1[0x12] + 0x28))(a1 + 0x12, a1 + 0xD);
LABEL_11:
  v32 = 1;
LABEL_12:
  v29 = sub_54BA90(a4, a1 + 0x17, a1 + 0x1B, 0);
  v7 = sub_54BA90(a4, a1 + 0x20, a1 + 0x24, 1);
  v25 = v7;
  if ( v29 )
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x29] + 0x28))(a1 + 0x29, a1 + 0x1B);
    if ( v25 )
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x29] + 0x1C))(a1 + 0x29, a1 + 0x24, 1.0, 0, 0);
    goto LABEL_15;
  }
  if ( v7 )
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x29] + 0x28))(a1 + 0x29, a1 + 0x24);
LABEL_15:
    v33 = 1;
    goto LABEL_16;
  }
  v33 = 0;
LABEL_16:
  v30 = sub_54BA90(a4, a1 + 0x2E, a1 + 0x32, 0);
  v8 = sub_54BA90(a4, a1 + 0x37, a1 + 0x3B, 1);
  v26 = v8;
  if ( v30 )
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x40] + 0x28))(a1 + 0x40, a1 + 0x32);
    if ( v26 )
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x40] + 0x1C))(a1 + 0x40, a1 + 0x3B, 1.0, 0, 0);
    goto LABEL_19;
  }
  if ( v8 )
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x40] + 0x28))(a1 + 0x40, a1 + 0x3B);
LABEL_19:
    v31 = 1;
    goto LABEL_20;
  }
  v31 = 0;
LABEL_20:
  v9 = sub_54BA90(a4, a1 + 0x45, a1 + 0x49, 0);
  v10 = sub_54BA90(a4, a1 + 0x4E, a1 + 0x52, 1);
  v27 = v10;
  if ( v9 )
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x57] + 0x28))(a1 + 0x57, a1 + 0x49);
    if ( v27 )
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x57] + 0x1C))(a1 + 0x57, a1 + 0x52, 1.0, 0, 0);
    goto LABEL_23;
  }
  if ( v10 )
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x57] + 0x28))(a1 + 0x57, a1 + 0x52);
LABEL_23:
    v11 = 1;
    goto LABEL_24;
  }
  v11 = 0;
LABEL_24:
  v12 = v32 || v33 || v31 || v11;
  v13 = *((_BYTE *)a1 + 0x1DA) == 0;
  *((_BYTE *)a1 + 0x1D7) = v12;
  if ( v13
    && !a1[0x1A]
    && flt_B39AD0 > 0.0
    && flt_B39AD8 > 0.0
    && *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B39AE0) > 0.0 )
  {
    v34 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B39AE8);
    if ( *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B39AE0) <= v34 )
    {
      v35 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B39AE8);
      *(float *)&v35 = v35 - *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B39AE0);
      sub_54F630(&v37, 0x11u, 0);
      v14 = *a1;
      v37 = 0.0;
      v38 = 0.0;
      a4 = COERCE_FLOAT(GetRandomLargeInteger_(0));
      v36 = (double)SLODWORD(a4) * *(float *)&v35 / dbl_A3D5A8;
      v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&unk_B39AE0) + v36;
      v16 = *(void (__thiscall **)(int *, float *, _DWORD))(v14 + 0xA4);
      a4 = v15;
      v16(a1, &v37, LODWORD(a4));
      sub_54F630(&v37, 0x11u, 0);
      v17 = *a1;
      v37 = 1.0;
      v38 = 1.0;
      SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)&flt_B39AD0);
      (*(void (__thiscall **)(int *, float *, _DWORD))(v17 + 0xA4))(a1, &v37, *(float *)SafeFloatPointer);
      sub_54F630(&v37, 0x11u, 0);
      v19 = *a1;
      v37 = 0.0;
      v38 = 0.0;
      v20 = GameSetting_GetSafeFloatPointer((int *)&flt_B39AD8);
      (*(void (__thiscall **)(int *, float *, _DWORD))(v19 + 0xA4))(a1, &v37, *(float *)v20);
    }
  }
  if ( *((float *)a1 + 0x77) / fCostant_100 != ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(a1[0x57] + 0x48))(
                                                 a1 + 0x57,
                                                 0)
    || *((float *)a1 + 0x77) / fCostant_100 != ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(a1[0x49] + 0x48))(
                                                 a1 + 0x49,
                                                 0) )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, int))(*a1 + 0xB0))(a1, 0, 0, 0, 1);
    sub_54F630(&a3, 1u, 0);
    v21 = *(void (__thiscall **)(int *, float *, _DWORD))(*a1 + 0xC4);
    a3 = *((float *)a1 + 0x77) / fCostant_100;
    v21(a1, &a3, 0.0);
    *((_BYTE *)a1 + 0x1D7) = 1;
  }
  return *((_BYTE *)a1 + 0x1D7);
}
