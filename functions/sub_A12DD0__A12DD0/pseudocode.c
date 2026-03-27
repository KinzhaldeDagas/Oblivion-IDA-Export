unsigned int sub_A12DD0()
{
  int v1; // [esp+Ch] [ebp-104h]

  LOWORD(v1) = (unsigned __int16)&off_A97A20;
  HIBYTE(v1) = (unsigned int)&off_A97A20 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A97A20 >> 0x10;
  dword_B2FD50 = v1;
  return (unsigned int)&off_A97A20 >> 0x10;
}
