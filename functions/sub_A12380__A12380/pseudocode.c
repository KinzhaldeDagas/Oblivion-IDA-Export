unsigned int sub_A12380()
{
  int v1; // [esp+Ch] [ebp-B4h]

  LOWORD(v1) = (unsigned __int16)&off_A97984; /*0xa123a5*/
  HIBYTE(v1) = (unsigned int)&off_A97984 >> 0x18; /*0xa123b3*/
  BYTE2(v1) = (unsigned int)&off_A97984 >> 0x10; /*0xa123be*/
  dword_B2EC4C = v1; /*0xa123c6*/
  return (unsigned int)&off_A97984 >> 0x10; /*0xa123b7*/
}
