void __cdecl sub_A271C0()
{
  float v0; // esi

  v0 = flt_B430DC[0]; /*0xa271c1*/
  if ( LODWORD(flt_B430DC[0]) ) /*0xa271c9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B430DC[0]) + 4)) && v0 != 0.0 ) /*0xa271db*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa271e5*/
  }
}
