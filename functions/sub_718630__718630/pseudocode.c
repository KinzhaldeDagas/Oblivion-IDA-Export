// Pass223: Default NiAlphaProperty producer for global 0x00B3FCE4, consumed by NiPropertyState slot 0.
LONG sub_718630()
{
  NiObjectNET *v0; // eax
  float v1; // esi
  LONG result; // eax
  float v3; // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x718655*/
  v1 = *(float *)&v0; /*0x71865a*/
  if ( v0 ) /*0x71866d*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x718671*/
    *(_DWORD *)LODWORD(v1) = &NiAlphaProperty::`vftable'; /*0x718676*/
    *(_WORD *)(LODWORD(v1) + 0x18) = 0xEC; /*0x71867c*/
    *(_BYTE *)(LODWORD(v1) + 0x1A) = 0; /*0x718682*/
  }
  else
  {
    v1 = 0.0; /*0x718688*/
  }
  result = LODWORD(MEMORY[0xB3F9B0][0xCD]); /*0x71868a*/
  if ( LODWORD(MEMORY[0xB3F9B0][0xCD]) != LODWORD(v1) ) /*0x718699*/
  {
    if ( result ) /*0x71869d*/
    {
      v3 = MEMORY[0xB3F9B0][0xCD]; /*0x71869f*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x7186a5*/
      if ( !result ) /*0x7186ad*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x7186bb*/
    }
    MEMORY[0xB3F9B0][0xCD] = v1; /*0x7186bf*/
    if ( v1 != 0.0 ) /*0x7186c5*/
      return InterlockedIncrement((volatile LONG *)(LODWORD(v1) + 4)); /*0x7186cb*/
  }
  return result; /*0x7186d1*/
}
