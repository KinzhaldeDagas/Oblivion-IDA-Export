// Fog interior decode: reads TESObjectCELL::LightingData ambient packed RGB at lighting+0x00 and normalizes to float RGB.
int __thiscall sub_4C98C0(int this, float *a2)
{
  int *v2; // eax
  int v3; // eax
  double v5; // st6
  double v6; // st7
  int result; // eax
  int v8; // [esp+8h] [ebp+4h]

  if ( (*(_BYTE *)(this + 0x24) & 1) != 0 && (v2 = *(int **)(this + 0x3C)) != 0 ) /*0x4c98cc*/
    v3 = *v2;                                   // Fog interior decode: load LightingData ambient packed RGB (+0x00). /*0x4c98ce*/
  else
    v3 = 0; /*0x4c98d2*/
  v5 = dbl_A3DDD8; /*0x4c98e4*/
  v8 = BYTE1(v3); /*0x4c98ea*/
  v6 = (double)(unsigned __int8)v3 / v5; /*0x4c98ee*/
  result = BYTE2(v3); /*0x4c98f3*/
  *a2 = v6; /*0x4c98f8*/
  a2[1] = (double)v8 / v5; /*0x4c9904*/
  a2[2] = (double)(unsigned __int8)result / v5; /*0x4c990d*/
  return result; /*0x4c9911*/
}
