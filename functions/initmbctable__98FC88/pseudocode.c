int __initmbctable()
{
  if ( !dword_BABC14 )
  {
    _setmbcp(0xFFFFFFFD);
    dword_BABC14 = 1;
  }
  return 0;
}
