unsigned int sub_A157B0()
{
  int v1; // [esp+Ch] [ebp-44h]

  LOWORD(v1) = (unsigned __int16)&off_AA1B38; /*0xa157cf*/
  HIBYTE(v1) = (unsigned int)&off_AA1B38 >> 0x18; /*0xa157dd*/
  BYTE2(v1) = (unsigned int)&off_AA1B38 >> 0x10; /*0xa157e5*/
  dword_B30570 = v1; /*0xa157ed*/
  return (unsigned int)&off_AA1B38 >> 0x10; /*0xa157e1*/
}
