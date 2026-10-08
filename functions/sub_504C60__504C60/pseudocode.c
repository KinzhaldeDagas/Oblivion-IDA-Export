char __cdecl sub_504C60(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        unsigned int a7,
        UInt32 *a3)
{
  double *v8; // edi
  char result; // al
  UInt16 v10[2]; // [esp+8h] [ebp-4h] BYREF

  v8 = (double *)a7; /*0x504c6d*/
  *(double *)a7 = 0.0; /*0x504c75*/
  a7 = 0xFFFFFFFF; /*0x504c98*/
  *(_DWORD *)v10 = 0; /*0x504ca0*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &a7); /*0x504ca8*/
  if ( result ) /*0x504cb2*/
  {
    if ( a4 ) /*0x504cba*/
      return sub_4F7AF0((int)a4, *(int *)v10, a7, v8); /*0x504cc8*/
    else
      return 1; /*0x504cd5*/
  }
  return result; /*0x504cb4*/
}
