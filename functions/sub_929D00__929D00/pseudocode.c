int __thiscall sub_929D00(_DWORD *this, unsigned int a2)
{
  int v2; // edi
  unsigned int v3; // edx
  unsigned int v4; // eax
  char v5; // cl
  _DWORD *v6; // eax
  bool v7; // zf
  int v8; // ecx

  v2 = *(this + 9); /*0x929d19*/
  v3 = a2 & (0xFFFFFFFF >> *(this + 8)); /*0x929d1c*/
  v4 = 0x30 * (a2 >> (0x20 - *(this + 8))); /*0x929d23*/
  v5 = *(_BYTE *)(v4 + v2 + 0x11); /*0x929d26*/
  v6 = (_DWORD *)(v2 + v4); /*0x929d2a*/
  v7 = v5 == 1; /*0x929d2d*/
  v8 = v6[8]; /*0x929d30*/
  if ( v7 ) /*0x929d34*/
    return *(_DWORD *)(*(unsigned __int8 *)(v3 * v8 + v6[7]) * v6[0xA] + v6[9]); /*0x929d49*/
  else
    return *(_DWORD *)(*(unsigned __int16 *)(v3 * v8 + v6[7]) * v6[0xA] + v6[9]); /*0x929d62*/
}
