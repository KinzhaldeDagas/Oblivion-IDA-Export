// Fog interior decode: reads TESObjectCELL::LightingData fog packed RGB at lighting+0x08 and normalizes to float RGB.
int __thiscall sub_4C99C0(int this, float *a2)
{
  int v2; // eax
  int v3; // eax
  double v5; // st6
  double v6; // st7
  int result; // eax
  int v8; // [esp+8h] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v2 = *(_DWORD *)(this + 0x3C)) != 0 ) /*0x4c99cc*/
    v3 = *(_DWORD *)(v2 + 8);                   // Fog interior decode: load LightingData fog packed RGB (+0x08), source for active Sky fog color in mode 1. /*0x4c99ce*/
  else
    v3 = 0; /*0x4c99d3*/
  v5 = dbl_A3DDD8; /*0x4c99e5*/
  v8 = BYTE1(v3); /*0x4c99eb*/
  v6 = (double)(unsigned __int8)v3 / v5; /*0x4c99ef*/
  result = BYTE2(v3); /*0x4c99f4*/
  *a2 = v6; /*0x4c99f9*/
  a2[1] = (double)v8 / v5; /*0x4c9a05*/
  a2[2] = (double)(unsigned __int8)result / v5; /*0x4c9a0e*/
  return result; /*0x4c9a12*/
}
