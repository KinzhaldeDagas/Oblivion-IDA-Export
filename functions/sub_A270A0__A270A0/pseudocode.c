void __cdecl sub_A270A0()
{
  Ni2DBuffer *v0; // esi

  v0 = MEMORY[0xB42CF4]; /*0xa270a1*/
  if ( MEMORY[0xB42CF4] ) /*0xa270a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&MEMORY[0xB42CF4]->members) ) /*0xa270af*/
    {
      if ( v0 ) /*0xa270bb*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa270c5*/
    }
  }
}
