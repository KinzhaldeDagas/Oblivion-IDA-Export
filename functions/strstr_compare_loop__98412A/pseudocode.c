int __usercall strstr_::compare_loop@<eax>(
        char a1@<dl>,
        _BYTE *a2@<edi>,
        int ecx0@<ecx>,
        char *esi0@<esi>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7)
{
  char v9; // ah
  char v10; // al
  char v11; // al

  while ( 1 )
  {
    v9 = *(_BYTE *)(ecx0 + 2);
    if ( !v9 )
      break;
    v10 = *esi0;
    esi0 += 2;
    if ( v10 != v9 )
      return strstr_::findnext(a1, a2, a3, a4, a5, a6, a7);
    v11 = *(_BYTE *)(ecx0 + 3);
    if ( !v11 )
      break;
    ecx0 += 2;
    if ( v11 != esi0[0xFFFFFFFF] )
      return strstr_::findnext(a1, a2, a3, a4, a5, a6, a7);
  }
  return strstr_::match();
}
