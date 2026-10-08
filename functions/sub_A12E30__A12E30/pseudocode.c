unsigned int sub_A12E30()
{
  int v1; // [esp+Ch] [ebp-24h]

  LOWORD(v1) = (unsigned __int16)&off_A9AD5C; /*0xa12e4f*/
  HIBYTE(v1) = (unsigned int)&off_A9AD5C >> 0x18; /*0xa12e5d*/
  BYTE2(v1) = (unsigned int)&off_A9AD5C >> 0x10; /*0xa12e65*/
  dword_B2FD5C = v1; /*0xa12e6d*/
  return (unsigned int)&off_A9AD5C >> 0x10; /*0xa12e61*/
}
