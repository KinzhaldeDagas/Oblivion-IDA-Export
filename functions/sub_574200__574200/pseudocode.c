NiAVObject *__thiscall sub_574200(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // esi
  int v4; // ebp
  void *v5; // eax
  int v6; // edi
  int v7; // ebx
  double v9; // st6
  float v10; // ebx
  _DWORD *v11; // ecx
  float v12; // esi
  float *v13; // edx
  float *v14; // edx
  _DWORD *v15; // ecx
  int v16; // edi
  __int16 v17; // bx
  NiAVObject *v18; // eax
  NiAVObject *v19; // esi
  int v21; // [esp+14h] [ebp-34h]
  int v22; // [esp+20h] [ebp-28h]
  int v23; // [esp+24h] [ebp-24h]
  int v24; // [esp+28h] [ebp-20h]
  float v26; // [esp+34h] [ebp-14h]
  float v27; // [esp+34h] [ebp-14h]
  int v28; // [esp+4Ch] [ebp+4h]
  unsigned int v29; // [esp+50h] [ebp+8h]

  v3 = 4 * a2;
  v24 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(4 * a2)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * a2);
  v4 = FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(4 * a2)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * a2);
  v23 = FormHeapAlloc((unsigned __int64)(unsigned int)(4 * a2) >> 0x1D != 0 ? 0xFFFFFFFF : 0x20 * a2);
  v5 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)(4 * a2) >> 0x1C != 0 ? 0xFFFFFFFF : a2 << 6);
  v6 = (int)v5;
  v7 = 0;
  if ( v5 )
    sub_401080(v5, 0x10, v3, (void *(__thiscall *)(void *))sub_47EA50);
  else
    v6 = 0;
  v9 = flt_A30634;
  v21 = v6;
  if ( v3 >= 4 )
  {
    v10 = 0.0;
    v29 = ((unsigned int)(v3 - 4) >> 2) + 1;
    v26 = flt_A30634;
    v11 = (_DWORD *)(v6 + 0x20);
    v22 = 4 * v29;
    v12 = 0.0;
    v13 = (float *)(v4 + 0x18);
    do
    {
      v11[0xFFFFFFF8] = *a3;
      v11[0xFFFFFFF9] = a3[1];
      v11[0xFFFFFFFA] = a3[2];
      v11[0xFFFFFFFB] = a3[3];
      v13[0xFFFFFFFA] = v10;
      v13[0xFFFFFFFB] = v26;
      v13[0xFFFFFFFC] = v12;
      v11[0xFFFFFFFC] = *a3;
      v11[0xFFFFFFFD] = a3[1];
      v11[0xFFFFFFFE] = a3[2];
      v11[0xFFFFFFFF] = a3[3];
      v13[0xFFFFFFFD] = v10;
      v13[0xFFFFFFFE] = v26;
      v13[0xFFFFFFFF] = v12;
      *v11 = *a3;
      v11[1] = a3[1];
      v11[2] = a3[2];
      v11[3] = a3[3];
      *v13 = v10;
      v13[1] = v26;
      v13[2] = v12;
      v11[4] = *a3;
      v11[5] = a3[1];
      v11[6] = a3[2];
      v11[7] = a3[3];
      v13[3] = v10;
      v13[4] = v26;
      v13[5] = v12;
      v11 += 0x10;
      v13 += 0xC;
      --v29;
    }
    while ( v29 );
    v3 = 4 * a2;
    v7 = v22;
  }
  if ( v7 < v3 )
  {
    v14 = (float *)(v4 + 0xC * v7);
    v15 = (_DWORD *)(v6 + 0x10 * v7);
    v16 = v3 - v7;
    do
    {
      *v15 = *a3;
      v15[1] = a3[1];
      v15[2] = a3[2];
      v15[3] = a3[3];
      *v14 = 0.0;
      v27 = v9;
      v14[1] = v27;
      v14[2] = 0.0;
      v15 += 4;
      v14 += 3;
      --v16;
    }
    while ( v16 );
    v6 = v21;
  }
  v17 = a2;
  v28 = FormHeapAlloc((unsigned __int64)(unsigned int)(6 * a2) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * a2);
  v18 = (NiAVObject *)FormHeapAlloc(0xD0u);
  if ( v18 )
    v19 = sub_4A1780(v18, v3, v24, v4, v6, v23, 1, 0, 2 * v17, v28, 0, 0, 0, 0);
  else
    v19 = 0;
  sub_405680((NiNode *)v19, (BSShaderProperty *)*(this + 3));
  NiAVObject_InitializePropertyState(v19);
  return v19;
}
