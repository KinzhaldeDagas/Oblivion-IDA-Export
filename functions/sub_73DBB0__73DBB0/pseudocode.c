// Pass223: Default NiShadeProperty producer for global 0x00B401AC, consumed by NiPropertyState slot 4.
NiObjectNET *sub_73DBB0()
{
  NiObjectNET *result; // eax
  NiObjectNET *v1; // esi
  float v2; // edi

  result = (NiObjectNET *)FormHeapAlloc(0x1Cu); /*0x73dbd5*/
  v1 = result; /*0x73dbda*/
  if ( result ) /*0x73dbed*/
  {
    result = NiObjectNET::NiObjectNET(result); /*0x73dbf1*/
    v1->vtbl = (NiObjectVtbl **)&NiShadeProperty::`vftable'; /*0x73dbf6*/
    LOWORD(v1[1].vtbl) = 1; /*0x73dbfc*/
  }
  else
  {
    v1 = 0; /*0x73dc04*/
  }
  v2 = MEMORY[0xB3F9B0][0x1FF]; /*0x73dc06*/
  if ( (NiObjectNET *)LODWORD(MEMORY[0xB3F9B0][0x1FF]) != v1 ) /*0x73dc16*/
  {
    if ( v2 != 0.0 ) /*0x73dc1a*/
    {
      result = (NiObjectNET *)InterlockedDecrement((volatile LONG *)(LODWORD(v2) + 4)); /*0x73dc20*/
      if ( !result ) /*0x73dc28*/
        result = (NiObjectNET *)(**(int (__thiscall ***)(float, int))LODWORD(v2))(COERCE_FLOAT(LODWORD(v2)), 1); /*0x73dc36*/
    }
    LODWORD(MEMORY[0xB3F9B0][0x1FF]) = v1; /*0x73dc3a*/
    if ( v1 ) /*0x73dc40*/
      return (NiObjectNET *)InterlockedIncrement((volatile LONG *)&v1->members); /*0x73dc46*/
  }
  return result; /*0x73dc4c*/
}
