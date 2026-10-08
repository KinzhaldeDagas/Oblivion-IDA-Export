unsigned int sub_A130C0()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9B148; /*0xa130df*/
  HIBYTE(v1) = (unsigned int)&off_A9B148 >> 0x18; /*0xa130ed*/
  BYTE2(v1) = (unsigned int)&off_A9B148 >> 0x10; /*0xa130f5*/
  dword_B2FDB8 = v1; /*0xa130fd*/
  return (unsigned int)&off_A9B148 >> 0x10; /*0xa130f1*/
}
