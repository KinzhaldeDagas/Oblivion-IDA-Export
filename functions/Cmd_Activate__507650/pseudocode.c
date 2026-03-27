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

  v11 = TESDataHandler_g_PlayerRef == (PlayerCharacter *)a4;
  *(_DWORD *)v14 = 0;
  v15 = 0;
  if ( v11 )
  {
    PrintError("Never have the player character activate something in a script very Bad");
    return 0;
  }
  if ( !Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v14, &v15) )
    return 0;
  if ( a4 )
  {
    v13 = *(TESObjectREFR **)v14;
    if ( *(_DWORD *)v14 || (v13 = (TESObjectREFR *)sub_4D8360((TESChildCELL *)a4), (*(_DWORD *)v14 = v13) != 0) )
    {
      if ( (v13->member.super.flags & 0x800) == 0 )
      {
        if ( !v15 )
        {
          sub_4D8270(a4, 1);
          sub_4D8270(a4, 2);
          ActivateRef(a4, st5_0, a2, st7_0, *(TESObjectREFR **)v14, 0, 0, 1);
          sub_4D82E0(a4, 2);
          sub_4D82E0(a4, 1);
          return 1;
        }
        ActivateRef(a4, st5_0, a2, st7_0, v13, 0, 0, 1);
      }
    }
  }
  return 1;
}
