void __cdecl sub_A27520()
{
  float v0; // esi

  v0 = flt_B430DC[3]; /*0xa27521*/
  if ( LODWORD(flt_B430DC[3]) ) /*0xa27529*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B430DC[3]) + 4)) && v0 != 0.0 ) /*0xa2753b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27545*/
  }
}
