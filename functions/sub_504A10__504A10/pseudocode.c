char __cdecl sub_504A10(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // esi
  char v10; // al
  _BYTE *v11; // eax
  TESObjectREFR **TeleportExtraData; // eax
  char *Name; // eax
  TESObjectREFR *v14; // [esp-18h] [ebp-20h]
  TESObjectREFR *v15; // [esp-4h] [ebp-Ch]
  int v16; // [esp+4h] [ebp-4h] BYREF

  v8 = arg8;
  if ( !arg8 )
    return 0;
  v14 = arg8;
  arg8 = 0;
  v16 = 0;
  if ( !Script_ExtractArgs(a1, a2, a3, v14, a4, a5, l, &arg8, &v16) )
    return 0;
  sub_4D8260((int)v8, 4);
  if ( v10 )
    sub_4DE460(v8, 0.0, 1);
  v11 = sub_4D7740(v8);
  if ( !v11 )
    v11 = sub_4DBDF0(v8);
  if ( arg8 )
    *v11 = (_BYTE)arg8;
  v11[8] |= 1u;
  sub_4D9070(v8);
  if ( v16 > 0 )
  {
    TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData(v8);
    if ( TeleportExtraData )
      sub_42B5F0(TeleportExtraData, v8, 0);
  }
  v8->vtbl->super.SetFromActiveFile((TESForm *)v8, 1);
  if ( IsConsoleMode )
  {
    v15 = arg8;
    Name = TESObjectREFR_GetName(v8);
    Interface_ConsolePrint("Locked %s with lock level %d", Name, v15);
  }
  return 1;
}
