// Fog decode: clears default plain NiFogProperty global B401FC during shutdown.
void sub_741080()
{
  float v0; // esi

  v0 = MEMORY[0xB3F9B0][0x213]; /*0x741081*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x213]) ) /*0x741081*/
  {
    if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v0) + 4)) && v0 != 0.0 ) /*0x74109b*/
      (**(void (__thiscall ***)(float, int))LODWORD(v0))(COERCE_FLOAT(LODWORD(v0)), 1); /*0x7410a5*/
    MEMORY[0xB3F9B0][0x213] = 0.0;              // Fog fixed/default decode: clears default plain NiFogProperty global B401FC; lifetime cleanup only, not active fog payload. /*0x7410a7*/
  }
}
