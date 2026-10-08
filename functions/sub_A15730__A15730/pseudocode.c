unsigned int sub_A15730()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_AA1AE8; /*0xa15755*/
  HIBYTE(v1) = (unsigned int)&off_AA1AE8 >> 0x18; /*0xa15763*/
  BYTE2(v1) = (unsigned int)&off_AA1AE8 >> 0x10; /*0xa1576e*/
  dword_B30564 = v1; /*0xa15776*/
  return (unsigned int)&off_AA1AE8 >> 0x10; /*0xa15767*/
}
