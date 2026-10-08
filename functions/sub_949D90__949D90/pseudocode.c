int __thiscall sub_949D90(__m128 *this, int a2)
{
  int v2; // eax
  int v3; // ebx
  __m128 *v4; // esi
  int v5; // esi
  int v6; // edx
  int v7; // ebx
  int v8; // ecx
  int result; // eax
  int v10; // ecx
  _OWORD *v11; // edx
  __m128 *v12; // [esp+14h] [ebp-9Ch]
  _OWORD *v13; // [esp+14h] [ebp-9Ch]
  int v14; // [esp+18h] [ebp-98h]
  int v15; // [esp+1Ch] [ebp-94h]
  __m128 v16; // [esp+20h] [ebp-90h] BYREF
  _OWORD v17[8]; // [esp+30h] [ebp-80h] BYREF

  v12 = this; /*0x949dad*/
  if ( (*(_DWORD *)(a2 + 8) & 0x3FFFFFFFu) < 0x18 ) /*0x949db1*/
  {
    v2 = 2 * (*(_DWORD *)(a2 + 8) & 0x3FFFFFFF); /*0x949db3*/
    if ( v2 <= 0x18 ) /*0x949db8*/
      v2 = 0x18; /*0x949dba*/
    sub_8A6E40((const void **)a2, v2, 0x10); /*0x949dc3*/
    this = v12; /*0x949dc8*/
  }
  *(_DWORD *)(a2 + 4) = 0x18; /*0x949dcf*/
  v3 = 0; /*0x949dd6*/
  v4 = (__m128 *)v17; /*0x949dd8*/
  while ( 1 ) /*0x949de9*/
  {
    v16 = *(this + 6); /*0x949de9*/
    if ( (v3 & 1) != 0 ) /*0x949dee*/
      v16.m128_f32[0] = v16.m128_f32[0] * kTerrainLODQuadRayDirectionZ; /*0x949dfa*/
    if ( (v3 & 2) != 0 ) /*0x949e01*/
      v16.m128_f32[1] = v16.m128_f32[1] * kTerrainLODQuadRayDirectionZ; /*0x949e0d*/
    if ( (v3 & 4) != 0 ) /*0x949e14*/
      v16.m128_f32[2] = v16.m128_f32[2] * kTerrainLODQuadRayDirectionZ; /*0x949e20*/
    hkTransform_TransformPosition(v4, this + 1, &v16); /*0x949e2f*/
    ++v3; /*0x949e34*/
    ++v4; /*0x949e35*/
    if ( v3 >= 8 ) /*0x949e3b*/
      break; /*0x949e3b*/
    this = v12; /*0x949dde*/
  }
  v5 = 0; /*0x949e3d*/
  v6 = 0; /*0x949e3f*/
  v14 = 0; /*0x949e45*/
  v13 = v17; /*0x949e49*/
  do /*0x949eb3*/
  {
    v7 = 1; /*0x949e50*/
    v15 = 1; /*0x949e57*/
    v8 = 0x10 * v5; /*0x949e5b*/
    do /*0x949e9e*/
    {
      result = v6 ^ v7; /*0x949e62*/
      if ( v6 < (v6 ^ v7) ) /*0x949e66*/
      {
        v7 = v15; /*0x949e71*/
        *(_OWORD *)(v8 + *(_DWORD *)a2) = *v13; /*0x949e77*/
        v10 = v8 + 0x10; /*0x949e7c*/
        v11 = (_OWORD *)(v10 + *(_DWORD *)a2); /*0x949e7f*/
        v5 += 2; /*0x949e82*/
        v8 = v10 + 0x10; /*0x949e83*/
        result *= 0x10; /*0x949e86*/
        *v11 = *(_OWORD *)((char *)v17 + result); /*0x949e8e*/
        v6 = v14; /*0x949e91*/
      }
      v7 *= 2; /*0x949e95*/
      v15 = v7; /*0x949e9a*/
    }
    while ( v7 < 8 ); /*0x949e9e*/
    v14 = ++v6; /*0x949eab*/
    ++v13; /*0x949eaf*/
  }
  while ( v6 < 8 ); /*0x949eb3*/
  return result; /*0x949eb5*/
}
