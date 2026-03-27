unsigned int sub_A13AB0()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_A9D068;
  HIBYTE(v1) = (unsigned int)&off_A9D068 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9D068 >> 0x10;
  dword_B30038 = v1;
  return (unsigned int)&off_A9D068 >> 0x10;
}
