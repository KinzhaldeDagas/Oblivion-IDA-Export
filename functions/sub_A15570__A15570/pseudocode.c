unsigned int sub_A15570()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_AA1968; /*0xa1558f*/
  HIBYTE(v1) = (unsigned int)&off_AA1968 >> 0x18; /*0xa1559d*/
  BYTE2(v1) = (unsigned int)&off_AA1968 >> 0x10; /*0xa155a5*/
  dword_B30528 = v1; /*0xa155ad*/
  return (unsigned int)&off_AA1968 >> 0x10; /*0xa155a1*/
}
