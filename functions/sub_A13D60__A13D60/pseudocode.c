unsigned int sub_A13D60()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A9DFA0; /*0xa13d85*/
  HIBYTE(v1) = (unsigned int)&off_A9DFA0 >> 0x18; /*0xa13d93*/
  BYTE2(v1) = (unsigned int)&off_A9DFA0 >> 0x10; /*0xa13d9e*/
  dword_B30140 = v1; /*0xa13da6*/
  return (unsigned int)&off_A9DFA0 >> 0x10; /*0xa13d97*/
}
