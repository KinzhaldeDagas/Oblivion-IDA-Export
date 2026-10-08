unsigned int sub_A12EF0()
{
  int v1; // [esp+Ch] [ebp-114h]

  LOWORD(v1) = (unsigned __int16)&off_A9AE10; /*0xa12f15*/
  HIBYTE(v1) = (unsigned int)&off_A9AE10 >> 0x18; /*0xa12f23*/
  BYTE2(v1) = (unsigned int)&off_A9AE10 >> 0x10; /*0xa12f2e*/
  dword_B2FD7C = v1; /*0xa12f36*/
  return (unsigned int)&off_A9AE10 >> 0x10; /*0xa12f27*/
}
