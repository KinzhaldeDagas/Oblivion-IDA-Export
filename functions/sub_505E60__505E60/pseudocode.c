bool __cdecl sub_505E60(
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
  TESForm *v10; // [esp+0h] [ebp-8h] BYREF
  UInt16 v11[2]; // [esp+4h] [ebp-4h] BYREF

  v10 = 0; /*0x505e8f*/
  *(_DWORD *)v11 = 0; /*0x505e97*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11, &v10); /*0x505e9f*/
  if ( result ) /*0x505ea9*/
  {
    v9 = v10; /*0x505eaf*/
    if ( !v10 ) /*0x505eb4*/
    {
      v9 = reference->vtbl->super.super.super.GetBaseForm(reference); /*0x505ec4*/
      v10 = v9; /*0x505ec6*/
    }
    if ( *(_DWORD *)v11 ) /*0x505ecf*/
      sub_4CAA10(*(ExtraDataList **)v11, v9); /*0x505ed2*/
    return 1; /*0x505ed7*/
  }
  return result; /*0x505eab*/
}
