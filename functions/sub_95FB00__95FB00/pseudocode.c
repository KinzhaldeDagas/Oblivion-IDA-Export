unsigned int __thiscall sub_95FB00(_WORD *this, int a2, int a3)
{
  unsigned int v4; // esi
  int v5; // ecx
  unsigned int result; // eax

  v4 = 0; /*0x95fb04*/
  if ( *(this + 7) ) /*0x95fb06*/
  {
    do /*0x95fb34*/
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v4); /*0x95fb19*/
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 0x14))( /*0x95fb29*/
        v5,
        *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v4),
        a3);
      result = (unsigned __int16)*(this + 7); /*0x95fb2b*/
      ++v4; /*0x95fb2f*/
    }
    while ( v4 < result ); /*0x95fb34*/
  }
  return result; /*0x95fb38*/
}
