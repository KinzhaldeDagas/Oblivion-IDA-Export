//
// GPU static-world LOD audit 2026-09-27: world center is data+14/+18/+1C; subtract camera+88/+8C/+90, project using raw camera forward +64/+70/+7C, store float, multiply camera LODAdjust+120, store float, abs. Count=data+20, rows=data+24, stride16; use world near+8 and far+C, first interval near<=distance<far. This is NOT Euclidean range.
int __thiscall sub_724B30(int this, float *a2, int a3)
{
  unsigned int v4; // esi
  int v5; // edx
  double v6; // st7
  float *i; // ecx
  float v9; // [esp+10h] [ebp-Ch]
  float v10; // [esp+14h] [ebp-8h]
  float v11; // [esp+18h] [ebp-4h]
  float v12; // [esp+20h] [ebp+4h]
  float v13; // [esp+20h] [ebp+4h]
  float v14; // [esp+20h] [ebp+4h]

  v4 = *(_DWORD *)(this + 0x20); /*0x724b41*/
  v5 = 0; /*0x724b44*/
  v9 = *(float *)(this + 0x14) - a2[0x22]; /*0x724b48*/
  v10 = *(float *)(this + 0x18) - a2[0x23]; /*0x724b55*/
  v11 = *(float *)(this + 0x1C) - a2[0x24]; /*0x724b62*/
  v12 = a2[0x1C] * v10 + a2[0x19] * v9 + a2[0x1F] * v11; /*0x724b97*/
  v13 = v12 * a2[0x48];                         // Pass332 decode: NiRangeLODData multiplies shadow-camera-relative forward distance by Camera::LODAdjust before selecting an authored interval; this can choose coarse/no caster geometry. /*0x724ba5*/
  v14 = fabs(v13); /*0x724baf*/
  if ( !v4 ) /*0x724bbb*/
    return 0xFFFFFFFF; /*0x724bea*/
  v6 = v14; /*0x724bc0*/
  for ( i = (float *)(*(_DWORD *)(this + 0x24) + 0xC); i[0xFFFFFFFF] > v6 || *i <= v6; i += 4 ) /*0x724bc4*/
  {
    if ( ++v5 >= v4 ) /*0x724be6*/
      return 0xFFFFFFFF; /*0x724be6*/
  }
  return v5; /*0x724bed*/
}
