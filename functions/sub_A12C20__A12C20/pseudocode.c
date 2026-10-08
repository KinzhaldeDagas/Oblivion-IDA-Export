unsigned int sub_A12C20()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9ABC4; /*0xa12c3f*/
  HIBYTE(v1) = (unsigned int)&off_A9ABC4 >> 0x18; /*0xa12c4d*/
  BYTE2(v1) = (unsigned int)&off_A9ABC4 >> 0x10; /*0xa12c55*/
  dword_B2FD04 = v1; /*0xa12c5d*/
  return (unsigned int)&off_A9ABC4 >> 0x10; /*0xa12c51*/
}
