unsigned int sub_A139A0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9CE84;
  HIBYTE(v1) = (unsigned int)&off_A9CE84 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CE84 >> 0x10;
  dword_B2FFE0 = v1;
  return (unsigned int)&off_A9CE84 >> 0x10;
}
