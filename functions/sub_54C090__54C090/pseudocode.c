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

  if ( a3 <= 0.0 ) /*0x54c0a5*/
    return 0; /*0x54c0af*/
  v6 = *(int (__thiscall **)(int *, _DWORD, int, int))(a1[4] + 0x3C); /*0x54c0b8*/
  v23 = a1[3]; /*0x54c0c1*/
  v22 = a3; /*0x54c0c5*/
  *((_BYTE *)a1 + 0x1D7) = 0; /*0x54c0c8*/
  v28 = v6(a1 + 4, LODWORD(v22), v23, a2); /*0x54c0d7*/
  v24 = sub_54BA90(a4, a1 + 9, a1 + 0xD, 1); /*0x54c0f1*/
  if ( !v24 ) /*0x54c0f5*/
  {
    if ( !v28 ) /*0x54c0fb*/
    {
      (*(void (__thiscall **)(int *))(*a1 + 0xD4))(a1); /*0x54c107*/
      v32 = 0; /*0x54c109*/
      goto LABEL_12; /*0x54c10e*/
    }
    goto LABEL_7; /*0x54c0fb*/
  }
  if ( v28 ) /*0x54c115*/
  {
LABEL_7:
    (*(void (__thiscall **)(int *, int *))(a1[0x12] + 0x28))(a1 + 0x12, a1 + 4); /*0x54c117*/
    if ( v24 ) /*0x54c12a*/
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x12] + 0x1C))(a1 + 0x12, a1 + 0xD, 1.0, 0, 0); /*0x54c13f*/
    goto LABEL_11; /*0x54c13f*/
  }
  (*(void (__thiscall **)(int *, int *))(a1[0x12] + 0x28))(a1 + 0x12, a1 + 0xD); /*0x54c160*/
LABEL_11:
  v32 = 1; /*0x54c164*/
LABEL_12:
  v29 = sub_54BA90(a4, a1 + 0x17, a1 + 0x1B, 0); /*0x54c169*/
  v7 = sub_54BA90(a4, a1 + 0x20, a1 + 0x24, 1); /*0x54c19f*/
  v25 = v7; /*0x54c1ac*/
  if ( v29 ) /*0x54c1b0*/
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x29] + 0x28))(a1 + 0x29, a1 + 0x1B); /*0x54c1c8*/
    if ( v25 ) /*0x54c1cf*/
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x29] + 0x1C))(a1 + 0x29, a1 + 0x24, 1.0, 0, 0); /*0x54c1e3*/
    goto LABEL_15; /*0x54c1e3*/
  }
  if ( v7 ) /*0x54c319*/
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x29] + 0x28))(a1 + 0x29, a1 + 0x24); /*0x54c32b*/
LABEL_15:
    v33 = 1; /*0x54c1e5*/
    goto LABEL_16; /*0x54c1e5*/
  }
  v33 = 0; /*0x54c332*/
LABEL_16:
  v30 = sub_54BA90(a4, a1 + 0x2E, a1 + 0x32, 0); /*0x54c1ea*/
  v8 = sub_54BA90(a4, a1 + 0x37, a1 + 0x3B, 1); /*0x54c226*/
  v26 = v8; /*0x54c233*/
  if ( v30 ) /*0x54c237*/
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x40] + 0x28))(a1 + 0x40, a1 + 0x32); /*0x54c24f*/
    if ( v26 ) /*0x54c256*/
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x40] + 0x1C))(a1 + 0x40, a1 + 0x3B, 1.0, 0, 0); /*0x54c26a*/
    goto LABEL_19; /*0x54c26a*/
  }
  if ( v8 ) /*0x54c33e*/
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x40] + 0x28))(a1 + 0x40, a1 + 0x3B); /*0x54c350*/
LABEL_19:
    v31 = 1; /*0x54c26c*/
    goto LABEL_20; /*0x54c26c*/
  }
  v31 = 0; /*0x54c357*/
LABEL_20:
  v9 = sub_54BA90(a4, a1 + 0x45, a1 + 0x49, 0); /*0x54c271*/
  v10 = sub_54BA90(a4, a1 + 0x4E, a1 + 0x52, 1); /*0x54c2ab*/
  v27 = v10; /*0x54c2b5*/
  if ( v9 ) /*0x54c2b9*/
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x57] + 0x28))(a1 + 0x57, a1 + 0x49); /*0x54c2d7*/
    if ( v27 ) /*0x54c2de*/
      (*(void (__thiscall **)(int *, int *, _DWORD, _DWORD, _DWORD))(a1[0x57] + 0x1C))(a1 + 0x57, a1 + 0x52, 1.0, 0, 0); /*0x54c2f2*/
    goto LABEL_23; /*0x54c2f2*/
  }
  if ( v10 ) /*0x54c363*/
  {
    (*(void (__thiscall **)(int *, int *))(a1[0x57] + 0x28))(a1 + 0x57, a1 + 0x52); /*0x54c375*/
LABEL_23:
    v11 = 1; /*0x54c2f4*/
    goto LABEL_24; /*0x54c2f4*/
  }
  v11 = 0; /*0x54c37c*/
LABEL_24:
  v12 = v32 || v33 || v31 || v11; /*0x54c383*/
  v13 = *((_BYTE *)a1 + 0x1DA) == 0; /*0x54c388*/
  *((_BYTE *)a1 + 0x1D7) = v12; /*0x54c38f*/
  if ( v13 /*0x54c3dc*/
    && !a1[0x1A]
    && flt_B39AD0[0] > 0.0
    && flt_B39AD8[0] > 0.0
    && *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B39AE0) > 0.0 )
  {
    v34 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B39AE8); /*0x54c3f3*/
    if ( *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B39AE0) <= v34 ) /*0x54c407*/
    {
      v35 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B39AE8); /*0x54c41e*/
      *(float *)&v35 = v35 - *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B39AE0); /*0x54c436*/
      sub_54F630(&v37, 0x11u, 0); /*0x54c43a*/
      v14 = *a1; /*0x54c441*/
      v37 = 0.0; /*0x54c443*/
      v38 = 0.0; /*0x54c449*/
      a4 = COERCE_FLOAT(Game_RandomLargeInteger(0)); /*0x54c452*/
      v36 = (double)SLODWORD(a4) * *(float *)&v35 / dbl_A3D5A8; /*0x54c46c*/
      v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)unk_B39AE0) + v36; /*0x54c477*/
      v16 = *(void (__thiscall **)(int *, float *, _DWORD))(v14 + 0xA4); /*0x54c47b*/
      a4 = v15; /*0x54c488*/
      v16(a1, &v37, LODWORD(a4)); /*0x54c494*/
      sub_54F630(&v37, 0x11u, 0); /*0x54c49f*/
      v17 = *a1; /*0x54c4a6*/
      v37 = 1.0; /*0x54c4a8*/
      v38 = 1.0; /*0x54c4af*/
      SafeFloatPointer = GameSetting_GetSafeFloatPointer((int *)flt_B39AD0); /*0x54c4b8*/
      (*(void (__thiscall **)(int *, float *, _DWORD))(v17 + 0xA4))(a1, &v37, *(float *)SafeFloatPointer); /*0x54c4d0*/
      sub_54F630(&v37, 0x11u, 0); /*0x54c4db*/
      v19 = *a1; /*0x54c4e2*/
      v37 = 0.0; /*0x54c4e4*/
      v38 = 0.0; /*0x54c4eb*/
      v20 = GameSetting_GetSafeFloatPointer((int *)flt_B39AD8); /*0x54c4f4*/
      (*(void (__thiscall **)(int *, float *, _DWORD))(v19 + 0xA4))(a1, &v37, *(float *)v20); /*0x54c50c*/
    }
  }
  if ( *((float *)a1 + 0x77) / fCostant_100 != ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(a1[0x57] + 0x48))( /*0x54c563*/
                                                 a1 + 0x57,
                                                 0)
    || *((float *)a1 + 0x77) / fCostant_100 != ((double (__thiscall *)(int *, _DWORD))*(_DWORD *)(a1[0x49] + 0x48))(
                                                 a1 + 0x49,
                                                 0) )
  {
    (*(void (__thiscall **)(int *, _DWORD, _DWORD, _DWORD, int))(*a1 + 0xB0))(a1, 0, 0, 0, 1); /*0x54c577*/
    sub_54F630(&a3, 1u, 0); /*0x54c582*/
    v21 = *(void (__thiscall **)(int *, float *, _DWORD))(*a1 + 0xC4); /*0x54c595*/
    a3 = *((float *)a1 + 0x77) / fCostant_100; /*0x54c5a4*/
    v21(a1, &a3, 0.0); /*0x54c5ae*/
    *((_BYTE *)a1 + 0x1D7) = 1; /*0x54c5b0*/
  }
  return *((_BYTE *)a1 + 0x1D7); /*0x54c0ac*/
}
