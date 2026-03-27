unsigned int sub_A13520()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9CB30;
  HIBYTE(v1) = (unsigned int)&off_A9CB30 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CB30 >> 0x10;
  dword_B2FF30 = v1;
  return (unsigned int)&off_A9CB30 >> 0x10;
}
