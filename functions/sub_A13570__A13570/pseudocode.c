unsigned int sub_A13570()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_A9CB64; /*0xa1358f*/
  HIBYTE(v1) = (unsigned int)&off_A9CB64 >> 0x18; /*0xa1359d*/
  BYTE2(v1) = (unsigned int)&off_A9CB64 >> 0x10; /*0xa135a5*/
  dword_B2FF3C = v1; /*0xa135ad*/
  return (unsigned int)&off_A9CB64 >> 0x10; /*0xa135a1*/
}
