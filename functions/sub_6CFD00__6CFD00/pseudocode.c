NiObject *__thiscall sub_6CFD00(_DWORD *this, float a2)
{
  int v2; // esi
  int v3; // ecx
  int v4; // edx
  NiObject *v5; // eax
  int v7[8]; // [esp-20h] [ebp-68h] BYREF
  float v8[4]; // [esp+Ch] [ebp-3Ch] BYREF
  _DWORD v9[11]; // [esp+1Ch] [ebp-2Ch] BYREF
  float v10; // [esp+4Ch] [ebp+4h]

  v2 = *(_DWORD *)(*(this + 0x10) + 4 * LOWORD(a2)); /*0x6cfd2d*/
  sub_7150F0(v8, (float *)(v2 + 0x30)); /*0x6cfd38*/
  v3 = *(_DWORD *)(v2 + 0x58); /*0x6cfd40*/
  v4 = *(_DWORD *)(v2 + 0x5C); /*0x6cfd46*/
  v10 = *(float *)(v2 + 0x60); /*0x6cfd49*/
  v9[0] = *(_DWORD *)(v2 + 0x54); /*0x6cfd51*/
  *(float *)&v9[7] = v10; /*0x6cfd59*/
  v9[1] = v3; /*0x6cfd5d*/
  v9[2] = v4; /*0x6cfd65*/
  *(float *)&v9[3] = v8[0]; /*0x6cfd6d*/
  *(float *)&v9[4] = v8[1]; /*0x6cfd77*/
  *(float *)&v9[5] = v8[2]; /*0x6cfd7b*/
  *(float *)&v9[6] = v8[3]; /*0x6cfd7f*/
  v5 = (NiObject *)FormHeapAlloc(0x38u); /*0x6cfd83*/
  v9[0xA] = 0; /*0x6cfd91*/
  if ( !v5 ) /*0x6cfd99*/
    return 0; /*0x6cfdc6*/
  qmemcpy(v7, v9, sizeof(v7)); /*0x6cfda9*/
  return NiTransformInterpolator_ConstructWithTransform(v5, v7[0], v7[1], v7[2], v7[3], v7[4], v7[5], v7[6], v7[7]); /*0x6cfdb2*/
}
