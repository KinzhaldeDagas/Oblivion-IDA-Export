bool __usercall sub_50B700@<al>(
        char bp0@<bpl>,
        double a2@<st2>,
        double st6_0@<st1>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  bool result; // al
  PlayerCharacter *v13; // eax
  UInt32 v14; // ecx
  UInt16 v15[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0; /*0x50b728*/
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v15); /*0x50b730*/
  if ( result ) /*0x50b73a*/
  {
    v13 = reference; /*0x50b73e*/
    if ( reference->isSleeping ) /*0x50b743*/
    {
      v14 = *(_DWORD *)v15; /*0x50b74c*/
      if ( *(int *)v15 < 0 ) /*0x50b751*/
      {
        v14 = 0; /*0x50b753*/
        *(_DWORD *)v15 = 0; /*0x50b755*/
      }
      v13->HoursToSleep = v14; /*0x50b758*/
      v13->isSleeping = 1; /*0x50b75e*/
      if ( !*(_DWORD *)v15 ) /*0x50b769*/
        sub_57B4C0(bp0, a2, st6_0); /*0x50b76b*/
    }
    return 1; /*0x50b770*/
  }
  return result; /*0x50b73d*/
}
