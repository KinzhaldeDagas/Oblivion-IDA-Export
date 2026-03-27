unsigned int sub_A15210()
{
  int v1; // [esp+Ch] [ebp-34h]

  LOWORD(v1) = (unsigned __int16)&hkMoppCode::`vftable';
  BYTE2(v1) = (unsigned int)&hkMoppCode::`vftable' >> 0x10;
  HIBYTE(v1) = (unsigned int)&hkMoppCode::`vftable' >> 0x18;
  dword_B304B0 = v1;
  return (unsigned int)&hkMoppCode::`vftable' >> 0x10;
}
