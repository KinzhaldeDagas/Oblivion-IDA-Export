// Pass223: Clears default NiRendererSpecificProperty global 0x00B401D8.
void sub_73FF80()
{
  float v0; // esi

  v0 = MEMORY[0xB3F9B0][0x20A]; /*0x73ff81*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x20A]) ) /*0x73ff81*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v0) + 4)) && v0 != 0.0 ) /*0x73ff9b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0x73ffa5*/
    MEMORY[0xB3F9B0][0x20A] = 0.0; /*0x73ffa7*/
  }
}
