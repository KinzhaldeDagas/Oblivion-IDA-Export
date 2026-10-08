void __cdecl sub_A27700()
{
  float v0; // esi

  v0 = OB_ShaderConstantStorage_010201A0[0x65]; /*0xa27701*/
  if ( LODWORD(OB_ShaderConstantStorage_010201A0[0x65]) ) /*0xa27709*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(OB_ShaderConstantStorage_010201A0[0x65]) + 4)) && v0 != 0.0 ) /*0xa2771b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0xa27725*/
  }
}
