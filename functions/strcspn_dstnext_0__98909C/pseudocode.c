void *__usercall strcspn_::dstnext_0@<eax>(char *a1@<ecx>, char *a2@<esi>)
{
  char v2; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  do /*0x9890ac*/
  {
    ++a1; /*0x98909c*/
    v2 = *a2; /*0x98909f*/
    if ( !*a2 ) /*0x98909f*/
      break; /*0x9890a3*/
    ++a2; /*0x9890a5*/
  }
  while ( !_bittest((const signed __int32 *)&retaddr, v2) ); /*0x9890ac*/
  return strcspn_::dstdone_0(a1);
}
