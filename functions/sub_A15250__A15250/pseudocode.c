unsigned int sub_A15250()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1828; /*0xa1526f*/
  HIBYTE(v1) = (unsigned int)&off_AA1828 >> 0x18; /*0xa1527d*/
  BYTE2(v1) = (unsigned int)&off_AA1828 >> 0x10; /*0xa15285*/
  dword_B304BC = v1; /*0xa1528d*/
  return (unsigned int)&off_AA1828 >> 0x10; /*0xa15281*/
}
