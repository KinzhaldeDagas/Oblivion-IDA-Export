unsigned int sub_A155C0()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_AA1990; /*0xa155e5*/
  HIBYTE(v1) = (unsigned int)&off_AA1990 >> 0x18; /*0xa155f3*/
  BYTE2(v1) = (unsigned int)&off_AA1990 >> 0x10; /*0xa155fe*/
  dword_B30534 = v1; /*0xa15606*/
  return (unsigned int)&off_AA1990 >> 0x10; /*0xa155f7*/
}
