// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_34@<eax>(int a1@<ebp>, _BYTE *a2@<edi>, _BYTE *a3@<esi>)
{
  *a2 = *a3; /*0x98564e*/
  return *(_DWORD *)(a1 + 8); /*0x985656*/
}
