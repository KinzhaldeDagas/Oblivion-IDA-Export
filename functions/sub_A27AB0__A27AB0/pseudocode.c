void __cdecl sub_A27AB0()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_BA7B8C; /*0xa27ab1*/
  if ( dword_BA7B8C ) /*0xa27ab9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_BA7B8C->members) ) /*0xa27abf*/
    {
      if ( v0 ) /*0xa27acb*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa27ad5*/
    }
  }
}
