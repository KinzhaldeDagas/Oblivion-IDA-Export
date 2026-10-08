unsigned int sub_A12B70()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_A9A2A0; /*0xa12b8f*/
  HIBYTE(v1) = (unsigned int)&off_A9A2A0 >> 0x18; /*0xa12b9d*/
  BYTE2(v1) = (unsigned int)&off_A9A2A0 >> 0x10; /*0xa12ba5*/
  dword_B2FC38 = v1; /*0xa12bad*/
  return (unsigned int)&off_A9A2A0 >> 0x10; /*0xa12ba1*/
}
