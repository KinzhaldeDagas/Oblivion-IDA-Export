void __cdecl sub_A166A0()
{
  NiScreenElements *v0; // esi

  v0 = MEMORY[0xB333EC]; /*0xa166a1*/
  if ( MEMORY[0xB333EC] ) /*0xa166a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)MEMORY[0xB333EC] + 1) ) /*0xa166af*/
    {
      if ( v0 ) /*0xa166bb*/
        (**(void (__thiscall ***)(NiScreenElements *, int))v0)(v0, 1); /*0xa166c5*/
    }
  }
}
