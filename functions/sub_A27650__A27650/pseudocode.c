void __cdecl sub_A27650()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_B45084; /*0xa27651*/
  if ( dword_B45084 ) /*0xa27659*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B45084->members) ) /*0xa2765f*/
    {
      if ( v0 ) /*0xa2766b*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa27675*/
    }
  }
}
