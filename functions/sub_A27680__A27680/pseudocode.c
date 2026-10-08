void __cdecl sub_A27680()
{
  Ni2DBuffer *v0; // esi

  v0 = dword_B44F8C; /*0xa27681*/
  if ( dword_B44F8C ) /*0xa27689*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&dword_B44F8C->members) ) /*0xa2768f*/
    {
      if ( v0 ) /*0xa2769b*/
        (*(void (__thiscall **)(Ni2DBuffer *, int))v0->__vftable)(v0, 1); /*0xa276a5*/
    }
  }
}
