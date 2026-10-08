void __cdecl sub_A27370()
{
  float v0; // esi

  v0 = flt_B430D4; /*0xa27371*/
  if ( LODWORD(flt_B430D4) ) /*0xa27379*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(flt_B430D4) + 4)) && v0 != 0.0 ) /*0xa2738b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27395*/
  }
}
