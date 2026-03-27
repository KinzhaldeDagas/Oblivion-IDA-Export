char __thiscall sub_6DFAC0(char *this, int a2)
{
  unsigned int v4; // ebp
  _DWORD *v5; // esi
  char *v6; // ebx
  int v7; // ecx
  int v8; // eax

  if ( !(unsigned __int8)sub_89D6F0(a2) || *((_WORD *)this + 6) != *(_WORD *)(a2 + 0xC) )
    return 0;
  if ( *((_DWORD *)this + 4) )
  {
    if ( !*(_DWORD *)(a2 + 0x10)
      || *(_DWORD *)(a2 + 0x10)
      && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**((_DWORD **)this + 4) + 0x2C))(
            *((_DWORD *)this + 4),
            *(_DWORD *)(a2 + 0x10)) )
    {
      return 0;
    }
  }
  else if ( *(_DWORD *)(a2 + 0x10) )
  {
    return 0;
  }
  if ( !sub_6CE450((float *)this + 6, (float *)(a2 + 0x18)) )
    return 0;
  v4 = 0;
  v5 = (_DWORD *)(a2 + 0x38);
  v6 = this - a2;
  while ( 1 )
  {
    v7 = *(_DWORD *)((char *)v5 + (_DWORD)v6);
    v8 = *v5;
    if ( v7 )
      break;
    if ( v8 )
      return 0;
LABEL_16:
    ++v4;
    ++v5;
    if ( v4 >= 3 )
      return 1;
  }
  if ( v8 && (*(unsigned __int8 (__thiscall **)(int, _DWORD))(*(_DWORD *)v7 + 0x2C))(v7, *v5) )
    goto LABEL_16;
  return 0;
}
