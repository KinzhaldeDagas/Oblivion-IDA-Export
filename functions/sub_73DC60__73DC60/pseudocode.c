// Pass223: Clears default NiShadeProperty global 0x00B401AC.
void sub_73DC60()
{
  float v0; // esi

  v0 = MEMORY[0xB3F9B0][0x1FF]; /*0x73dc61*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x1FF]) ) /*0x73dc61*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v0) + 4)) && v0 != 0.0 ) /*0x73dc7b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0x73dc85*/
    MEMORY[0xB3F9B0][0x1FF] = 0.0; /*0x73dc87*/
  }
}
