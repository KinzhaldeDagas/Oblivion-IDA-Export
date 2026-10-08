int __cdecl SetHavokPaused(char a1)
{
  int result; // eax

  if ( MEMORY[0xBA790A] != a1 ) /*0x889a3a*/
  {
    unk_BA7924 = 0; /*0x889a3e*/
    unk_BA7928 = 0; /*0x889a43*/
    unk_BA792C = 0; /*0x889a48*/
    unk_BA7930 = 0; /*0x889a4d*/
    unk_BA7934 = 0; /*0x889a52*/
    MEMORY[0xBA790A] = a1; /*0x889a57*/
    return 0; /*0x889a3c*/
  }
  return result; /*0x889a5d*/
}
