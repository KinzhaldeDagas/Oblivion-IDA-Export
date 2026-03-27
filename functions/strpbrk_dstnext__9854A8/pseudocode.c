int __usercall strpbrk_::dstnext@<eax>(char *a1@<esi>)
{
  char v1; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  do
  {
    v1 = *a1;
    if ( !*a1 )
      break;
    ++a1;
  }
  while ( !_bittest((const signed __int32 *)&retaddr, v1) );
  return strpbrk_::dstdone();
}
