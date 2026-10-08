unsigned int sub_A13700()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A9CC30; /*0xa13725*/
  HIBYTE(v1) = (unsigned int)&off_A9CC30 >> 0x18; /*0xa13733*/
  BYTE2(v1) = (unsigned int)&off_A9CC30 >> 0x10; /*0xa1373e*/
  dword_B2FF78 = v1; /*0xa13746*/
  return (unsigned int)&off_A9CC30 >> 0x10; /*0xa13737*/
}
