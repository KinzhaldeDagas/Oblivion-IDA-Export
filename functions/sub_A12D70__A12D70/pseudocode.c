unsigned int sub_A12D70()
{
  int v1; // [esp+Ch] [ebp-104h]

  LOWORD(v1) = (unsigned __int16)&off_A979A8; /*0xa12d95*/
  HIBYTE(v1) = (unsigned int)&off_A979A8 >> 0x18; /*0xa12da3*/
  BYTE2(v1) = (unsigned int)&off_A979A8 >> 0x10; /*0xa12dae*/
  dword_B2FD44 = v1; /*0xa12db6*/
  return (unsigned int)&off_A979A8 >> 0x10; /*0xa12da7*/
}
