void __cdecl sub_A27910()
{
  float v0; // esi

  v0 = flt_B474CC[8]; /*0xa27911*/
  if ( LODWORD(flt_B474CC[8]) ) /*0xa27919*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B474CC[8]) + 4)) && v0 != 0.0 ) /*0xa2792b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27935*/
  }
}
