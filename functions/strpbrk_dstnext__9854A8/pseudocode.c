void __usercall strpbrk_::dstnext(char *a1@<esi>)
{
  char v1; // al
  _UNKNOWN *retaddr; // [esp+0h] [ebp+0h] BYREF

  do /*0x9854b5*/
  {
    v1 = *a1; /*0x9854a8*/
    if ( !*a1 ) /*0x9854a8*/
      break; /*0x9854ac*/
    ++a1; /*0x9854ae*/
  }
  while ( !_bittest((const signed __int32 *)&retaddr, v1) ); /*0x9854b5*/
  strpbrk_::dstdone(); /*0x9854ac*/
}
