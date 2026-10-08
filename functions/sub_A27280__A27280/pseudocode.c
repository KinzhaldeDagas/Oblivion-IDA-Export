void __cdecl sub_A27280()
{
  float v0; // esi

  v0 = flt_B430DC[2]; /*0xa27281*/
  if ( LODWORD(flt_B430DC[2]) ) /*0xa27289*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B430DC[2]) + 4)) && v0 != 0.0 ) /*0xa2729b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa272a5*/
  }
}
