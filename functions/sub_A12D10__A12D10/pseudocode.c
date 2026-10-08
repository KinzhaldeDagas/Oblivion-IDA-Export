unsigned int sub_A12D10()
{
  int v1; // [esp+Ch] [ebp-84h]

  LOWORD(v1) = (unsigned __int16)&off_A9ACF4; /*0xa12d35*/
  HIBYTE(v1) = (unsigned int)&off_A9ACF4 >> 0x18; /*0xa12d43*/
  BYTE2(v1) = (unsigned int)&off_A9ACF4 >> 0x10; /*0xa12d4e*/
  dword_B2FD38 = v1; /*0xa12d56*/
  return (unsigned int)&off_A9ACF4 >> 0x10; /*0xa12d47*/
}
