unsigned int sub_A13240()
{
  int v1; // [esp+Ch] [ebp-84h]

  LOWORD(v1) = (unsigned __int16)&off_A9C324;
  HIBYTE(v1) = (unsigned int)&off_A9C324 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9C324 >> 0x10;
  dword_B2FDF0 = v1;
  return (unsigned int)&off_A9C324 >> 0x10;
}
