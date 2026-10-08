int __usercall unknown_libname_16_::unknown_libname_18@<eax>(
        char a1@<dl>,
        unsigned int a2@<ecx>,
        void *a3@<edi>,
        const void *a4@<esi>,
        int a5@<ebp>)
{
  unsigned int v5; // ecx
  int v6; // edx

  if ( ((unsigned __int8)a3 & 3) != 0 ) /*0x98550d*/
    return unknown_libname_19(a2, (char)a3); /*0x98550d*/
  v5 = a2 >> 2; /*0x98550f*/
  v6 = a1 & 3; /*0x985512*/
  if ( v5 < 8 ) /*0x985518*/
    return unknown_libname_16_::unknown_libname_21(v6, v5, (unsigned __int8)a3, (int)a4); /*0x985518*/
  qmemcpy(a3, a4, 4 * v5); /*0x98551a*/
  return ((int (__usercall *)@<eax>(int@<ebp>))funcs_9855A0[v6])(a5);
}
