unsigned int sub_A13520()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9CB30; /*0xa13542*/
  HIBYTE(v1) = (unsigned int)&off_A9CB30 >> 0x18; /*0xa13550*/
  BYTE2(v1) = (unsigned int)&off_A9CB30 >> 0x10; /*0xa13558*/
  dword_B2FF30 = v1; /*0xa13560*/
  return (unsigned int)&off_A9CB30 >> 0x10; /*0xa13554*/
}
