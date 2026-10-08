char __usercall Cmd_Activate@<al>(
        double st5_0@<st2>,
        double a2@<st1>,
        double st7_0@<st0>,
        ParamInfo *a1,
        UInt8 *a5,
        TESObjectREFR *a4,
        TESObjectREFR *a7,
        Script *a8,
        ScriptEventList *l,
        int a10,
        UInt32 *a3)
{
  bool v11; // zf
  TESObjectREFR *v13; // eax
  UInt16 v14[2]; // [esp+4h] [ebp-8h] BYREF
  int v15; // [esp+8h] [ebp-4h] BYREF

  v11 = reference == (PlayerCharacter *)a4; /*0x507658*/
  *(_DWORD *)v14 = 0; /*0x50765e*/
  v15 = 0; /*0x507666*/
  if ( v11 ) /*0x50766e*/
  {
    PrintError("Never have the player character activate something in a script very Bad"); /*0x507675*/
    return 0; /*0x507683*/
  }
  if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v14, &v15) ) /*0x5076b7*/
    return 0; /*0x5076b7*/
  if ( a4 ) /*0x5076bb*/
  {
    v13 = *(TESObjectREFR **)v14; /*0x5076bd*/
    if ( *(_DWORD *)v14 || (v13 = (TESObjectREFR *)sub_4D8360((TESChildCELL *)a4), (*(_DWORD *)v14 = v13) != 0) ) /*0x5076d2*/
    {
      if ( (v13->member.super.flags & 0x800) == 0 ) /*0x5076dd*/
      {
        if ( !v15 ) /*0x5076e8*/
        {
          TESObjectREFR_SetActionFlagBits(a4, 1u); /*0x5076ea*/
          TESObjectREFR_SetActionFlagBits(a4, 2u); /*0x5076f3*/
          ActivateRef(a4, st5_0, a2, st7_0, *(TESObjectREFR **)v14, 0, 0, 1); /*0x507705*/
          TESObjectREFR_ClearActionFlagBits(a4, 2u); /*0x50770e*/
          TESObjectREFR_ClearActionFlagBits(a4, 1u); /*0x507717*/
          return 1; /*0x507722*/
        }
        ActivateRef(a4, st5_0, a2, st7_0, v13, 0, 0, 1); /*0x507728*/
      }
    }
  }
  return 1; /*0x50767f*/
}
