signed int __usercall sub_743F10@<eax>(_DWORD *a1@<esi>)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = a1[0x11];
  v2 = a1[0xF];
  a1[0xD] = 2 * a1[9];
  *(_WORD *)(v2 + 2 * v1 - 2) = 0;
  _memset(a1[0xF], 0, 2 * a1[0x11] - 2);
  v3 = 6 * a1[0x1F];
  a1[0x1E] = (unsigned __int16)word_A82732[v3];
  a1[0x21] = (unsigned __int16)word_A82730[v3];
  a1[0x22] = (unsigned __int16)word_A82734[v3];
  v4 = (unsigned __int16)word_A82736[v3];
  a1[0x19] = 0;
  a1[0x15] = 0;
  a1[0x1B] = 0;
  a1[0x18] = 0;
  a1[0x10] = 0;
  a1[0x1D] = v4;
  a1[0x1C] = 2;
  a1[0x16] = 2;
  return 2;
}
