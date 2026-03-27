unsigned int sub_A15620()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_AA19B8;
  HIBYTE(v1) = (unsigned int)&off_AA19B8 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA19B8 >> 0x10;
  dword_B30540 = v1;
  return (unsigned int)&off_AA19B8 >> 0x10;
}
