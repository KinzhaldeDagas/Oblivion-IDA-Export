unsigned int sub_A13470()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9CAA8; /*0xa1348f*/
  HIBYTE(v1) = (unsigned int)&off_A9CAA8 >> 0x18; /*0xa1349d*/
  BYTE2(v1) = (unsigned int)&off_A9CAA8 >> 0x10; /*0xa134a5*/
  dword_B2FF18 = v1; /*0xa134ad*/
  return (unsigned int)&off_A9CAA8 >> 0x10; /*0xa134a1*/
}
