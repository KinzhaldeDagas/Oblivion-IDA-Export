int __usercall unknown_libname_19@<eax>(unsigned int a1@<ecx>, char a2@<dil>)
{
  bool v2; // cf
  int v3; // ecx

  v2 = a1 < 4; /*0x98552b*/
  v3 = a1 - 4; /*0x98552b*/
  if ( v2 ) /*0x98552e*/
    return unknown_libname_19_::unknown_libname_20(v3, 3); /*0x98552e*/
  else
    return (*(int (__fastcall **)(int, int))(4 * (a2 & 3) + 0x985548))((a2 & 3) + v3, 3); /*0x985535*/
}
