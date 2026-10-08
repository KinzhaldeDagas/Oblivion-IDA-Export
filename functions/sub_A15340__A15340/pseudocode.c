unsigned int sub_A15340()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_AA1858; /*0xa1535f*/
  HIBYTE(v1) = (unsigned int)&off_AA1858 >> 0x18; /*0xa1536d*/
  BYTE2(v1) = (unsigned int)&off_AA1858 >> 0x10; /*0xa15375*/
  dword_B304E0 = v1; /*0xa1537d*/
  return (unsigned int)&off_AA1858 >> 0x10; /*0xa15371*/
}
