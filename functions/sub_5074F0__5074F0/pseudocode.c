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
  float *ContainerChanges; // eax
  double v13; // st7
  int v14; // edx
  int v15; // [esp+4h] [ebp-Ch] BYREF
  int v16; // [esp+8h] [ebp-8h]
  UInt16 v17[2]; // [esp+Ch] [ebp-4h] BYREF

  *(_DWORD *)v17 = 0;
  v15 = 0;
  result = Script_ExtractArgs(a1, a5, a3, a4, a7, a8, l, v17, &v15);
  if ( result )
  {
    LOBYTE(v16) = v15 != 0;
    if ( a4 )
    {
      if ( a4 != (TESObjectREFR *)0xFFFFFFBC )
      {
        ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&a4->member.baseExtraList);
        if ( ContainerChanges )
        {
          v13 = sub_492E70(ContainerChanges, st5_0, st7_0, a2, a4, *(TESForm **)v17, 0, v16, 0);
          sub_665260((TESObjectREFR *)TESDataHandler_g_PlayerRef, v13, v14, (PlayerCharacter *)a4);
        }
      }
    }
    return 1;
  }
  return result;
}
