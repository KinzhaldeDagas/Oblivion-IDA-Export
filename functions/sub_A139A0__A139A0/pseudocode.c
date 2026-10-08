unsigned int sub_A139A0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9CE84; /*0xa139bf*/
  HIBYTE(v1) = (unsigned int)&off_A9CE84 >> 0x18; /*0xa139cd*/
  BYTE2(v1) = (unsigned int)&off_A9CE84 >> 0x10; /*0xa139d5*/
  dword_B2FFE0 = v1; /*0xa139dd*/
  return (unsigned int)&off_A9CE84 >> 0x10; /*0xa139d1*/
}
