int __usercall unknown_libname_38_::unknown_libname_39@<eax>(
        unsigned int a1@<ecx>,
        _BYTE *a2@<edi>,
        int a3@<ebp>,
        _BYTE *a4@<esi>)
{
  if ( a1 < 4 ) /*0x9856c2*/
    return unknown_libname_38_::unknown_libname_40(a1, a3, a2, a4); /*0x9856c2*/
  else
    return (*(int (__fastcall **)(unsigned int, int))(4 * ((unsigned __int8)a2 & 3) + 0x9856D4))( /*0x9856c9*/
             a1 - ((unsigned __int8)a2 & 3),
             3);
}
