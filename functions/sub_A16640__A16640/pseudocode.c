// Fog decode: secondary release edge for B333E4. Lifetime management only, not a fog payload writer.
void __cdecl sub_A16640()
{
  BSShaderProperty *v0; // esi

  v0 = unk_B333E4; /*0xa16641*/
  if ( unk_B333E4 ) /*0xa16649*/
  {
    if ( !InterlockedDecrement((volatile LONG *)&unk_B333E4->member) ) /*0xa1664f*/
    {
      if ( v0 ) /*0xa1665b*/
        (*(void (__thiscall **)(BSShaderProperty *, int))v0->vtbl)(v0, 1); /*0xa16665*/
    }
  }
}
