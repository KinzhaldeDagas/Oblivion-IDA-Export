int __usercall PMDtoOffset@<eax>(_DWORD *a1@<eax>, char *a2)
{
  int v2; // edx
  int v3; // ecx

  v2 = a1[1];
  v3 = 0;
  if ( v2 >= 0 )
    v3 = *(_DWORD *)(*(_DWORD *)&a2[v2] + a1[2]) + a1[1];
  return v3 + *a1;
}
