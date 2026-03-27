unsigned int sub_A12BC0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A96B78;
  HIBYTE(v1) = (unsigned int)&off_A96B78 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A96B78 >> 0x10;
  dword_B2FC44 = v1;
  return (unsigned int)&off_A96B78 >> 0x10;
}
