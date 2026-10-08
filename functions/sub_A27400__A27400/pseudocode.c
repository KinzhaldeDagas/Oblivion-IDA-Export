void __cdecl sub_A27400()
{
  float v0; // esi

  v0 = flt_B43110[1]; /*0xa27401*/
  if ( LODWORD(flt_B43110[1]) ) /*0xa27409*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B43110[1]) + 4)) && v0 != 0.0 ) /*0xa2741b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27425*/
  }
}
