void __cdecl sub_A27490()
{
  float v0; // esi

  v0 = unk_B43108[0]; /*0xa27491*/
  if ( LODWORD(unk_B43108[0]) ) /*0xa27499*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(unk_B43108[0]) + 4)) && v0 != 0.0 ) /*0xa274ab*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa274b5*/
  }
}
