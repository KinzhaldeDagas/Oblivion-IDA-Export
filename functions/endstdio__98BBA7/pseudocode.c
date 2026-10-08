void __endstdio()
{
  _flushall(); /*0x98bba7*/
  if ( byte_BA9DCC[0] ) /*0x98bbb3*/
    _fcloseall(); /*0x98bbb5*/
  free(unk_BAABE4); /*0x98bbc0*/
}
