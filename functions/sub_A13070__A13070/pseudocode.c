unsigned int sub_A13070()
{
  int v1; // [esp+Ch] [ebp-24h]

  LOWORD(v1) = (unsigned __int16)&off_A9B078; /*0xa1308f*/
  HIBYTE(v1) = (unsigned int)&off_A9B078 >> 0x18; /*0xa1309d*/
  BYTE2(v1) = (unsigned int)&off_A9B078 >> 0x10; /*0xa130a5*/
  dword_B2FDAC = v1; /*0xa130ad*/
  return (unsigned int)&off_A9B078 >> 0x10; /*0xa130a1*/
}
