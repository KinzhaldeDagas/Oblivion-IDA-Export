// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_36@<eax>(int a1@<ebp>, _BYTE *a2@<edi>, _BYTE *a3@<esi>)
{
  *a2 = *a3;
  a2[1] = a3[1];
  a2[2] = a3[2];
  return *(_DWORD *)(a1 + 8);
}
