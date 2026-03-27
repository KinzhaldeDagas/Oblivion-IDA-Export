unsigned int __thiscall sub_95FB00(_WORD *this, int a2, int a3)
{
  unsigned int v4; // esi
  int v5; // ecx
  unsigned int result; // eax

  v4 = 0;
  if ( *(this + 7) )
  {
    do
    {
      v5 = *(_DWORD *)(*((_DWORD *)this + 2) + 4 * v4);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v5 + 0x14))(
        v5,
        *(_DWORD *)(*(_DWORD *)(a2 + 8) + 4 * v4),
        a3);
      result = (unsigned __int16)*(this + 7);
      ++v4;
    }
    while ( v4 < result );
  }
  return result;
}
