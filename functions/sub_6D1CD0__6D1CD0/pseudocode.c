unsigned int __thiscall sub_6D1CD0(float *this, float a2)
{
  float *v2; // ebp
  unsigned int *v3; // esi
  void (__cdecl *v4)(unsigned int, float *, int, float *, int); // eax
  void (__cdecl *v5)(unsigned int, float *, int, float *, int); // eax
  void (__cdecl *v6)(unsigned int, float *, int, int *, int); // eax
  unsigned int v7; // esi
  float v8; // edi
  unsigned int v9; // ecx
  float v10; // eax
  int v11; // edi
  int v12; // ecx
  float v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  float *v17; // eax
  float *v18; // eax
  float *v19; // edi
  int v20; // esi
  unsigned int v22; // [esp-28h] [ebp-5Ch]
  unsigned int v23; // [esp-14h] [ebp-48h]
  unsigned int v24; // [esp-14h] [ebp-48h]
  float v25; // [esp+10h] [ebp-24h]
  float v26; // [esp+14h] [ebp-20h] BYREF
  float *v27; // [esp+18h] [ebp-1Ch]
  int v28; // [esp+1Ch] [ebp-18h] BYREF
  float v29[2]; // [esp+20h] [ebp-14h] BYREF
  int v30; // [esp+30h] [ebp-4h]

  v2 = this; /*0x6d1cf6*/
  v27 = this; /*0x6d1cf8*/
  v3 = (unsigned int *)LODWORD(a2); /*0x6d1cfc*/
  j_NiSingleInterpController_LoadBinary((int *)this, (_DWORD *)LODWORD(a2)); /*0x6d1d01*/
  v23 = v3[0x87]; /*0x6d1d19*/
  v4 = *(void (__cdecl **)(unsigned int, float *, int, float *, int))(v23 + 4); /*0x6d1d1a*/
  LODWORD(a2) = 4; /*0x6d1d1d*/
  v4(v23, v2 + 0x15, 4, &a2, 1); /*0x6d1d25*/
  if ( v3[0x36] >= 0xA010068 ) /*0x6d1d34*/
    return sub_712AE0(v3); /*0x6d1f43*/
  v24 = v3[0x87]; /*0x6d1d4e*/
  v5 = *(void (__cdecl **)(unsigned int, float *, int, float *, int))(v24 + 4); /*0x6d1d4f*/
  LODWORD(a2) = 4; /*0x6d1d52*/
  v5(v24, &v26, 4, &a2, 1); /*0x6d1d5a*/
  v22 = v3[0x87]; /*0x6d1d70*/
  v6 = *(void (__cdecl **)(unsigned int, float *, int, int *, int))(v22 + 4); /*0x6d1d71*/
  v28 = 4; /*0x6d1d74*/
  v6(v22, v29, 4, &v28, 1); /*0x6d1d7c*/
  v7 = sub_712AE0(v3); /*0x6d1d8a*/
  v8 = COERCE_FLOAT(FormHeapAlloc(0x18u)); /*0x6d1d91*/
  a2 = v8; /*0x6d1d96*/
  v30 = 0; /*0x6d1d9e*/
  if ( v8 == 0.0 ) /*0x6d1da2*/
  {
    v25 = 0.0; /*0x6d1dc5*/
  }
  else
  {
    NiObject_constr((NiObject *)LODWORD(v8)); /*0x6d1da6*/
    *(_DWORD *)LODWORD(v8) = &NiFloatData::`vftable'; /*0x6d1dad*/
    *(_DWORD *)(LODWORD(v8) + 8) = 0; /*0x6d1db3*/
    *(_DWORD *)(LODWORD(v8) + 0xC) = 0; /*0x6d1db6*/
    *(_DWORD *)(LODWORD(v8) + 0x10) = 0; /*0x6d1db9*/
    *(_BYTE *)(LODWORD(v8) + 0x14) = 0; /*0x6d1dbc*/
    v25 = v8; /*0x6d1dbf*/
  }
  v30 = 0xFFFFFFFF; /*0x6d1dcb*/
  if ( v7 )
  {
    v9 = (unsigned __int64)(v7 + 1) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * (v7 + 1);
    v10 = COERCE_FLOAT(FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4));
    a2 = v10; /*0x6d1e03*/
    v30 = 1; /*0x6d1e09*/
    if ( v10 == 0.0 ) /*0x6d1e11*/
    {
      v12 = 0; /*0x6d1e2f*/
    }
    else
    {
      v11 = LODWORD(v10) + 4; /*0x6d1e1e*/
      *(_DWORD *)LODWORD(v10) = v7 + 1; /*0x6d1e24*/
      ArrayConstructor( /*0x6d1e26*/
        (char *)(LODWORD(v10) + 4),
        8u,
        v7 + 1,
        (void (__thiscall *)(char *))ActorList_ReturnHead,
        Shared_NoOpVirtual_60D0A0);
      v12 = v11; /*0x6d1e2b*/
    }
    v13 = 0.0; /*0x6d1e35*/
    a2 = v26; /*0x6d1e39*/
    v30 = 0xFFFFFFFF; /*0x6d1e3d*/
    do /*0x6d1e73*/
    {
      v14 = a2; /*0x6d1e47*/
      *(float *)(v12 + 8 * LODWORD(v13)) = a2; /*0x6d1e4f*/
      a2 = v13; /*0x6d1e52*/
      v15 = (double)SLODWORD(v13); /*0x6d1e56*/
      if ( v13 < 0.0 ) /*0x6d1e5a*/
        v15 = v15 + flt_A2FC78; /*0x6d1e5c*/
      *(float *)(v12 + 8 * LODWORD(v13)++ + 4) = v15; /*0x6d1e62*/
      a2 = v14 + v29[0]; /*0x6d1e6f*/
    }
    while ( LODWORD(v13) < v7 ); /*0x6d1e73*/
    *(float *)(v12 + 8 * v7) = a2; /*0x6d1e7e*/
    LODWORD(v29[1]) = v7 - 1; /*0x6d1e81*/
    v16 = (double)(int)(v7 - 1); /*0x6d1e85*/
    if ( (int)(v7 - 1) < 0 ) /*0x6d1e89*/
      v16 = v16 + flt_A2FC78; /*0x6d1e8b*/
    *(float *)(v12 + 8 * v7 + 4) = v16; /*0x6d1e93*/
    sub_6E3540((_DWORD *)LODWORD(v25), v12, v7 + 1, 5); /*0x6d1e9d*/
    v17 = v27; /*0x6d1ea6*/
    v27[5] = v26; /*0x6d1eaa*/
    v2 = v17; /*0x6d1ead*/
    v17[6] = a2; /*0x6d1eb3*/
  }
  *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x18u)); /*0x6d1eb8*/
  a2 = *(float *)&v18; /*0x6d1ec0*/
  v30 = 2; /*0x6d1ec6*/
  if ( *(float *)&v18 == 0.0 ) /*0x6d1ece*/
    v19 = 0; /*0x6d1ee0*/
  else
    v19 = sub_6D2990(v18, SLODWORD(v25)); /*0x6d1edc*/
  v20 = *((_DWORD *)v2 + 0xF); /*0x6d1ee2*/
  v30 = 0xFFFFFFFF; /*0x6d1ee7*/
  if ( (float *)v20 != v19 ) /*0x6d1eef*/
  {
    if ( v20 ) /*0x6d1ef3*/
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) ) /*0x6d1ef9*/
        (**(void (__thiscall ***)(int, int))v20)(v20, 1); /*0x6d1f0f*/
    }
    *((_DWORD *)v2 + 0xF) = v19; /*0x6d1f13*/
    if ( v19 ) /*0x6d1f16*/
      InterlockedIncrement((volatile LONG *)v19 + 1); /*0x6d1f1c*/
  }
  return (*(unsigned int (__thiscall **)(_DWORD))(**((_DWORD **)v2 + 0xF) + 0x7C))(*((_DWORD *)v2 + 0xF)); /*0x6d1f2c*/
}
