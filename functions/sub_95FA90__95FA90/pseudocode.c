char __thiscall sub_95FA90(_WORD *this, int a2)
{
  __int16 v4; // ax
  int v5; // esi
  int v6; // ecx

  if ( (*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0xC))(a2) != 4 )
    return 0;
  v4 = *(this + 7);
  if ( v4 != *(_WORD *)(a2 + 0xE) )
    return 0;
  v5 = 0;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v6 = *(_DWORD *)(4 * v5 + *((_DWORD *)this + 2));
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v6 + 0x28))(
           v6,
           *(_DWORD *)(4 * v5 + *(_DWORD *)(a2 + 8))) )
    {
      break;
    }
    if ( ++v5 >= (unsigned int)(unsigned __int16)*(this + 7) )
      return 1;
  }
  return 0;
}
