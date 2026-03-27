unsigned int sub_A155C0()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_AA1990;
  HIBYTE(v1) = (unsigned int)&off_AA1990 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1990 >> 0x10;
  dword_B30534 = v1;
  return (unsigned int)&off_AA1990 >> 0x10;
}
