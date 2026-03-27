int __thiscall sub_8DA3F0(char *this, int a2, int a3)
{
  int result; // eax
  char *v4; // edi
  char *v5; // ebx
  int v6; // ebp
  int v7; // ecx
  int v8; // ecx

  result = a3;
  v4 = this + 0x20 * a3 + 0xC;
  v5 = this + 4 * a3 + 0xC;
  v6 = 8;
  do
  {
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
    v7 = *(_DWORD *)v5;
    if ( *(_WORD *)(*(_DWORD *)v5 + 4) )
    {
      if ( !--*(_WORD *)(v7 + 6) )
        result = (**(int (__thiscall ***)(int, int))v7)(v7, 1);
    }
    *(_DWORD *)v5 = a2;
    if ( *(_WORD *)(a2 + 4) )
      ++*(_WORD *)(a2 + 6);
    v8 = *(_DWORD *)v4;
    if ( *(_WORD *)(*(_DWORD *)v4 + 4) )
    {
      if ( !--*(_WORD *)(v8 + 6) )
        result = (**(int (__thiscall ***)(int, int))v8)(v8, 1);
    }
    *(_DWORD *)v4 = a2;
    v4 += 4;
    v5 += 0x20;
    --v6;
  }
  while ( v6 );
  return result;
}
