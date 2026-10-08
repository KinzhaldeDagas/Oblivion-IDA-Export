unsigned int sub_A12A30()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A99BF0; /*0xa12a55*/
  HIBYTE(v1) = (unsigned int)&off_A99BF0 >> 0x18; /*0xa12a63*/
  BYTE2(v1) = (unsigned int)&off_A99BF0 >> 0x10; /*0xa12a6e*/
  dword_B2FA88 = v1; /*0xa12a76*/
  return (unsigned int)&off_A99BF0 >> 0x10; /*0xa12a67*/
}
