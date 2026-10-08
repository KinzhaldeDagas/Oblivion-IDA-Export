void __cdecl sub_A27940()
{
  float v0; // esi

  v0 = flt_B474CC[9]; /*0xa27941*/
  if ( LODWORD(flt_B474CC[9]) ) /*0xa27949*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B474CC[9]) + 4)) && v0 != 0.0 ) /*0xa2795b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27965*/
  }
}
