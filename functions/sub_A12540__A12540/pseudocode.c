unsigned int sub_A12540()
{
  int v1; // [esp+Ch] [ebp-A4h]

  LOWORD(v1) = (unsigned __int16)&off_A97E68;
  HIBYTE(v1) = (unsigned int)&off_A97E68 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A97E68 >> 0x10;
  dword_B2F0DC = v1;
  return (unsigned int)&off_A97E68 >> 0x10;
}
