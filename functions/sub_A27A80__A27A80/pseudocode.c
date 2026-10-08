void __cdecl sub_A27A80()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_BA7B88; /*0xa27a81*/
  if ( dword_BA7B88 ) /*0xa27a89*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_BA7B88->members) ) /*0xa27a8f*/
    {
      if ( v0 ) /*0xa27a9b*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa27aa5*/
    }
  }
}
