int __thiscall sub_8C37B0(void *this, int a2)
{
  int v3; // ecx

  v3 = *(_DWORD *)(a2 + 8);
  if ( v3 )
  {
    if ( *(_WORD *)(v3 + 4) )
    {
      if ( !--*(_WORD *)(v3 + 6) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
    }
  }
  return sub_89D720(this, a2);
}
