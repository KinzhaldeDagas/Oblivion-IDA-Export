char __stdcall sub_77C370(int a1)
{
  Atmosphere *v2; // ecx
  int v3; // esi

  if ( !a1 )
    return 0;
  v2 = *(Atmosphere **)(a1 + 0xBC);
  if ( v2 )
  {
    sub_452A60(v2);
    v3 = *(_DWORD *)(a1 + 0xBC);
    if ( v3 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v3 + 4)) )
        (**(void (__thiscall ***)(int, int))v3)(v3, 1);
      *(_DWORD *)(a1 + 0xBC) = 0;
    }
  }
  return 1;
}
