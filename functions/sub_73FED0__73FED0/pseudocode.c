// Pass223: Default NiRendererSpecificProperty producer for global 0x00B401D8, consumed by NiPropertyState slot 3.
LONG sub_73FED0()
{
  NiObjectNET *v0; // eax
  float v1; // esi
  LONG result; // eax
  float v3; // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x18u); /*0x73fef5*/
  v1 = *(float *)&v0; /*0x73fefa*/
  if ( v0 ) /*0x73ff0d*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x73ff11*/
    *(_DWORD *)LODWORD(v1) = &NiRendererSpecificProperty::`vftable'; /*0x73ff16*/
  }
  else
  {
    v1 = 0.0; /*0x73ff1e*/
  }
  result = LODWORD(MEMORY[0xB3F9B0][0x20A]); /*0x73ff20*/
  if ( LODWORD(MEMORY[0xB3F9B0][0x20A]) != LODWORD(v1) ) /*0x73ff2f*/
  {
    if ( result ) /*0x73ff33*/
    {
      v3 = MEMORY[0xB3F9B0][0x20A]; /*0x73ff35*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x73ff3b*/
      if ( !result ) /*0x73ff43*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x73ff51*/
    }
    MEMORY[0xB3F9B0][0x20A] = v1; /*0x73ff55*/
    if ( v1 != 0.0 ) /*0x73ff5b*/
      return InterlockedIncrement((volatile LONG *)(LODWORD(v1) + 4)); /*0x73ff61*/
  }
  return result; /*0x73ff67*/
}
