unsigned int sub_A130C0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9B148;
  HIBYTE(v1) = (unsigned int)&off_A9B148 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9B148 >> 0x10;
  dword_B2FDB8 = v1;
  return (unsigned int)&off_A9B148 >> 0x10;
}
