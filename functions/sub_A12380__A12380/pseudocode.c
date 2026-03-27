unsigned int sub_A12380()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A97984;
  HIBYTE(v1) = (unsigned int)&off_A97984 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A97984 >> 0x10;
  dword_B2EC4C = v1;
  return (unsigned int)&off_A97984 >> 0x10;
}
