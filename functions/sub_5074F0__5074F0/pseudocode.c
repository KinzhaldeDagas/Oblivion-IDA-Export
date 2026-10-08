bool __usercall sub_5074F0@<al>(
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
  double v13; // st7
  int v14; // [esp+4h] [ebp-Ch] BYREF
  int v15; // [esp+8h] [ebp-8h]
  UInt16 v16[2]; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v16 = 0; /*0x507521*/
  v14 = 0; /*0x507529*/
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v16, &v14); /*0x507531*/
  if ( result ) /*0x50753b*/
  {
    LOBYTE(v15) = v14 != 0; /*0x50754e*/
    if ( a4 ) /*0x507555*/
    {
      if ( a4 != (TESObjectREFR *)0xFFFFFFBC ) /*0x50755c*/
      {
        ContainerChanges = ExtraDataList_GetContainerChanges(&a4->member.baseExtraList); /*0x50755e*/
        if ( ContainerChanges ) /*0x507565*/
        {
          v13 = sub_492E70(ContainerChanges, st5_0, st7_0, a2, a4, *(TESForm **)v16, 0, v15, 0); /*0x507578*/
          sub_665260((TESObjectREFR *)reference, v13, (PlayerCharacter *)a4); /*0x507586*/
        }
      }
    }
    return 1; /*0x50758b*/
  }
  return result; /*0x50753d*/
}
