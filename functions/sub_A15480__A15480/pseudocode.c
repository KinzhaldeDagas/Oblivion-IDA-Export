unsigned int sub_A15480()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1938; /*0xa1549f*/
  HIBYTE(v1) = (unsigned int)&off_AA1938 >> 0x18; /*0xa154ad*/
  BYTE2(v1) = (unsigned int)&off_AA1938 >> 0x10; /*0xa154b5*/
  dword_B30504 = v1; /*0xa154bd*/
  return (unsigned int)&off_AA1938 >> 0x10; /*0xa154b1*/
}
