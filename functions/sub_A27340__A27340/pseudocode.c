void __cdecl sub_A27340()
{
  float v0; // esi

  v0 = flt_B43110[0]; /*0xa27341*/
  if ( LODWORD(flt_B43110[0]) ) /*0xa27349*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B43110[0]) + 4)) && v0 != 0.0 ) /*0xa2735b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27365*/
  }
}
