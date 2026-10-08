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

  *(_DWORD *)v10 = 0; /*0x5075ca*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10); /*0x5075d2*/
  if ( result ) /*0x5075dc*/
  {
    v9 = *(TESForm **)v10; /*0x5075e1*/
    if ( !*(_DWORD *)v10 ) /*0x5075e7*/
    {
      v9 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x5075f7*/
      *(_DWORD *)v10 = v9; /*0x5075f9*/
    }
    if ( a4 ) /*0x5075ff*/
    {
      ExtraDataList::SetOrRemoveExtraOwnership(&a4->member.baseExtraList, v9); /*0x507605*/
      a4->vtbl->super.MarkAsModified((TESForm *)a4, 0x80); /*0x507616*/
    }
    return 1; /*0x507618*/
  }
  return result; /*0x5075e0*/
}
