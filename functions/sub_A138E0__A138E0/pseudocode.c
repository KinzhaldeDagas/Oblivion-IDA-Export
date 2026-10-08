unsigned int sub_A138E0()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9CDAC; /*0xa13902*/
  HIBYTE(v1) = (unsigned int)&off_A9CDAC >> 0x18; /*0xa13910*/
  BYTE2(v1) = (unsigned int)&off_A9CDAC >> 0x10; /*0xa13918*/
  dword_B2FFC0 = v1; /*0xa13920*/
  return (unsigned int)&off_A9CDAC >> 0x10; /*0xa13914*/
}
