bool __cdecl sub_5075A0(
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
  TESForm *v9; // eax
  UInt16 v10[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10);
  if ( result )
  {
    v9 = *(TESForm **)v10;
    if ( !*(_DWORD *)v10 )
    {
      v9 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
      *(_DWORD *)v10 = v9;
    }
    if ( a4 )
    {
      ExtraDataList::SetOrRemoveExtraOwnership(&a4->member.baseExtraList, v9);
      a4->vtbl->super.MarkAsModified((TESForm *)a4, 0x80);
    }
    return 1;
  }
  return result;
}
