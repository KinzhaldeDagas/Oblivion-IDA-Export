unsigned int sub_A15620()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_AA19B8; /*0xa1563f*/
  HIBYTE(v1) = (unsigned int)&off_AA19B8 >> 0x18; /*0xa1564d*/
  BYTE2(v1) = (unsigned int)&off_AA19B8 >> 0x10; /*0xa15655*/
  dword_B30540 = v1; /*0xa1565d*/
  return (unsigned int)&off_AA19B8 >> 0x10; /*0xa15651*/
}
