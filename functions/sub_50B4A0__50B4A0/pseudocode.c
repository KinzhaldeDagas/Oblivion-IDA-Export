bool __cdecl sub_50B4A0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *arg8,
        TESObjectREFR *a4,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  TESObjectREFR *v8; // edi
  bool result; // al
  PlayerCharacter *v10; // esi
  PlayerCharacter *v11; // eax
  double v12; // st7
  float v13; // [esp+10h] [ebp-4h]
  float v14; // [esp+10h] [ebp-4h]

  v8 = arg8;
  if ( !arg8 )
    return 0;
  v10 = (PlayerCharacter *)OblivionDynamicCast(
                             arg8,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( v10 )
  {
    arg8 = 0;
    result = Script_ExtractArgs(a1, a2, a3, v8, a4, a5, l, &arg8);
    if ( !result )
      return result;
    v13 = ((double (__thiscall *)(PlayerCharacter *))v10->vtbl->super.Unk_94)(v10);
    v11 = TESDataHandler_g_PlayerRef;
    v14 = (double)(int)arg8 - v13;
    if ( v10 == TESDataHandler_g_PlayerRef && v11->isInSEWorld )
      *(float *)&v11->unk700 = *(float *)&v11->unk700 + v14;
    else
      sub_4269E0(&v10->super.super.super.super.baseExtraList, v14);
    if ( IsConsoleMode )
    {
      v12 = ((double (__thiscall *)(PlayerCharacter *))v10->vtbl->super.Unk_94)(v10);
      Interface_ConsolePrint("Actor Crime Gold modified to %.02f ", v12);
    }
  }
  return 1;
}
