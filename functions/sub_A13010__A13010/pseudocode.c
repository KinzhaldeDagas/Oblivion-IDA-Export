unsigned int sub_A13010()
{
  int v1; // [esp+Ch] [ebp-144h]

  LOWORD(v1) = (unsigned __int16)&off_A9AFFC; /*0xa13035*/
  HIBYTE(v1) = (unsigned int)&off_A9AFFC >> 0x18; /*0xa13043*/
  BYTE2(v1) = (unsigned int)&off_A9AFFC >> 0x10; /*0xa1304e*/
  dword_B2FDA0 = v1; /*0xa13056*/
  return (unsigned int)&off_A9AFFC >> 0x10; /*0xa13047*/
}
