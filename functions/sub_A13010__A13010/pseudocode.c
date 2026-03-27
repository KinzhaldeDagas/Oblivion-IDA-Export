unsigned int sub_A13010()
{
  int v1; // [esp+Ch] [ebp-144h]

  LOWORD(v1) = (unsigned __int16)&off_A9AFFC;
  HIBYTE(v1) = (unsigned int)&off_A9AFFC >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9AFFC >> 0x10;
  dword_B2FDA0 = v1;
  return (unsigned int)&off_A9AFFC >> 0x10;
}
