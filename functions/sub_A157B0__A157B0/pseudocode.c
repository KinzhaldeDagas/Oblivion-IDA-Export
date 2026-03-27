unsigned int sub_A157B0()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_AA1B38;
  HIBYTE(v1) = (unsigned int)&off_AA1B38 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1B38 >> 0x10;
  dword_B30570 = v1;
  return (unsigned int)&off_AA1B38 >> 0x10;
}
