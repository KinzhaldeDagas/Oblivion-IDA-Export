// Pass223: Clears default NiStencilProperty global 0x00B3FCF8.
void sub_7190D0()
{
  float v0; // esi

  v0 = MEMORY[0xB3F9B0][0xD2]; /*0x7190d1*/
  if ( LODWORD(MEMORY[0xB3F9B0][0xD2]) ) /*0x7190d1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v0) + 4)) && v0 != 0.0 ) /*0x7190eb*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0x7190f5*/
    MEMORY[0xB3F9B0][0xD2] = 0.0; /*0x7190f7*/
  }
}
