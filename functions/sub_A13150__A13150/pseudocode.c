unsigned int sub_A13150()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_A9B2A0; /*0xa1316f*/
  HIBYTE(v1) = (unsigned int)&off_A9B2A0 >> 0x18; /*0xa1317d*/
  BYTE2(v1) = (unsigned int)&off_A9B2A0 >> 0x10; /*0xa13185*/
  dword_B2FDD0 = v1; /*0xa1318d*/
  return (unsigned int)&off_A9B2A0 >> 0x10; /*0xa13181*/
}
