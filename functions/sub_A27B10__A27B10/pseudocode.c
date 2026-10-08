void __cdecl sub_A27B10()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_BA7B94; /*0xa27b11*/
  if ( dword_BA7B94 ) /*0xa27b19*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_BA7B94->members) ) /*0xa27b1f*/
    {
      if ( v0 ) /*0xa27b2b*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa27b35*/
    }
  }
}
