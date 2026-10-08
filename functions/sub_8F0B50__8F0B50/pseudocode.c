unsigned int __thiscall sub_8F0B50(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // edx
  int v4; // esi
  int v5; // eax

  if ( (a2 & 1) == 0 ) /*0x8f0b56*/
    return a2 | 1; /*0x8f0b58*/
  v3 = HIWORD(a2); /*0x8f0b67*/
  v4 = ((unsigned __int16)a2 >> 1) + 1; /*0x8f0b6c*/
  v5 = *(this + 4); /*0x8f0b6e*/
  if ( v4 == *(_DWORD *)(v5 + 0xC) - 1 && (v4 = 0, ++v3, v3 == *(_DWORD *)(v5 + 0x10) - 1) ) /*0x8f0b82*/
    return 0xFFFFFFFF; /*0x8f0b84*/
  else
    return 2 * (v4 + (v3 << 0xF)); /*0x8f0b92*/
}
