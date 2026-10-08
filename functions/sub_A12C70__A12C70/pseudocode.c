unsigned int sub_A12C70()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&off_A9AC24; /*0xa12c8f*/
  HIBYTE(v1) = (unsigned int)&off_A9AC24 >> 0x18; /*0xa12c9d*/
  BYTE2(v1) = (unsigned int)&off_A9AC24 >> 0x10; /*0xa12ca5*/
  dword_B2FD10 = v1; /*0xa12cad*/
  return (unsigned int)&off_A9AC24 >> 0x10; /*0xa12ca1*/
}
