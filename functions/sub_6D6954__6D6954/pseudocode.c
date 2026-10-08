// positive sp value has been detected, the output may be wrong!
int __userpurge sub_6D6954@<eax>(int a1@<edx>, _DWORD *a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  *(_DWORD *)(a4 + 0x14) = a1; /*0x6d6954*/
  *(float *)(a4 + 0x18) = flt_B3CBA4; /*0x6d695c*/
  *(float *)(a4 + 0x1C) = flt_B3CBA8; /*0x6d6965*/
  *(float *)(a4 + 0x20) = flt_B3CBAC; /*0x6d696e*/
  *(float *)(a4 + 0x24) = flt_B3CBB0; /*0x6d6976*/
  *(float *)(a4 + 0x28) = flt_A79E10; /*0x6d697f*/
  *(_DWORD *)(a4 + 0x2C) = a3; /*0x6d6982*/
  *(_WORD *)(a4 + 0x30) = a3; /*0x6d6985*/
  *(_WORD *)(a4 + 0x32) = a3; /*0x6d6989*/
  *(_WORD *)(a4 + 0x34) = a3; /*0x6d698d*/
  NiTransformInterpolator_CopyMembers(a2, a4, a5); /*0x6d69a5*/
  return a4; /*0x6d69be*/
}
