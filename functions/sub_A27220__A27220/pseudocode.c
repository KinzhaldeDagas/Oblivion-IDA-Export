void __cdecl sub_A27220()
{
  float v0; // esi

  v0 = flt_B430DC[1]; /*0xa27221*/
  if ( LODWORD(flt_B430DC[1]) ) /*0xa27229*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B430DC[1]) + 4)) && v0 != 0.0 ) /*0xa2723b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27245*/
  }
}
