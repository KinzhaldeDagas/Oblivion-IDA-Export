unsigned int sub_A135C0()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9CBA0;
  HIBYTE(v1) = (unsigned int)&off_A9CBA0 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CBA0 >> 0x10;
  dword_B2FF48 = v1;
  return (unsigned int)&off_A9CBA0 >> 0x10;
}
