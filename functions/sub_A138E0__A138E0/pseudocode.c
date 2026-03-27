unsigned int sub_A138E0()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9CDAC;
  HIBYTE(v1) = (unsigned int)&off_A9CDAC >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CDAC >> 0x10;
  dword_B2FFC0 = v1;
  return (unsigned int)&off_A9CDAC >> 0x10;
}
