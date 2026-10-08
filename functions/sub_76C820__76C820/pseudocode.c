float *__stdcall sub_76C820(float *a1, int a2)
{
  _DWORD *v2; // ecx

  v2 = *(_DWORD **)(a2 + 0xC); /*0x76c825*/
  *(_BYTE *)(a2 + 0x5A) = 1; /*0x76c82e*/
  sub_772FF0(v2, 0x18, 2, 0); /*0x76c832*/
  *(float *)(a2 + 0x18) = *a1; /*0x76c83d*/
  *(float *)(a2 + 0x28) = a1[1]; /*0x76c843*/
  *(float *)(a2 + 0x38) = a1[2]; /*0x76c849*/
  *(float *)(a2 + 0x48) = 0.0; /*0x76c84e*/
  *(float *)(a2 + 0x1C) = a1[3]; /*0x76c854*/
  *(float *)(a2 + 0x2C) = a1[4]; /*0x76c85a*/
  *(float *)(a2 + 0x3C) = a1[5]; /*0x76c860*/
  *(float *)(a2 + 0x4C) = 0.0; /*0x76c863*/
  *(float *)(a2 + 0x50) = 0.0; /*0x76c866*/
  *(float *)(a2 + 0x40) = 0.0; /*0x76c869*/
  *(float *)(a2 + 0x30) = 0.0; /*0x76c86c*/
  *(float *)(a2 + 0x20) = 0.0; /*0x76c86f*/
  *(float *)(a2 + 0x54) = 0.0; /*0x76c872*/
  *(float *)(a2 + 0x44) = 0.0; /*0x76c875*/
  *(float *)(a2 + 0x34) = 0.0; /*0x76c878*/
  *(float *)(a2 + 0x24) = 0.0; /*0x76c87b*/
  return a1; /*0x76c87e*/
}
