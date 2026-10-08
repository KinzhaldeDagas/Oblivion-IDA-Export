void __fastcall sub_8A9A60(float *a1, int a2)
{
  double v2; // st7
  float v3; // [esp+0h] [ebp-4h]

  v2 = a1[1]; /*0x8a9a61*/
  if ( *a1 < v2 ) /*0x8a9a70*/
    v2 = *a1; /*0x8a9a74*/
  v3 = a1[2]; /*0x8a9a7a*/
  if ( v2 >= v3 ) /*0x8a9a85*/
    v2 = v3; /*0x8a9a89*/
  if ( v2 >= kHeadBodyNormalMatchRadius ) /*0x8a9a97*/
    *(_DWORD *)(a2 + 0x20) = 0x3DCCCCCD; /*0x8a9aa6*/
  else
    *(float *)(a2 + 0x20) = v2 * flt_A3D9A4; /*0x8a9a9f*/
}
