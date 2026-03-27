unsigned int sub_A15670()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_AA1A18;
  HIBYTE(v1) = (unsigned int)&off_AA1A18 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1A18 >> 0x10;
  dword_B3054C = v1;
  return (unsigned int)&off_AA1A18 >> 0x10;
}
