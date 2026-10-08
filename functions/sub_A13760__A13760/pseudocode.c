unsigned int sub_A13760()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_A9CC6C; /*0xa1377f*/
  HIBYTE(v1) = (unsigned int)&off_A9CC6C >> 0x18; /*0xa1378d*/
  BYTE2(v1) = (unsigned int)&off_A9CC6C >> 0x10; /*0xa13795*/
  dword_B2FF84 = v1; /*0xa1379d*/
  return (unsigned int)&off_A9CC6C >> 0x10; /*0xa13791*/
}
