unsigned int sub_A12FB0()
{
  int v1; // [esp+Ch] [ebp-114h]

  LOWORD(v1) = (unsigned __int16)&off_A9AF38;
  HIBYTE(v1) = (unsigned int)&off_A9AF38 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9AF38 >> 0x10;
  dword_B2FD94 = v1;
  return (unsigned int)&off_A9AF38 >> 0x10;
}
