RefVariable *__thiscall Script_GetRefVariableByIndex(Script *this, UInt32 index, ScriptEventList *a3)
{
  RefListEntry *p_refList; // eax
  UInt32 v6; // edx
  RefListEntry *next; // ecx
  RefVariable *var; // esi
  int varIdx; // eax
  double a1; // [esp+8h] [ebp-8h]

  if ( !index || index > this->info.numRefs )
    return 0;
  if ( g_executingScript == this && dword_B09E1C == index && g_executingScriptEventList == a3 )
    return dword_B361B8;
  p_refList = &this->refList;
  v6 = 1;
  if ( this == (Script *)0xFFFFFFC0 )
    return 0;
  while ( 1 )
  {
    next = p_refList->next;
    if ( !next && !p_refList->var )
      break;
    if ( v6 >= index )
      break;
    p_refList = p_refList->next;
    ++v6;
    if ( !next )
      return 0;
  }
  var = p_refList->var;
  varIdx = p_refList->var->varIdx;
  if ( varIdx )
  {
    if ( a3 )
    {
      a1 = sub_4FA110(a3, varIdx, this);
      if ( LODWORD(a1) )
        var->form = TESForm_LookupByFormID(LODWORD(a1));
    }
  }
  dword_B361B8 = var;
  g_executingScriptEventList = a3;
  g_executingScript = this;
  dword_B09E1C = index;
  return var;
}
