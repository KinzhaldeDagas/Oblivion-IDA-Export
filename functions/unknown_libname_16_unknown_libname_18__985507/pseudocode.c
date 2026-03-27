int __usercall unknown_libname_16_::unknown_libname_18@<eax>(
        char a1@<dl>,
        unsigned int a2@<ecx>,
        void *a3@<edi>,
        const void *a4@<esi>)
{
  unsigned int v4; // ecx
  int v5; // edx

  if ( ((unsigned __int8)a3 & 3) != 0 )
    return unknown_libname_19();
  v4 = a2 >> 2;
  v5 = a1 & 3;
  if ( v4 < 8 )
    return unknown_libname_16_::unknown_libname_21();
  qmemcpy(a3, a4, 4 * v4);
  return funcs_9855A0[v5]();
}
