// Looks up Script_CommandList[functionIndex]. If paramIndex exists and its ParamInfo type is ObjectReferenceID (4) or Actor (6), a missing condition param1 may fall back to the current resolved/swapped target. Other types (Quest, Global, Class, Race, Sex, etc.) do not use this target fallback.
bool __cdecl ConditionParamDefaultsToTarget(UInt32 functionIndex, UInt32 paramIndex)
{
  bool result; // al

  result = 0; /*0x56b1d4*/
  if ( functionIndex < 0x171 /*0x56b20d*/
    && paramIndex < Script_CommandList[functionIndex].numParams
    && (Script_CommandList[functionIndex].params[paramIndex].typeID == 4
     || Script_CommandList[functionIndex].params[paramIndex].typeID == 6) )// Bounds check against Script_CommandList's 0x171 (369) rows before reading the opcode's ParamInfo metadata.
  {
    return 1;                                   // Only ObjectReferenceID and Actor ParamInfo types request a target fallback for missing param1; Quest/Global/Form-specific condition parameters remain null. /*0x56b20f*/
  }
  return result; /*0x56b211*/
}
