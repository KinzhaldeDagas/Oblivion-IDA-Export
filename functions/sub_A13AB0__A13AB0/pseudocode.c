unsigned int sub_A13AB0()
{
  int v1; // [esp+Ch] [ebp-64h]

  LOWORD(v1) = (unsigned __int16)&off_A9D068; /*0xa13acf*/
  HIBYTE(v1) = (unsigned int)&off_A9D068 >> 0x18; /*0xa13add*/
  BYTE2(v1) = (unsigned int)&off_A9D068 >> 0x10; /*0xa13ae5*/
  dword_B30038 = v1; /*0xa13aed*/
  return (unsigned int)&off_A9D068 >> 0x10; /*0xa13ae1*/
}
