unsigned int sub_A152F0()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_AA1848;
  HIBYTE(v1) = (unsigned int)&off_AA1848 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1848 >> 0x10;
  dword_B304D4 = v1;
  return (unsigned int)&off_AA1848 >> 0x10;
}
