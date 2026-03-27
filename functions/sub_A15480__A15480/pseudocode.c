unsigned int sub_A15480()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1938;
  HIBYTE(v1) = (unsigned int)&off_AA1938 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1938 >> 0x10;
  dword_B30504 = v1;
  return (unsigned int)&off_AA1938 >> 0x10;
}
