char __cdecl sub_504B00(
        ParamInfo *a1,
        UInt8 *a2,
        int arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // esi
  BSExtraData *v10; // eax
  TESObjectREFR **TeleportExtraData; // eax
  char *Name; // eax
  TESObjectREFR *v13; // [esp-14h] [ebp-18h]

  v8 = (TESObjectREFR *)arg8;
  if ( !arg8 )
    return 0;
  v13 = (TESObjectREFR *)arg8;
  arg8 = 0;
  if ( !Script_ExtractArgs(a1, a2, a3, v13, a4, a5, l, &arg8) )
    return 0;
  v10 = sub_4D7740(v8);
  if ( v10 )
  {
    LOBYTE(v10->members.next) &= ~1u;
    sub_4D9070(v8);
    if ( arg8 > 0 )
    {
      TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(v8);
      if ( TeleportExtraData )
        sub_42B5F0(TeleportExtraData, v8, 1);
    }
    v8->vtbl->super.SetFromActiveFile((TESForm *)v8, 1);
  }
  if ( IsConsoleMode )
  {
    Name = TESObjectREFR_GetName(v8);
    Interface_ConsolePrint("Unlocked %s ", Name);
  }
  return 1;
}
