char __cdecl sub_5036B0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  int v8; // ecx
  char result; // al
  char v10; // [esp+1h] [ebp-1h] BYREF

  v10 = HIBYTE(v8); /*0x5036b0*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &v10); /*0x5036da*/
  if ( result ) /*0x5036e4*/
    return sub_4F71D0((int)a4, v10, 0, a7); /*0x5036f7*/
  return result; /*0x5036e8*/
}
