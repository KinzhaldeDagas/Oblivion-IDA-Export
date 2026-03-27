char __thiscall sub_6CFE70(_WORD *this, int a2)
{
  __int16 v4; // ax
  unsigned __int16 v5; // si
  int v6; // eax
  _DWORD *v7; // edx
  int v8; // ecx

  if ( !(unsigned __int8)sub_6D0540(a2) )
    return 0;
  v4 = *(this + 0x22);
  if ( *(_WORD *)(a2 + 0x44) != v4 )
    return 0;
  v5 = 0;
  if ( !v4 )
    return 1;
  while ( 1 )
  {
    v6 = 4 * v5;
    v7 = (_DWORD *)(*((_DWORD *)this + 0x10) + v6);
    v8 = *v7;
    if ( *v7 )
    {
      if ( !*(_DWORD *)(v6 + *(_DWORD *)(a2 + 0x40)) )
        return 0;
      if ( v8 )
        goto LABEL_16;
    }
    if ( *(_DWORD *)(v6 + *(_DWORD *)(a2 + 0x40)) )
      return 0;
    if ( v8 )
    {
LABEL_16:
      if ( !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(v6 + *(_DWORD *)(a2 + 0x40)) + 0x2C))(
              *(_DWORD *)(v6 + *(_DWORD *)(a2 + 0x40)),
              *v7) )
        return 0;
    }
    if ( ++v5 >= *(this + 0x22) )
      return 1;
  }
}
