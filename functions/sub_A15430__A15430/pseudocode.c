unsigned int sub_A15430()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1930;
  HIBYTE(v1) = (unsigned int)&off_AA1930 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1930 >> 0x10;
  dword_B304F8 = v1;
  return (unsigned int)&off_AA1930 >> 0x10;
}
