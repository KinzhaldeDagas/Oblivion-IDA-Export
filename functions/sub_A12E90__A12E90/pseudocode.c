unsigned int sub_A12E90()
{
  int v1; // [esp+Ch] [ebp-114h]

  LOWORD(v1) = (unsigned __int16)&off_A9AD90;
  HIBYTE(v1) = (unsigned int)&off_A9AD90 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9AD90 >> 0x10;
  dword_B2FD70 = v1;
  return (unsigned int)&off_A9AD90 >> 0x10;
}
