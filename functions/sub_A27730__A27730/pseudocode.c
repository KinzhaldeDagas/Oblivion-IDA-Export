void __cdecl sub_A27730()
{
  float v0; // esi

  v0 = OB_ShaderConstantStorage_010201A0[0x68]; /*0xa27731*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) ) /*0xa27739*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x68]) + 4)) && v0 != 0.0 ) /*0xa2774b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27755*/
  }
}
