unsigned int __thiscall sub_8F0B50(_DWORD *this, unsigned int a2)
{
  unsigned int v3; // edx
  int v4; // esi
  int v5; // eax

  if ( (a2 & 1) == 0 )
    return a2 | 1;
  v3 = HIWORD(a2);
  v4 = ((unsigned __int16)a2 >> 1) + 1;
  v5 = *(this + 4);
  if ( v4 == *(_DWORD *)(v5 + 0xC) - 1 && (v4 = 0, ++v3, v3 == *(_DWORD *)(v5 + 0x10) - 1) )
    return 0xFFFFFFFF;
  else
    return 2 * (v4 + (v3 << 0xF));
}
