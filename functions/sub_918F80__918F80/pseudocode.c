char __thiscall sub_918F80(int this)
{
  int v2; // eax
  int v3; // ecx

  v2 = *(_DWORD *)(this + 0x2C);
  if ( v2 )
  {
    if ( *(_DWORD *)(v2 + 8) )
    {
      sub_89CCC0(*(int **)(this + 0x28), v2);
      LOBYTE(v2) = sub_8A6410(*(_DWORD *)(*(_DWORD *)(this + 0x2C) + 0x18));
    }
    v3 = *(_DWORD *)(this + 0x2C);
    if ( *(_WORD *)(v3 + 4) )
    {
      if ( !--*(_WORD *)(v3 + 6) )
        LOBYTE(v2) = (**(int (__thiscall ***)(int, int))v3)(v3, 1);
    }
    *(_DWORD *)(this + 0x2C) = 0;
  }
  *(_DWORD *)(this + 0x28) = 0;
  return v2;
}
