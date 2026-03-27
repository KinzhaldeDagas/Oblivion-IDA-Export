unsigned int sub_A12B20()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_A9A274;
  HIBYTE(v1) = (unsigned int)&off_A9A274 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9A274 >> 0x10;
  dword_B2FC2C = v1;
  return (unsigned int)&off_A9A274 >> 0x10;
}
