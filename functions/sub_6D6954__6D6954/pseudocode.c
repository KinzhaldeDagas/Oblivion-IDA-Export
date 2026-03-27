// positive sp value has been detected, the output may be wrong!
int __userpurge sub_6D6954@<eax>(int a1@<edx>, _DWORD *a2@<ebx>, int a3@<edi>, int a4@<esi>, int a5)
{
  *(_DWORD *)(a4 + 0x14) = a1;
  *(_DWORD *)(a4 + 0x18) = dword_B3CBA4;
  *(_DWORD *)(a4 + 0x1C) = dword_B3CBA8;
  *(_DWORD *)(a4 + 0x20) = dword_B3CBAC;
  *(_DWORD *)(a4 + 0x24) = dword_B3CBB0;
  *(float *)(a4 + 0x28) = flt_A79E10;
  *(_DWORD *)(a4 + 0x2C) = a3;
  *(_WORD *)(a4 + 0x30) = a3;
  *(_WORD *)(a4 + 0x32) = a3;
  *(_WORD *)(a4 + 0x34) = a3;
  sub_6D6660(a2, a4, a5);
  return a4;
}
