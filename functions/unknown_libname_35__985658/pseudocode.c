// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_35@<eax>(int a1@<ebp>, _BYTE *a2@<edi>, _BYTE *a3@<esi>)
{
  *a2 = *a3; /*0x98565a*/
  a2[1] = a3[1]; /*0x98565f*/
  return *(_DWORD *)(a1 + 8); /*0x985668*/
}
