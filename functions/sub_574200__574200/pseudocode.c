NiAVObject *__thiscall sub_574200(_DWORD *this, int a2, _DWORD *a3)
{
  int v3; // esi
  NiPoint3 *v4; // ebp
  NiColorAlpha *v5; // eax
  NiColorAlpha *v6; // edi
  int v7; // ebx
  double v9; // st6
  float v10; // ebx
  _DWORD *v11; // ecx
  float v12; // esi
  float *p_x; // edx
  float *v14; // edx
  _DWORD *v15; // ecx
  int v16; // edi
  __int16 v17; // bx
  NiAVObject *v18; // eax
  NiAVObject *v19; // esi
  NiColorAlpha *v21; // [esp+14h] [ebp-34h]
  int v22; // [esp+20h] [ebp-28h]
  void *v23; // [esp+24h] [ebp-24h]
  NiPoint3 *v24; // [esp+28h] [ebp-20h]
  float v26; // [esp+34h] [ebp-14h]
  float v27; // [esp+34h] [ebp-14h]
  UInt16 *v28; // [esp+4Ch] [ebp+4h]
  unsigned int v29; // [esp+50h] [ebp+8h]

  v3 = 4 * a2; /*0x574231*/
  v24 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(4 * a2)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * a2);
  v4 = (NiPoint3 *)FormHeapAlloc((0xC * (unsigned __int64)(unsigned int)(4 * a2)) >> 0x20 != 0 ? 0xFFFFFFFF : 0x30 * a2);
  v23 = (void *)FormHeapAlloc((unsigned __int64)(unsigned int)(4 * a2) >> 0x1D != 0 ? 0xFFFFFFFF : 0x20 * a2);
  v5 = (NiColorAlpha *)FormHeapAlloc((unsigned __int64)(unsigned int)(4 * a2) >> 0x1C != 0 ? 0xFFFFFFFF : a2 << 6);
  v6 = v5; /*0x5742a5*/
  v7 = 0; /*0x5742ae*/
  if ( v5 ) /*0x5742b6*/
    sub_401080(v5, 0x10, v3, (void *(__thiscall *)(void *))sub_47EA50); /*0x5742c1*/
  else
    v6 = 0; /*0x5742c8*/
  v9 = kTerrainLODQuadRayDirectionZ; /*0x5742d3*/
  v21 = v6; /*0x5742d9*/
  if ( v3 >= 4 ) /*0x5742e5*/
  {
    v10 = 0.0; /*0x5742f7*/
    v29 = ((unsigned int)(v3 - 4) >> 2) + 1; /*0x574304*/
    v26 = kTerrainLODQuadRayDirectionZ; /*0x574308*/
    v11 = (_DWORD *)((char *)v6 + 0x20); /*0x574310*/
    v22 = 4 * v29; /*0x574317*/
    v12 = 0.0; /*0x57431b*/
    p_x = &v4[2].x; /*0x57431f*/
    do /*0x5743ab*/
    {
      v11[0xFFFFFFF8] = *a3; /*0x574324*/
      v11[0xFFFFFFF9] = a3[1]; /*0x57432a*/
      v11[0xFFFFFFFA] = a3[2]; /*0x574330*/
      v11[0xFFFFFFFB] = a3[3]; /*0x574336*/
      p_x[0xFFFFFFFA] = v10; /*0x574339*/
      p_x[0xFFFFFFFB] = v26; /*0x57433c*/
      p_x[0xFFFFFFFC] = v12; /*0x57433f*/
      v11[0xFFFFFFFC] = *a3; /*0x574344*/
      v11[0xFFFFFFFD] = a3[1]; /*0x57434a*/
      v11[0xFFFFFFFE] = a3[2]; /*0x574350*/
      v11[0xFFFFFFFF] = a3[3]; /*0x574356*/
      p_x[0xFFFFFFFD] = v10; /*0x574359*/
      p_x[0xFFFFFFFE] = v26; /*0x57435c*/
      p_x[0xFFFFFFFF] = v12; /*0x57435f*/
      *v11 = *a3; /*0x574364*/
      v11[1] = a3[1]; /*0x574369*/
      v11[2] = a3[2]; /*0x57436f*/
      v11[3] = a3[3]; /*0x574375*/
      *p_x = v10; /*0x574378*/
      p_x[1] = v26; /*0x57437a*/
      p_x[2] = v12; /*0x57437d*/
      v11[4] = *a3; /*0x574382*/
      v11[5] = a3[1]; /*0x574388*/
      v11[6] = a3[2]; /*0x57438e*/
      v11[7] = a3[3]; /*0x574394*/
      p_x[3] = v10; /*0x574397*/
      p_x[4] = v26; /*0x57439a*/
      p_x[5] = v12; /*0x57439d*/
      v11 += 0x10; /*0x5743a0*/
      p_x += 0xC; /*0x5743a3*/
      --v29; /*0x5743a6*/
    }
    while ( v29 ); /*0x5743ab*/
    v3 = 4 * a2; /*0x5743b5*/
    v7 = v22; /*0x5743b9*/
  }
  if ( v7 < v3 ) /*0x5743c3*/
  {
    v14 = &v4[v7].x; /*0x5743ca*/
    v15 = (_DWORD *)((char *)v6 + 0x10 * v7); /*0x5743db*/
    v16 = v3 - v7; /*0x5743e3*/
    do /*0x57441f*/
    {
      *v15 = *a3; /*0x5743f2*/
      v15[1] = a3[1]; /*0x5743f7*/
      v15[2] = a3[2]; /*0x5743fd*/
      v15[3] = a3[3]; /*0x574403*/
      *v14 = 0.0; /*0x57440a*/
      v27 = v9; /*0x5743dd*/
      v14[1] = v27; /*0x574410*/
      v14[2] = 0.0; /*0x574413*/
      v15 += 4; /*0x574416*/
      v14 += 3; /*0x574419*/
      --v16; /*0x57441c*/
    }
    while ( v16 ); /*0x57441f*/
    v6 = v21; /*0x574421*/
  }
  v17 = a2; /*0x57442f*/
  v28 = (UInt16 *)FormHeapAlloc((unsigned __int64)(unsigned int)(6 * a2) >> 0x1F != 0 ? 0xFFFFFFFF : 0xC * a2);
  v18 = (NiAVObject *)FormHeapAlloc(0xD0u); /*0x574457*/
  if ( v18 ) /*0x57446d*/
    v19 = sub_4A1780(v18, v3, v24, v4, v6, v23, 1, 0, 2 * v17, v28, 0, 0, 0, 0); /*0x574498*/
  else
    v19 = 0; /*0x57449c*/
  sub_405680((NiNode *)v19, (BSShaderProperty *)*(this + 3)); /*0x5744b0*/
  NiAVObject_InitializePropertyState(v19); /*0x5744b7*/
  return v19; /*0x5744be*/
}
