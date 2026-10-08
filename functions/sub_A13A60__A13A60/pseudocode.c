unsigned int sub_A13A60()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&off_A9CF48; /*0xa13a7f*/
  HIBYTE(v1) = (unsigned int)&off_A9CF48 >> 0x18; /*0xa13a8d*/
  BYTE2(v1) = (unsigned int)&off_A9CF48 >> 0x10; /*0xa13a95*/
  dword_B30000 = v1; /*0xa13a9d*/
  return (unsigned int)&off_A9CF48 >> 0x10; /*0xa13a91*/
}
