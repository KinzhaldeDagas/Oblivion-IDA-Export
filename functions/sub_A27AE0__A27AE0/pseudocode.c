void __cdecl sub_A27AE0()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_BA7B90; /*0xa27ae1*/
  if ( dword_BA7B90 ) /*0xa27ae9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_BA7B90->members) ) /*0xa27aef*/
    {
      if ( v0 ) /*0xa27afb*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa27b05*/
    }
  }
}
