char __thiscall sub_6D1A90(_DWORD *this, int a2)
{
  char result; // al
  unsigned int v4; // ebx
  unsigned int i; // esi
  int v6; // ecx

  result = sub_6C3680(this, a2);
  if ( result )
  {
    v4 = *((unsigned __int16 *)this + 0x25);
    for ( i = 0; i < v4; ++i )
    {
      v6 = *(_DWORD *)(*(this + 0x11) + 4 * i);
      if ( v6 )
        (*(void (__thiscall **)(int, int))(*(_DWORD *)v6 + 0x24))(v6, a2);
    }
    return 1;
  }
  return result;
}
