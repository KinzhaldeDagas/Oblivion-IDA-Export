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

  *(_DWORD *)v13 = 0;
  v14 = 0;
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v13, &v14);
  if ( result )
  {
    if ( a4 )
    {
      if ( a4 != (TESObjectREFR *)0xFFFFFFBC )
      {
        ContainerChanges = ExtraDataList_GetContainerChanges(&a4->member.baseExtraList);
        if ( ContainerChanges )
          sub_48DA00(ContainerChanges, st5_0, a2, st7_0, (int)a4, *(TESObjectREFR **)v13);
      }
    }
    return 1;
  }
  return result;
}
