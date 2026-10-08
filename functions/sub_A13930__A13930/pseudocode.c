unsigned int sub_A13930()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_A9CDE8; /*0xa1394f*/
  HIBYTE(v1) = (unsigned int)&off_A9CDE8 >> 0x18; /*0xa1395d*/
  BYTE2(v1) = (unsigned int)&off_A9CDE8 >> 0x10; /*0xa13965*/
  dword_B2FFCC = v1; /*0xa1396d*/
  return (unsigned int)&off_A9CDE8 >> 0x10; /*0xa13961*/
}
