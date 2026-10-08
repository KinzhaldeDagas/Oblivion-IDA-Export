void __cdecl sub_A26B10()
{
  NiDevImageConverter *v0; // esi

  v0 = unk_B3FD28; /*0xa26b11*/
  if ( unk_B3FD28 ) /*0xa26b19*/
  {
    if ( !InterlockedDecrement((volatile LONG *)unk_B3FD28 + 1) ) /*0xa26b1f*/
    {
      if ( v0 ) /*0xa26b2b*/
        (**(void (__thiscall ***)(NiDevImageConverter *, int))v0)(v0, 1); /*0xa26b35*/
    }
  }
}
