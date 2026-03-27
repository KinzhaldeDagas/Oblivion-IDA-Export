unsigned int sub_A139F0()
{
  int v1; // [esp+Ch] [ebp-54h]

  LOWORD(v1) = (unsigned __int16)&hkTriangleShape::`vftable';
  HIBYTE(v1) = (unsigned int)&hkTriangleShape::`vftable' >> 0x18;
  BYTE2(v1) = (unsigned int)&hkTriangleShape::`vftable' >> 0x10;
  dword_B2FFF0 = v1;
  return (unsigned int)&hkTriangleShape::`vftable' >> 0x10;
}
