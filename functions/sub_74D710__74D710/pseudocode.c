char __thiscall sub_74D710(_WORD *this, int a2)
{
  __int16 v4; // ax
  unsigned int v5; // esi
  int v6; // ecx
  int v7; // eax

  if ( !sub_752CD0(this, a2) )
    return 0;
  v4 = *(this + 0x11);
  if ( v4 != *(_WORD *)(a2 + 0x22) )
    return 0;
  v5 = 0;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v6 = *(_DWORD *)(*((_DWORD *)this + 7) + 4 * v5);
    v7 = v5 >= *(unsigned __int16 *)(a2 + 0x22) ? 0 : *(_DWORD *)(*(_DWORD *)(a2 + 0x1C) + 4 * v5);
    if ( v6 )
      break;
    if ( v7 )
      return 0;
LABEL_11:
    if ( ++v5 >= (unsigned __int16)*(this + 0x11) )
      return 1;
  }
  if ( v7 && (*(unsigned __int8 (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x2C))(v6, v7) )
    goto LABEL_11;
  return 0;
}
