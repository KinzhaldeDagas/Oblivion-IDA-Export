// Pass223: Default NiStencilProperty producer for global 0x00B3FCF8, consumed by NiPropertyState slot 5.
LONG sub_719010()
{
  NiObjectNET *v0; // eax
  float v1; // esi
  LONG result; // eax
  float v3; // edi

  v0 = (NiObjectNET *)FormHeapAlloc(0x24u); /*0x719035*/
  v1 = *(float *)&v0; /*0x71903a*/
  if ( v0 ) /*0x719050*/
  {
    NiObjectNET::NiObjectNET(v0); /*0x719054*/
    *(_DWORD *)LODWORD(v1) = &NiStencilProperty::`vftable'; /*0x719059*/
    *(_DWORD *)(LODWORD(v1) + 0x1C) = 0; /*0x71905f*/
    *(_DWORD *)(LODWORD(v1) + 0x20) = 0xFFFFFFFF; /*0x719066*/
    *(_WORD *)(LODWORD(v1) + 0x18) = 0x4180; /*0x719069*/
  }
  else
  {
    v1 = 0.0; /*0x719071*/
  }
  result = LODWORD(MEMORY[0xB3F9B0][0xD2]); /*0x719073*/
  if ( LODWORD(MEMORY[0xB3F9B0][0xD2]) != LODWORD(v1) ) /*0x71907e*/
  {
    if ( result ) /*0x719082*/
    {
      v3 = MEMORY[0xB3F9B0][0xD2]; /*0x719084*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x71908a*/
      if ( !result ) /*0x719092*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x7190a0*/
    }
    MEMORY[0xB3F9B0][0xD2] = v1; /*0x7190a4*/
    if ( v1 != 0.0 ) /*0x7190aa*/
      return InterlockedIncrement((volatile LONG *)(LODWORD(v1) + 4)); /*0x7190b0*/
  }
  return result; /*0x7190b6*/
}
