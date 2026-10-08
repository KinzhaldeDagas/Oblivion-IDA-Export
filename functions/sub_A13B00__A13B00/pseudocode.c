unsigned int sub_A13B00()
{
  int v1; // [esp+Ch] [ebp-74h]

  LOWORD(v1) = (unsigned __int16)&off_A9D0E8; /*0xa13b22*/
  HIBYTE(v1) = (unsigned int)&off_A9D0E8 >> 0x18; /*0xa13b30*/
  BYTE2(v1) = (unsigned int)&off_A9D0E8 >> 0x10; /*0xa13b38*/
  dword_B30048 = v1; /*0xa13b40*/
  return (unsigned int)&off_A9D0E8 >> 0x10; /*0xa13b34*/
}
