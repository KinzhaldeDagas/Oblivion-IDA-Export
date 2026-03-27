unsigned int sub_A134C0()
{
  int v1; // [esp+Ch] [ebp-144h]

  LOWORD(v1) = (unsigned __int16)&off_A9CAB8;
  HIBYTE(v1) = (unsigned int)&off_A9CAB8 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CAB8 >> 0x10;
  dword_B2FF24 = v1;
  return (unsigned int)&off_A9CAB8 >> 0x10;
}
