int __usercall strstr_::compare_loop@<eax>(
        __int16 a1@<dx>,
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

  while ( 1 ) /*0x98412a*/
  {
    v9 = *(_BYTE *)(ecx0 + 2); /*0x98412a*/
    if ( !v9 ) /*0x98412f*/
      break; /*0x98412f*/
    v10 = *esi0; /*0x984131*/
    esi0 += 2; /*0x984133*/
    if ( v10 != v9 ) /*0x984138*/
      return strstr_::findnext(a1, a2, a3, a4, a5, a6, a7); /*0x984138*/
    v11 = *(_BYTE *)(ecx0 + 3); /*0x98413a*/
    if ( !v11 ) /*0x98413f*/
      break; /*0x98413f*/
    ecx0 += 2; /*0x984144*/
    if ( v11 != esi0[0xFFFFFFFF] ) /*0x984149*/
      return strstr_::findnext(a1, a2, a3, a4, a5, a6, a7); /*0x98414b*/
  }
  return strstr_::match((int)a2);
}
