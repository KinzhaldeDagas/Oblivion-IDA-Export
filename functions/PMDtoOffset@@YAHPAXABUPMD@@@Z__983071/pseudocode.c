int __usercall PMDtoOffset@<eax>(_DWORD *a1@<eax>, char *a2)
{
  int v2; // edx
  int v3; // ecx

  v2 = a1[1]; /*0x983071*/
  v3 = 0; /*0x983074*/
  if ( v2 >= 0 ) /*0x983078*/
    v3 = *(_DWORD *)(*(_DWORD *)&a2[v2] + a1[2]) + a1[1]; /*0x983087*/
  return v3 + *a1; /*0x98308f*/
}
