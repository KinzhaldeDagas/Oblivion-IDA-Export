bool __cdecl sub_504BB0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  double *v8; // ebx
  bool result; // al
  void *v10; // eax
  double *v11; // [esp-Ch] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-8h] BYREF
  int v13; // [esp+Ch] [ebp-4h] BYREF

  v8 = a7; /*0x504bb6*/
  *a7 = 0.0; /*0x504bba*/
  a7 = 0; /*0x504bef*/
  v12 = 0; /*0x504bf7*/
  v13 = 0; /*0x504bff*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, &v12, &v13); /*0x504c07*/
  if ( result ) /*0x504c11*/
  {
    v11 = a7; /*0x504c21*/
    v10 = OblivionDynamicCast( /*0x504c31*/
            a4,
            0,
            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
            &Actor `RTTI Type Descriptor',
            0);
    if ( sub_675C40(&qword_B3BB2C[0x75], v13, v12, (int)v10, (unsigned int)v11, 0, 0xFFFFFFFF) ) /*0x504c49*/
      *v8 = 1.0; /*0x504c54*/
    return 1; /*0x504c57*/
  }
  return result; /*0x504c13*/
}
