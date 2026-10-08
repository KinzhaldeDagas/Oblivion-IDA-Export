unsigned int sub_A152F0()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_AA1848; /*0xa1530f*/
  HIBYTE(v1) = (unsigned int)&off_AA1848 >> 0x18; /*0xa1531d*/
  BYTE2(v1) = (unsigned int)&off_AA1848 >> 0x10; /*0xa15325*/
  dword_B304D4 = v1; /*0xa1532d*/
  return (unsigned int)&off_AA1848 >> 0x10; /*0xa15321*/
}
