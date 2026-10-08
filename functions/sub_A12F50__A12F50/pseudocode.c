unsigned int sub_A12F50()
{
  int v1; // [esp+Ch] [ebp-114h]

  LOWORD(v1) = (unsigned __int16)&off_A9AEC0; /*0xa12f75*/
  HIBYTE(v1) = (unsigned int)&off_A9AEC0 >> 0x18; /*0xa12f83*/
  BYTE2(v1) = (unsigned int)&off_A9AEC0 >> 0x10; /*0xa12f8e*/
  dword_B2FD88 = v1; /*0xa12f96*/
  return (unsigned int)&off_A9AEC0 >> 0x10; /*0xa12f87*/
}
