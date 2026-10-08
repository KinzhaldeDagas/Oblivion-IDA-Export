int __usercall unknown_libname_38_::unknown_libname_50@<eax>(
        int a1@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        int a4@<edx>,
        int a5@<ebp>)
{
  *(_DWORD *)(a2 + 4 * a1 + 4) = *(_DWORD *)(a3 + 4 * a1 + 4); /*0x9857b8*/
  return unknown_libname_38_::unknown_libname_51(a4, a5, (_BYTE *)(4 * a1 + a2), (_BYTE *)(4 * a1 + a3));
}
