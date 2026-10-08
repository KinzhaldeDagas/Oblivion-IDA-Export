// Verified script-style callback body: parses a TESObjectCELL* and integer, then calls TESObjectCELL_SetPublicFlag20(cell, value > 0). Candidate command identity: SetCellPublic, based on the Fallout analog only. Oblivion command registration/name remains Unknown: current IDA xrefs and a raw function-pointer search show no registered reference.
bool __cdecl Script_SetCellPublicFlag20(
        ParamInfo *params,
        UInt8 *compiledParams,
        TESObjectREFR *reference,
        TESObjectREFR *container,
        Script *script,
        ScriptEventList *eventList,
        int arg7,
        UInt32 *offset)
{
  bool result; // al
  UInt16 v9[2]; // [esp+0h] [ebp-8h] BYREF
  int v10; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v9 = 0; /*0x5031d0*/
  v10 = 0; /*0x5031d8*/
  result = Script_ExtractArgs(params, compiledParams, offset, reference, container, script, eventList, v9, &v10); /*0x5031e0*/
  if ( result ) /*0x5031ea*/
  {
    if ( *(_DWORD *)v9 ) /*0x5031f5*/
      TESObjectCELL_SetPublicFlag20(*(TESObjectCELL **)v9, v10 > 0); /*0x503200*/
    return 1; /*0x503205*/
  }
  return result; /*0x5031ec*/
}
