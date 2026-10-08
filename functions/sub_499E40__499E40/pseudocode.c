// Pass205: Water-related callsite included in pass-data producer verification; cross-check before naming high-level field semantics.
TESForm *sub_499E40()
{
  TESForm *result; // eax
  TESForm *CurrentCell; // esi
  float *v2; // eax
  int v3; // [esp+Ch] [ebp-10h]
  float v4; // [esp+10h] [ebp-Ch]
  float v5; // [esp+14h] [ebp-8h]

  result = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x499e49*/
  if ( result ) /*0x499e50*/
  {
    if ( *(_DWORD *)&MEMORY[0xB33E90][0x13A4] ) /*0x499e56*/
    {
      CurrentCell = TES_GetCurrentCell(MEMORY[0xB333A0]); /*0x499e6f*/
      v4 = (float)((TESObjectCELL_GetXCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800); /*0x499e8a*/
      v3 = (TESObjectCELL_GetYCoordinate((TESObjectCELL *)CurrentCell) << 0xC) + 0x800; /*0x499e9f*/
      v2 = (float *)(*(_DWORD *)&MEMORY[0xB33E90][0x13A4] + 0x54); /*0x499eac*/
      *v2 = v4; /*0x499eaf*/
      v5 = (float)v3; /*0x499eb1*/
      v2[1] = v5; /*0x499ebb*/
      v2[2] = 0.0; /*0x499ec9*/
      NiAVObject_UpdateNiAVObject(*(NiAVObject **)&MEMORY[0xB33E90][0x13A4], 0.0, 1); /*0x499ed5*/
      return (TESForm *)NiNode_UpdateDynamicEffectState(*(NiNode **)&MEMORY[0xB33E90][0x13A4]); /*0x499ee4*/
    }
  }
  return result; /*0x499ee1*/
}
