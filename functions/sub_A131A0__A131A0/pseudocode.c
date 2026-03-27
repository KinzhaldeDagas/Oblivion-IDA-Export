unsigned int sub_A131A0()
{
  int v1; // [esp+Ch] [ebp-A4h]

  LOWORD(v1) = (unsigned __int16)&off_A9B328;
  HIBYTE(v1) = (unsigned int)&off_A9B328 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9B328 >> 0x10;
  dword_B2FDDC = v1;
  return (unsigned int)&off_A9B328 >> 0x10;
}
