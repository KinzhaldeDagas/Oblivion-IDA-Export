unsigned int sub_A13D60()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A9DFA0;
  HIBYTE(v1) = (unsigned int)&off_A9DFA0 >> 0x18;
  BYTE2(v1) = (unsigned int)&off_A9DFA0 >> 0x10;
  dword_B30140 = v1;
  return (unsigned int)&off_A9DFA0 >> 0x10;
}
