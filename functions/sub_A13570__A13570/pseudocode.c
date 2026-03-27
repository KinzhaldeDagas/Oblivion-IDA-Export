unsigned int sub_A13570()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_A9CB64;
  HIBYTE(v1) = (unsigned int)&off_A9CB64 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CB64 >> 0x10;
  dword_B2FF3C = v1;
  return (unsigned int)&off_A9CB64 >> 0x10;
}
