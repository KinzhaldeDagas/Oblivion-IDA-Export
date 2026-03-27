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

  *(float *)v13 = 0.0;
  v8 = (Actor *)a4;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v13);
  if ( result )
  {
    if ( !a4 )
      v8 = (Actor *)TESDataHandler_g_PlayerRef;
    if ( v8->vtbl->super.super.IsActor((TESObjectREFR *)v8) )
    {
      if ( v8->members.super.process )
      {
        v10 = *(float *)v13;
        if ( *(float *)v13 < dbl_A2FC68 )
          v10 = 0.0;
        *(float *)v13 = v10;
        v11 = *(float *)v13;
        if ( *(float *)v13 > dbl_A2F928 )
          v11 = 1.0;
        *(float *)v13 = v11;
        v12 = ((double (__stdcall *)(_DWORD))v8->members.super.process->Unk_10C)(*(_DWORD *)v13);
        sub_5EE1B0(v8, v12);
      }
    }
    return 1;
  }
  return result;
}
