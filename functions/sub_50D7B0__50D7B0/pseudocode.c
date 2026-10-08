// Native SetNoRumors command. Stores an actor override only when the requested value differs from the base NoRumors flag; matching the base removes type 0x5A. It never invalidates cached INFOGENERAL type 0x59.
bool __cdecl Cmd_SetNoRumors_Execute(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  Actor *v9; // eax
  Actor *v10; // esi
  char v11; // bl
  TESForm *ActorBaseForm; // eax
  ExtraDataList *p_baseExtraList; // ecx
  UInt16 v14[2]; // [esp+4h] [ebp-8h] BYREF
  int v15; // [esp+8h] [ebp-4h]

  *(_DWORD *)v14 = 0; /*0x50d7dc*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v14); /*0x50d7e4*/
  if ( result ) /*0x50d7ee*/
  {
    v9 = (Actor *)OblivionDynamicCast( /*0x50d804*/
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
    v10 = v9; /*0x50d809*/
    if ( v9 ) /*0x50d810*/
    {
      v11 = 0; /*0x50d813*/
      LOBYTE(v15) = 0; /*0x50d81a*/
      if ( *(_DWORD *)v14 ) /*0x50d81e*/
      {
        v11 = 1; /*0x50d820*/
        LOBYTE(v15) = 1; /*0x50d822*/
      }
      ActorBaseForm = Actor_GetActorBaseForm(v9, 0); /*0x50d82a*/
      p_baseExtraList = &v10->members.super.super.baseExtraList; /*0x50d83e*/
      if ( v11 == (((int)ActorBaseForm[1].member.modlist.data & 0x2000) != 0) )// If requested NoRumors equals the base NPC flag, remove the per-reference type-0x5A override. This comparison and removal do not touch cached INFOGENERAL type 0x59. /*0x50d841*/
      {
        ExtraDataList::RemoveNoRumorsOverride(p_baseExtraList); /*0x50d843*/
        return 1; /*0x50d84e*/
      }
      ExtraDataList::SetNoRumors(p_baseExtraList, v15);// Store a type-0x5A override because requested NoRumors differs from the base flag. The cached type-0x59 rumor MenuTopic remains intact. /*0x50d854*/
    }
    return 1; /*0x50d859*/
  }
  return result; /*0x50d7f0*/
}
