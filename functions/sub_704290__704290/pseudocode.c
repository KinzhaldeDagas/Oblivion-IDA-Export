char __thiscall sub_704290(_DWORD *this, int a2)
{
  int v3; // ecx
  float *v4; // ecx

  v3 = *(this + 2);
  if ( v3 )
  {
    if ( (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v3 + 0x2C))(v3, *(_DWORD *)(a2 + 8)) )
      goto LABEL_5;
    return 0;
  }
  if ( *(_DWORD *)(a2 + 8) )
    return 0;
LABEL_5:
  if ( *((_WORD *)this + 2) != *(_WORD *)(a2 + 4) )
    return 0;
  v4 = (float *)*(this + 3);
  if ( v4 )
  {
    if ( *(_DWORD *)(a2 + 0xC) )
    {
      if ( sub_72FD80(v4, *(_DWORD *)(a2 + 0xC)) )
        return 0;
    }
    else if ( !*(_DWORD *)(a2 + 0xC) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0xC) )
  {
    return 0;
  }
  return 1;
}
