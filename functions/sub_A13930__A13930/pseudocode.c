unsigned int sub_A13930()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_A9CDE8;
  HIBYTE(v1) = (unsigned int)&off_A9CDE8 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CDE8 >> 0x10;
  dword_B2FFCC = v1;
  return (unsigned int)&off_A9CDE8 >> 0x10;
}
