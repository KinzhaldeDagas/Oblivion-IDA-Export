void __cdecl sub_A273A0()
{
  float v0; // esi

  v0 = flt_B43110[2]; /*0xa273a1*/
  if ( LODWORD(flt_B43110[2]) ) /*0xa273a9*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B43110[2]) + 4)) && v0 != 0.0 ) /*0xa273bb*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa273c5*/
  }
}
