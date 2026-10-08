unsigned int sub_A12CC0()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9ACB0; /*0xa12ce2*/
  HIBYTE(v1) = (unsigned int)&off_A9ACB0 >> 0x18; /*0xa12cf0*/
  BYTE2(v1) = (unsigned int)&off_A9ACB0 >> 0x10; /*0xa12cf8*/
  dword_B2FD1C = v1; /*0xa12d00*/
  return (unsigned int)&off_A9ACB0 >> 0x10; /*0xa12cf4*/
}
