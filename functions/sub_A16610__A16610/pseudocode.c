void __cdecl sub_A16610()
{
  BSShaderProperty *v0; // esi

  v0 = unk_B333E0; /*0xa16611*/
  if ( unk_B333E0 ) /*0xa16619*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B333E0->member) ) /*0xa1661f*/
    {
      if ( v0 ) /*0xa1662b*/
        (*(void (__thiscall **)(BSShaderProperty *, int))v0->vtbl)(v0, 1); /*0xa16635*/
    }
  }
}
