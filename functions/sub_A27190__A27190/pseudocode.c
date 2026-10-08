void __cdecl sub_A27190()
{
  float v0; // esi

  v0 = flt_B430DC[4]; /*0xa27191*/
  if ( LODWORD(flt_B430DC[4]) ) /*0xa27199*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B430DC[4]) + 4)) && v0 != 0.0 ) /*0xa271ab*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa271b5*/
  }
}
