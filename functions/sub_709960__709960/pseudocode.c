// Pass223: Clears default NiMaterialProperty global 0x00B3FAA4.
void sub_709960()
{
  float v0; // esi

  v0 = MEMORY[0xB3F9B0][0x3D]; /*0x709961*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x3D]) ) /*0x709961*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v0) + 4)) && v0 != 0.0 ) /*0x70997b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0x709985*/
    MEMORY[0xB3F9B0][0x3D] = 0.0; /*0x709987*/
  }
}
