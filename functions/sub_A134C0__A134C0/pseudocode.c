unsigned int sub_A134C0()
{
  int v1; // [esp+Ch] [ebp-144h]

  LOWORD(v1) = (unsigned __int16)&off_A9CAB8; /*0xa134e5*/
  HIBYTE(v1) = (unsigned int)&off_A9CAB8 >> 0x18; /*0xa134f3*/
  BYTE2(v1) = (unsigned int)&off_A9CAB8 >> 0x10; /*0xa134fe*/
  dword_B2FF24 = v1; /*0xa13506*/
  return (unsigned int)&off_A9CAB8 >> 0x10; /*0xa134f7*/
}
