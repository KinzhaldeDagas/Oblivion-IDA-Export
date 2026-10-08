unsigned int sub_A15430()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1930; /*0xa1544f*/
  HIBYTE(v1) = (unsigned int)&off_AA1930 >> 0x18; /*0xa1545d*/
  BYTE2(v1) = (unsigned int)&off_AA1930 >> 0x10; /*0xa15465*/
  dword_B304F8 = v1; /*0xa1546d*/
  return (unsigned int)&off_AA1930 >> 0x10; /*0xa15461*/
}
