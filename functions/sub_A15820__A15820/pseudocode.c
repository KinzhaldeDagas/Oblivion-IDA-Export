unsigned int sub_A15820()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_AA1BDC; /*0xa1583f*/
  HIBYTE(v1) = (unsigned int)&off_AA1BDC >> 0x18; /*0xa1584d*/
  BYTE2(v1) = (unsigned int)&off_AA1BDC >> 0x10; /*0xa15855*/
  dword_B3057C = v1; /*0xa1585d*/
  return (unsigned int)&off_AA1BDC >> 0x10; /*0xa15851*/
}
