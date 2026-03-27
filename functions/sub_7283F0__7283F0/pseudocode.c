signed int __usercall sub_7283F0@<eax>(int a1@<eax>, float *a2@<ecx>, unsigned int a3@<edi>)
{
  unsigned int v3; // edx
  int v4; // esi

  v3 = 0;
  if ( !a3 )
    return 0;
  v4 = a1 - (_DWORD)a2;
  while ( 1 )
  {
    if ( *a2 > (double)*(float *)((char *)a2 + v4) )
      return 0xFFFFFFFF;
    if ( *a2 < (double)*(float *)((char *)a2 + v4) )
      break;
    ++v3;
    ++a2;
    if ( v3 >= a3 )
      return 0;
  }
  return 1;
}
