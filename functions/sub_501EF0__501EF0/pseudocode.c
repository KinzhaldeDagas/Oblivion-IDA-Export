char __usercall sub_501EF0@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        double *a10,
        UInt32 *a3)
{
  char result; // al
  UInt16 v12[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0;
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v12);
  if ( result )
    return PlayerCharacter_RayCastTo(st5_0, a2, st7_0, a4, *(TESObjectREFR **)v12, 0, a10);
  return result;
}
