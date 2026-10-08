unsigned int sub_A12BC0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A96B78; /*0xa12bdf*/
  HIBYTE(v1) = (unsigned int)&off_A96B78 >> 0x18; /*0xa12bed*/
  BYTE2(v1) = (unsigned int)&off_A96B78 >> 0x10; /*0xa12bf5*/
  dword_B2FC44 = v1; /*0xa12bfd*/
  return (unsigned int)&off_A96B78 >> 0x10; /*0xa12bf1*/
}
