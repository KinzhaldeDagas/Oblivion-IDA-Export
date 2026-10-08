// Pass223: Clears default NiAlphaProperty global 0x00B3FCE4.
void sub_7186F0()
{
  float v0; // esi

  v0 = MEMORY[0xB3F9B0][0xCD]; /*0x7186f1*/
  if ( LODWORD(MEMORY[0xB3F9B0][0xCD]) ) /*0x7186f1*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v0) + 4)) && v0 != 0.0 ) /*0x71870b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0x718715*/
    MEMORY[0xB3F9B0][0xCD] = 0.0; /*0x718717*/
  }
}
