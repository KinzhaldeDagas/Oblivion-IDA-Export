unsigned int sub_A156C0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1A50;
  HIBYTE(v1) = (unsigned int)&off_AA1A50 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1A50 >> 0x10;
  dword_B30558 = v1;
  return (unsigned int)&off_AA1A50 >> 0x10;
}
