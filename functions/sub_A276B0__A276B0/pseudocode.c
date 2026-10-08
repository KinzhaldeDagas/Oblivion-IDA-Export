void __cdecl sub_A276B0()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_B44F88; /*0xa276b1*/
  if ( dword_B44F88 ) /*0xa276b9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B44F88->members) ) /*0xa276bf*/
    {
      if ( v0 ) /*0xa276cb*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa276d5*/
    }
  }
}
