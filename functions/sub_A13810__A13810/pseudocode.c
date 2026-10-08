unsigned int sub_A13810()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A9CCFC; /*0xa13835*/
  HIBYTE(v1) = (unsigned int)&off_A9CCFC >> 0x18; /*0xa13843*/
  BYTE2(v1) = (unsigned int)&off_A9CCFC >> 0x10; /*0xa1384e*/
  dword_B2FF90 = v1; /*0xa13856*/
  return (unsigned int)&off_A9CCFC >> 0x10; /*0xa13847*/
}
