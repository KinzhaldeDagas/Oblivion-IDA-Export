unsigned int __thiscall sub_6D1CD0(float *this, float a2)
{
  float *v2; // ebp
  float v3; // esi
  void (__cdecl *v4)(int, float *, int, float *, int); // eax
  void (__cdecl *v5)(int, float *, int, float *, int); // eax
  void (__cdecl *v6)(int, float *, int, int *, int); // eax
  unsigned int v7; // esi
  float v8; // edi
  unsigned int v9; // ecx
  float v10; // eax
  _DWORD *v11; // edi
  int v12; // ecx
  float v13; // eax
  double v14; // st7
  double v15; // st6
  double v16; // st7
  float *v17; // eax
  float *v18; // eax
  float *v19; // edi
  int v20; // esi
  int v22; // [esp-28h] [ebp-5Ch]
  int v23; // [esp-14h] [ebp-48h]
  int v24; // [esp-14h] [ebp-48h]
  float v25; // [esp+10h] [ebp-24h]
  float v26; // [esp+14h] [ebp-20h] BYREF
  float *v27; // [esp+18h] [ebp-1Ch]
  int v28; // [esp+1Ch] [ebp-18h] BYREF
  float v29[2]; // [esp+20h] [ebp-14h] BYREF
  int v30; // [esp+30h] [ebp-4h]

  v2 = this;
  v27 = this;
  v3 = a2;
  sub_6ECB70(LODWORD(a2));
  v23 = *(_DWORD *)(LODWORD(v3) + 0x21C);
  v4 = *(void (__cdecl **)(int, float *, int, float *, int))(v23 + 4);
  LODWORD(a2) = 4;
  v4(v23, v2 + 0x15, 4, &a2, 1);
  if ( *(_DWORD *)(LODWORD(v3) + 0xD8) >= 0xA010068u )
    return sub_712AE0((_DWORD *)LODWORD(v3));
  v24 = *(_DWORD *)(LODWORD(v3) + 0x21C);
  v5 = *(void (__cdecl **)(int, float *, int, float *, int))(v24 + 4);
  LODWORD(a2) = 4;
  v5(v24, &v26, 4, &a2, 1);
  v22 = *(_DWORD *)(LODWORD(v3) + 0x21C);
  v6 = *(void (__cdecl **)(int, float *, int, int *, int))(v22 + 4);
  v28 = 4;
  v6(v22, v29, 4, &v28, 1);
  v7 = sub_712AE0((_DWORD *)LODWORD(v3));
  v8 = COERCE_FLOAT(FormHeapAlloc(0x18u));
  a2 = v8;
  v30 = 0;
  if ( v8 == 0.0 )
  {
    v25 = 0.0;
  }
  else
  {
    NiObject_constr((NiObject *)LODWORD(v8));
    *(_DWORD *)LODWORD(v8) = &NiFloatData::`vftable';
    *(_DWORD *)(LODWORD(v8) + 8) = 0;
    *(_DWORD *)(LODWORD(v8) + 0xC) = 0;
    *(_DWORD *)(LODWORD(v8) + 0x10) = 0;
    *(_BYTE *)(LODWORD(v8) + 0x14) = 0;
    v25 = v8;
  }
  v30 = 0xFFFFFFFF;
  if ( v7 )
  {
    v9 = (unsigned __int64)(v7 + 1) >> 0x1D != 0 ? 0xFFFFFFFF : 8 * (v7 + 1);
    v10 = COERCE_FLOAT(FormHeapAlloc(__CFADD__(v9, 4) ? 0xFFFFFFFF : v9 + 4));
    a2 = v10;
    v30 = 1;
    if ( v10 == 0.0 )
    {
      v12 = 0;
    }
    else
    {
      v11 = (_DWORD *)(LODWORD(v10) + 4);
      *(_DWORD *)LODWORD(v10) = v7 + 1;
      ArrayConstructor((void *)(LODWORD(v10) + 4), 8u, v7 + 1, (int)sub_7616D0, TESTexture::ClearComponentReferences);
      v12 = (int)v11;
    }
    v13 = 0.0;
    a2 = v26;
    v30 = 0xFFFFFFFF;
    do
    {
      v14 = a2;
      *(float *)(v12 + 8 * LODWORD(v13)) = a2;
      a2 = v13;
      v15 = (double)SLODWORD(v13);
      if ( v13 < 0.0 )
        v15 = v15 + flt_A2FC78;
      *(float *)(v12 + 8 * LODWORD(v13)++ + 4) = v15;
      a2 = v14 + v29[0];
    }
    while ( LODWORD(v13) < v7 );
    *(float *)(v12 + 8 * v7) = a2;
    LODWORD(v29[1]) = v7 - 1;
    v16 = (double)(int)(v7 - 1);
    if ( (int)(v7 - 1) < 0 )
      v16 = v16 + flt_A2FC78;
    *(float *)(v12 + 8 * v7 + 4) = v16;
    sub_6E3540((_DWORD *)LODWORD(v25), v12, v7 + 1, 5);
    v17 = v27;
    v27[5] = v26;
    v2 = v17;
    v17[6] = a2;
  }
  *(float *)&v18 = COERCE_FLOAT(FormHeapAlloc(0x18u));
  a2 = *(float *)&v18;
  v30 = 2;
  if ( *(float *)&v18 == 0.0 )
    v19 = 0;
  else
    v19 = sub_6D2990(v18, SLODWORD(v25));
  v20 = *((_DWORD *)v2 + 0xF);
  v30 = 0xFFFFFFFF;
  if ( (float *)v20 != v19 )
  {
    if ( v20 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v20 + 4)) )
        (**(void (__thiscall ***)(int, int))v20)(v20, 1);
    }
    *((_DWORD *)v2 + 0xF) = v19;
    if ( v19 )
      InterlockedIncrement((volatile LONG *)v19 + 1);
  }
  return (*(unsigned int (__thiscall **)(_DWORD))(**((_DWORD **)v2 + 0xF) + 0x7C))(*((_DWORD *)v2 + 0xF));
}
