unsigned int sub_A12E30()
{
  int v1; // [esp+Ch] [ebp-24h]

  LOWORD(v1) = (unsigned __int16)&off_A9AD5C;
  HIBYTE(v1) = (unsigned int)&off_A9AD5C >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9AD5C >> 0x10;
  dword_B2FD5C = v1;
  return (unsigned int)&off_A9AD5C >> 0x10;
}
