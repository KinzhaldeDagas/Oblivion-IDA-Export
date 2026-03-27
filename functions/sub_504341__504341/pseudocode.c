// positive sp value has been detected, the output may be wrong!
bool __usercall sub_504341@<al>(ParamInfo *a1@<eax>)
{
  bool result; // al
  void *v2; // [esp-30h] [ebp-30h]
  UInt32 *v3; // [esp-2Ch] [ebp-2Ch]
  TESObjectREFR *v4; // [esp-28h] [ebp-28h]
  TESObjectREFR *v5; // [esp-24h] [ebp-24h]
  Script *v6; // [esp-20h] [ebp-20h]
  ScriptEventList *v7; // [esp-1Ch] [ebp-1Ch]

  result = Script_ExtractArgs(a1, v2, v3, v4, v5, v6, v7);
  if ( result )
    JUMPOUT(0x50439D);
  return result;
}
