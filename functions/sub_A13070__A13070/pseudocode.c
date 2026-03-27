unsigned int sub_A13070()
{
  int v1; // [esp+Ch] [ebp-24h]

  LOWORD(v1) = (unsigned __int16)&off_A9B078;
  HIBYTE(v1) = (unsigned int)&off_A9B078 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9B078 >> 0x10;
  dword_B2FDAC = v1;
  return (unsigned int)&off_A9B078 >> 0x10;
}
