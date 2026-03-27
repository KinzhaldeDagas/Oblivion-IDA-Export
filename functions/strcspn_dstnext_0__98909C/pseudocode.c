int __usercall strcspn_::dstnext_0@<eax>(int a1@<ecx>, char *a2@<esi>)
{
  char v2; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  do
  {
    ++a1;
    v2 = *a2;
    if ( !*a2 )
      break;
    ++a2;
  }
  while ( !_bittest((const signed __int32 *)&retaddr, v2) );
  return strcspn_::dstdone_0(a1);
}
