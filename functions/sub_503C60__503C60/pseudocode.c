bool __cdecl sub_503C60(
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
  UInt16 v9[2]; // [esp+0h] [ebp-8h] BYREF
  float v10; // [esp+4h] [ebp-4h] BYREF

  *(float *)v9 = 0.0; /*0x503c6d*/
  v10 = 0.0; /*0x503c71*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v9, &v10); /*0x503c99*/
  if ( result ) /*0x503ca3*/
  {
    *(float *)v9 = fabs(*(float *)v9); /*0x503cb0*/
    *(float *)OB_RendererGlobalState_010201A0.pad_0B3 = *(float *)v9; /*0x503cb6*/
    v10 = fabs(v10); /*0x503cc2*/
    flt_B2C73C = v10; /*0x503cca*/
    return 1; /*0x503cac*/
  }
  return result; /*0x503ca5*/
}
