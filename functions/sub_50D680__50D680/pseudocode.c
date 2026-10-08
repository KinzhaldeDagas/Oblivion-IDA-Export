bool __cdecl sub_50D680(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  Actor *v8; // esi
  bool result; // al
  double v10; // st7
  double v11; // st7
  double v12; // st7
  UInt16 v13[2]; // [esp+8h] [ebp-4h] BYREF

  *(float *)v13 = 0.0; /*0x50d68b*/
  v8 = (Actor *)a4; /*0x50d68f*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13); /*0x50d6af*/
  if ( result ) /*0x50d6b9*/
  {
    if ( !a4 ) /*0x50d6c0*/
      v8 = (Actor *)reference; /*0x50d6c2*/
    if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) ) /*0x50d6d2*/
    {
      if ( v8->members.super.process ) /*0x50d6d8*/
      {
        v10 = *(float *)v13; /*0x50d6de*/
        if ( *(float *)v13 < dbl_A2FC68 ) /*0x50d6ed*/
          v10 = 0.0; /*0x50d6f1*/
        *(float *)v13 = v10; /*0x50d6f3*/
        v11 = *(float *)v13; /*0x50d6f7*/
        if ( *(float *)v13 > dbl_A2F928 ) /*0x50d706*/
          v11 = 1.0; /*0x50d70a*/
        *(float *)v13 = v11; /*0x50d70c*/
        v12 = ((double (__stdcall *)(_DWORD))v8->members.super.process->Unk_10C)(*(_DWORD *)v13); /*0x50d723*/
        sub_5EE1B0(v8, v12); /*0x50d727*/
      }
    }
    return 1; /*0x50d72c*/
  }
  return result; /*0x50d6bd*/
}
