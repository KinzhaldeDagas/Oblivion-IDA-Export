unsigned int sub_A13890()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_A9CD6C;
  HIBYTE(v1) = (unsigned int)&off_A9CD6C >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9CD6C >> 0x10;
  dword_B2FFB4 = v1;
  return (unsigned int)&off_A9CD6C >> 0x10;
}
