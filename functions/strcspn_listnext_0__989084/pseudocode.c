int __usercall strcspn_::listnext_0@<eax>(char *a2@<edx>, int ebp0@<ebp>)
{
  char v3; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  while ( 1 ) /*0x989084*/
  {
    v3 = *a2; /*0x989084*/
    if ( !*a2 ) /*0x989084*/
      break; /*0x989084*/
    ++a2; /*0x98908a*/
    _bittestandset((signed __int32 *)&retaddr, v3); /*0x98908d*/
  }
  return strcspn_::listdone_0(ebp0);
}
