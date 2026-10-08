// Pass223: Default NiMaterialProperty producer for global 0x00B3FAA4, consumed by NiPropertyState slot 2.
LONG sub_7098B0()
{
  NiMaterialProperty *v0; // eax
  NiMaterialProperty *v1; // esi
  LONG result; // eax
  float v3; // edi

  v0 = (NiMaterialProperty *)FormHeapAlloc(0x5Cu); /*0x7098d5*/
  if ( v0 ) /*0x7098eb*/
    v1 = NiMaterialProperty::NiMaterialProperty(v0); /*0x7098f4*/
  else
    v1 = 0; /*0x7098f8*/
  result = LODWORD(MEMORY[0xB3F9B0][0x3D]); /*0x7098fa*/
  if ( (NiMaterialProperty *)LODWORD(MEMORY[0xB3F9B0][0x3D]) != v1 ) /*0x709909*/
  {
    if ( result ) /*0x70990d*/
    {
      v3 = MEMORY[0xB3F9B0][0x3D]; /*0x70990f*/
      result = InterlockedDecrement((volatile LONG *)(result + 4)); /*0x709915*/
      if ( !result ) /*0x70991d*/
        result = (**(int (__thiscall ***)(float, int))LODWORD(v3))(COERCE_FLOAT(LODWORD(v3)), 1); /*0x70992b*/
    }
    LODWORD(MEMORY[0xB3F9B0][0x3D]) = v1; /*0x70992f*/
    if ( v1 ) /*0x709935*/
      return InterlockedIncrement((volatile LONG *)v1 + 1); /*0x70993b*/
  }
  return result; /*0x709941*/
}
