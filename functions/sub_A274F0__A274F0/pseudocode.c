void __cdecl sub_A274F0()
{
  BSShaderAccumulator *v0; // esi

  v0 = dword_B430FC;
  if ( dword_B430FC )
  {
    if ( !InterlockedDecrement((volatile LONG *)dword_B430FC + 1) )
    {
      if ( v0 )
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))v0)(v0, 1);
    }
  }
}
