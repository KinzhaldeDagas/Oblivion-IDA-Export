unsigned int sub_A156C0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_AA1A50; /*0xa156df*/
  HIBYTE(v1) = (unsigned int)&off_AA1A50 >> 0x18; /*0xa156ed*/
  BYTE2(v1) = (unsigned int)&off_AA1A50 >> 0x10; /*0xa156f5*/
  dword_B30558 = v1; /*0xa156fd*/
  return (unsigned int)&off_AA1A50 >> 0x10; /*0xa156f1*/
}
