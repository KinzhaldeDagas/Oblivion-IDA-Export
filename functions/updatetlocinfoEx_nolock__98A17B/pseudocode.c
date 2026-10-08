volatile LONG *__usercall _updatetlocinfoEx_nolock@<eax>(volatile LONG **a1@<eax>, volatile LONG *a2@<edi>)
{
  volatile LONG *v2; // esi

  if ( !a2 || !a1 ) /*0x98a181*/
    return 0; /*0x98a1b6*/
  v2 = *a1; /*0x98a184*/
  if ( *a1 != a2 ) /*0x98a188*/
  {
    *a1 = a2; /*0x98a18b*/
    __addlocaleref(a2); /*0x98a18d*/
    if ( v2 ) /*0x98a195*/
    {
      __removelocaleref(v2); /*0x98a198*/
      if ( !*v2 && v2 != (volatile LONG *)&unk_B318C0 ) /*0x98a1a9*/
        __freetlocinfo((char *)v2); /*0x98a1ac*/
    }
  }
  return a2; /*0x98a1b5*/
}
