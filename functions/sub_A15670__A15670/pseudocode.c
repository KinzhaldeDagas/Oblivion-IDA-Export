unsigned int sub_A15670()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_AA1A18; /*0xa1568f*/
  HIBYTE(v1) = (unsigned int)&off_AA1A18 >> 0x18; /*0xa1569d*/
  BYTE2(v1) = (unsigned int)&off_AA1A18 >> 0x10; /*0xa156a5*/
  dword_B3054C = v1; /*0xa156ad*/
  return (unsigned int)&off_AA1A18 >> 0x10; /*0xa156a1*/
}
