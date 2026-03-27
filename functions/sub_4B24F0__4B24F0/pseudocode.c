int __thiscall sub_4B24F0(int this, _DWORD *a2)
{
  unsigned __int16 v3; // ax
  int v4; // ebx
  int v6; // ebp
  int v7; // edi
  unsigned __int16 v8; // ax

  if ( !*a2 )
    return 0xFFFFFFFF;
  v3 = 0;
  if ( !*(_WORD *)(this + 0xA) )
    return 0xFFFFFFFF;
  v4 = *(_DWORD *)(this + 4);
  while ( *(_DWORD *)(v4 + 4 * v3) != *a2 )
  {
    if ( ++v3 >= *(_WORD *)(this + 0xA) )
      return 0xFFFFFFFF;
  }
  v6 = v3;
  v7 = *(_DWORD *)(v4 + 4 * v3);
  if ( v7 )
  {
    if ( !InterlockedDecrement((volatile LONG *)(v7 + 4)) )
      (**(void (__thiscall ***)(int, int))v7)(v7, 1);
    *(_DWORD *)(v4 + 4 * v6) = 0;
  }
  v8 = *(_WORD *)(this + 0xA);
  --*(_WORD *)(this + 0xC);
  if ( v6 == v8 - 1 )
    *(_WORD *)(this + 0xA) = v8 - 1;
  return v6;
}
