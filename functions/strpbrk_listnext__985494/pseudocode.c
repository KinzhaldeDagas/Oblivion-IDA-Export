int __usercall strpbrk_::listnext@<eax>(char *a2@<edx>, int ebp0@<ebp>)
{
  char v3; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  while ( 1 ) /*0x985494*/
  {
    v3 = *a2; /*0x985494*/
    if ( !*a2 ) /*0x985494*/
      break; /*0x985494*/
    ++a2; /*0x98549a*/
    _bittestandset((signed __int32 *)&retaddr, v3); /*0x98549d*/
  }
  return strpbrk_::listdone(ebp0);
}
