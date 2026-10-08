signed int __usercall sub_743F10@<eax>(_DWORD *a1@<esi>)
{
  int v1; // ecx
  int v2; // edx
  int v3; // eax
  int v4; // edx

  v1 = a1[0x11]; /*0x743f13*/
  v2 = a1[0xF]; /*0x743f16*/
  a1[0xD] = 2 * a1[9]; /*0x743f1c*/
  *(_WORD *)(v2 + 2 * v1 - 2) = 0; /*0x743f21*/
  _memset(a1[0xF], 0, 2 * a1[0x11] - 2); /*0x743f33*/
  v3 = 6 * a1[0x1F]; /*0x743f48*/
  a1[0x1E] = (unsigned __int16)word_A82732[v3]; /*0x743f4a*/
  a1[0x21] = (unsigned __int16)word_A82730[v3]; /*0x743f54*/
  a1[0x22] = (unsigned __int16)word_A82734[v3]; /*0x743f61*/
  v4 = (unsigned __int16)word_A82736[v3]; /*0x743f67*/
  a1[0x19] = 0; /*0x743f76*/
  a1[0x15] = 0; /*0x743f79*/
  a1[0x1B] = 0; /*0x743f7c*/
  a1[0x18] = 0; /*0x743f7f*/
  a1[0x10] = 0; /*0x743f82*/
  a1[0x1D] = v4; /*0x743f85*/
  a1[0x1C] = 2; /*0x743f88*/
  a1[0x16] = 2; /*0x743f8b*/
  return 2; /*0x743f8e*/
}
