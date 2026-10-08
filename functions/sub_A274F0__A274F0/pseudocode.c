void __cdecl sub_A274F0()
{
  BSShaderAccumulator *v0; // esi

  v0 = unk_B430FC; /*0xa274f1*/
  if ( unk_B430FC ) /*0xa274f9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)unk_B430FC + 1) ) /*0xa274ff*/
    {
      if ( v0 ) /*0xa2750b*/
        (**(void (__thiscall ***)(BSShaderAccumulator *, int))v0)(v0, 1); /*0xa27515*/
    }
  }
}
