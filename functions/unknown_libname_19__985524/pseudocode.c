int __usercall unknown_libname_19@<eax>(unsigned int a1@<ecx>, char a2@<dil>)
{
  bool v2; // cf
  unsigned int v3; // ecx

  v2 = a1 < 4;
  v3 = a1 - 4;
  if ( v2 )
    return unknown_libname_19_::unknown_libname_20(v3, 3);
  else
    return (*(int (__fastcall **)(unsigned int, int))(4 * (a2 & 3) + 0x985548))((a2 & 3) + v3, 3);
}
