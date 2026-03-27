unsigned int sub_A15570()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_AA1968;
  HIBYTE(v1) = (unsigned int)&off_AA1968 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_AA1968 >> 0x10;
  dword_B30528 = v1;
  return (unsigned int)&off_AA1968 >> 0x10;
}
