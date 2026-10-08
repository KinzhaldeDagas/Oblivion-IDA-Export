unsigned int sub_A139F0()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&hkTriangleShape::`vftable'; /*0xa13a0f*/
  HIBYTE(v1) = (unsigned int)&hkTriangleShape::`vftable' >> 0x18; /*0xa13a1d*/
  BYTE2(v1) = (unsigned int)&hkTriangleShape::`vftable' >> 0x10; /*0xa13a25*/
  dword_B2FFF0 = v1; /*0xa13a2d*/
  return (unsigned int)&hkTriangleShape::`vftable' >> 0x10; /*0xa13a21*/
}
