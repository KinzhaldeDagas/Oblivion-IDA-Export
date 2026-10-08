// positive sp value has been detected, the output may be wrong!
int __usercall unknown_libname_36@<eax>(int a1@<ebp>, _BYTE *a2@<edi>, _BYTE *a3@<esi>)
{
  *a2 = *a3; /*0x98566e*/
  a2[1] = a3[1]; /*0x985673*/
  a2[2] = a3[2]; /*0x985679*/
  return *(_DWORD *)(a1 + 8); /*0x985682*/
}
