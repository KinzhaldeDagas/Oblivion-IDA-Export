int __initmbctable()
{
  if ( !unk_BABC14 ) /*0x98fc8f*/
  {
    _setmbcp(0xFFFFFFFD); /*0x98fc93*/
    unk_BABC14 = 1; /*0x98fc99*/
  }
  return 0; /*0x98fca5*/
}
