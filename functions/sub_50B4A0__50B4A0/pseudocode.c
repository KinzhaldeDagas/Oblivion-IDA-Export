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

  v8 = arg8; /*0x50b4a2*/
  if ( !arg8 ) /*0x50b4a8*/
    return 0; /*0x50b4ae*/
  v10 = (PlayerCharacter *)OblivionDynamicCast( /*0x50b4c4*/
                             arg8,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  if ( v10 ) /*0x50b4cb*/
  {
    arg8 = 0; /*0x50b4f5*/
    result = Script_ExtractArgs(a1, a2, a3, v8, a4, a5, l, &arg8); /*0x50b4fd*/
    if ( !result ) /*0x50b507*/
      return result; /*0x50b507*/
    v13 = ((double (__thiscall *)(PlayerCharacter *))v10->vtbl->super.Unk_94)(v10); /*0x50b519*/
    v11 = reference; /*0x50b521*/
    v14 = (double)(int)arg8 - v13; /*0x50b52c*/
    if ( v10 == reference && v11->isInSEWorld ) /*0x50b532*/
      *(float *)&v11->unk700 = *(float *)&v11->unk700 + v14; /*0x50b545*/
    else
      sub_4269E0(&v10->super.super.super.super.baseExtraList, v14); /*0x50b558*/
    if ( MEMORY[0xB361AC] ) /*0x50b55d*/
    {
      v12 = ((double (__thiscall *)(PlayerCharacter *))v10->vtbl->super.Unk_94)(v10); /*0x50b570*/
      Interface_ConsolePrint("Actor Crime Gold modified to %.02f ", v12); /*0x50b57d*/
    }
  }
  return 1; /*0x50b4ac*/
}
