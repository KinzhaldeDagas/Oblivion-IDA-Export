unsigned int sub_A12DD0()
{
  int v1; // [esp+Ch] [ebp-104h]

  LOWORD(v1) = (unsigned __int16)&off_A97A20; /*0xa12df5*/
  HIBYTE(v1) = (unsigned int)&off_A97A20 >> 0x18; /*0xa12e03*/
  BYTE2(v1) = (unsigned int)&off_A97A20 >> 0x10; /*0xa12e0e*/
  dword_B2FD50 = v1; /*0xa12e16*/
  return (unsigned int)&off_A97A20 >> 0x10; /*0xa12e07*/
}
