void __endstdio()
{
  _flushall();
  if ( byte_BA9DCC )
    _fcloseall();
  free(dword_BAABE4);
}
