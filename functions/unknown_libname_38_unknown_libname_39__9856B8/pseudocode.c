int __usercall unknown_libname_38_::unknown_libname_39@<eax>(unsigned int a1@<ecx>, char a2@<dil>)
{
  if ( a1 < 4 )
    return unknown_libname_38_::unknown_libname_40();
  else
    return (*(int (__fastcall **)(unsigned int, int))(4 * (a2 & 3) + 0x9856D4))(a1 - (a2 & 3), 3);
}
