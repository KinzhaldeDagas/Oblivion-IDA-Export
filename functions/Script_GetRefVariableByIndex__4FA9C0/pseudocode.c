// Hot Reload OBSE decode: Script ref-variable lookup. Uses globals B361B0/B361B4/B361B8/B09E1C as a last-ref cache.
RefVariable *__thiscall Script_GetRefVariableByIndex(Script *this, UInt32 index, ScriptEventList *a3)
{
  RefListEntry *p_refList; // eax
  UInt32 v6; // edx
  RefListEntry *next; // ecx
  RefVariable *var; // esi
  UInt32 varIdx; // eax
  double a1; // [esp+8h] [ebp-8h]

  if ( !index || index > this->info.numRefs ) /*0x4fa9dc*/
    return 0; /*0x4fa9d0*/
  if ( MEMORY[0xB361B0] == this && dword_B09E1C == index && MEMORY[0xB361B4] == a3 ) /*0x4fa9f9*/
    return unk_B361B8; /*0x4fa9fb*/
  p_refList = &this->refList; /*0x4faa09*/
  v6 = 1; /*0x4faa0e*/
  if ( this == (Script *)0xFFFFFFC0 ) /*0x4faa13*/
    return 0; /*0x4faa2d*/
  while ( 1 ) /*0x4faa15*/
  {
    next = p_refList->next; /*0x4faa15*/
    if ( !next && !p_refList->var ) /*0x4faa1c*/
      break; /*0x4faa1c*/
    if ( v6 >= index ) /*0x4faa22*/
      break; /*0x4faa22*/
    p_refList = p_refList->next; /*0x4faa24*/
    ++v6; /*0x4faa26*/
    if ( !next ) /*0x4faa2b*/
      return 0; /*0x4faa2b*/
  }
  var = p_refList->var; /*0x4faa39*/
  varIdx = p_refList->var->varIdx; /*0x4faa3b*/
  if ( varIdx ) /*0x4faa40*/
  {
    if ( a3 ) /*0x4faa44*/
    {
      a1 = ScriptEventList::GetVariableValue(a3, varIdx, this); /*0x4faa4f*/
      if ( LODWORD(a1) ) /*0x4faa59*/
        var->form = TESForm_LookupByFormID(LODWORD(a1)); /*0x4faa64*/
    }
  }
  unk_B361B8 = var; /*0x4faa67*/
  MEMORY[0xB361B4] = a3; /*0x4faa70*/
  MEMORY[0xB361B0] = this; /*0x4faa77*/
  dword_B09E1C = index; /*0x4faa7e*/
  return var; /*0x4fa9cf*/
}
