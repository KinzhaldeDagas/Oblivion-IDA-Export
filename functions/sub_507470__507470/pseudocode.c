bool __usercall sub_507470@<al>(
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
  bool result; // al
  ExtraContainerChanges_Data *ContainerChanges; // eax
  UInt16 v13[2]; // [esp+4h] [ebp-8h] BYREF
  int v14; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v13 = 0; /*0x5074a1*/
  v14 = 0; /*0x5074a9*/
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v13, &v14); /*0x5074b1*/
  if ( result ) /*0x5074bb*/
  {
    if ( a4 ) /*0x5074c4*/
    {
      if ( a4 != (TESObjectREFR *)0xFFFFFFBC ) /*0x5074cb*/
      {
        ContainerChanges = ExtraDataList_GetContainerChanges(&a4->member.baseExtraList); /*0x5074cd*/
        if ( ContainerChanges ) /*0x5074d4*/
          sub_48DA00(ContainerChanges, st5_0, a2, st7_0, (EntryData *)a4, *(TESObjectREFR **)v13); /*0x5074de*/
      }
    }
    return 1; /*0x5074e3*/
  }
  return result; /*0x5074bd*/
}
