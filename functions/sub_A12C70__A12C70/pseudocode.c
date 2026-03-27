unsigned int sub_A12C70()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9AC24;
  HIBYTE(v1) = (unsigned int)&off_A9AC24 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9AC24 >> 0x10;
  dword_B2FD10 = v1;
  return (unsigned int)&off_A9AC24 >> 0x10;
}
