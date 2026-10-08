// Fog interior decode: reads TESObjectCELL::LightingData directional packed RGB at lighting+0x04 and normalizes to float RGB.
int __thiscall sub_4C9920(int this, float *a2)
{
  int v2; // eax
  int v3; // eax
  double v5; // st6
  double v6; // st7
  int result; // eax
  int v8; // [esp+8h] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v2 = *(_DWORD *)(this + 0x3C)) != 0 ) /*0x4c992c*/
    v3 = *(_DWORD *)(v2 + 4);                   // Fog interior decode: load LightingData directional packed RGB (+0x04). /*0x4c992e*/
  else
    v3 = 0; /*0x4c9933*/
  v5 = dbl_A3DDD8; /*0x4c9945*/
  v8 = BYTE1(v3); /*0x4c994b*/
  v6 = (double)(unsigned __int8)v3 / v5; /*0x4c994f*/
  result = BYTE2(v3); /*0x4c9954*/
  *a2 = v6; /*0x4c9959*/
  a2[1] = (double)v8 / v5; /*0x4c9965*/
  a2[2] = (double)(unsigned __int8)result / v5; /*0x4c996e*/
  return result; /*0x4c9972*/
}
