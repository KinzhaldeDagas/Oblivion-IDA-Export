int __usercall __check_float_string@<eax>(void **a1@<edi>, unsigned int *a2@<esi>, int a3, void *Src, _DWORD *a5)
{
  int v5; // eax
  int v6; // eax
  void *v8; // eax

  v5 = *a2; /*0x995ca4*/
  if ( a3 == *a2 ) /*0x995caa*/
  {
    if ( *a1 == Src ) /*0x995cb5*/
    {
      v6 = unknown_libname_74(v5, 2); /*0x995cb7*/
      *a1 = (void *)v6; /*0x995cc0*/
      if ( !v6 ) /*0x995cc2*/
        return 0; /*0x995cc6*/
      *a5 = 1; /*0x995ccb*/
      memcpy(*a1, Src, *a2); /*0x995cd9*/
    }
    else
    {
      v8 = unknown_libname_78(*a1, (unsigned int)v5 | 0x200000000LL); /*0x995ce4*/
      if ( !v8 ) /*0x995cee*/
        return 0; /*0x995cee*/
      *a1 = v8; /*0x995cf0*/
    }
    *a2 *= 2; /*0x995cf2*/
  }
  return 1; /*0x995cc6*/
}
