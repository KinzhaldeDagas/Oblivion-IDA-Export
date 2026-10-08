char __cdecl sub_501BA0(
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

  v10 = HIBYTE(v8); /*0x501ba0*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &v10); /*0x501bca*/
  if ( result ) /*0x501bd4*/
    return sub_4F4500((int)a4, v10, 0, a7); /*0x501be7*/
  return result; /*0x501bd8*/
}
