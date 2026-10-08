bool __cdecl sub_50B3E0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        double *a7,
        UInt32 *a3)
{
  bool result; // al
  int v9; // eax
  UInt16 v10[2]; // [esp+18h] [ebp-10h] BYREF
  int v11; // [esp+1Ch] [ebp-Ch] BYREF
  __int64 v12; // [esp+20h] [ebp-8h]

  *(_DWORD *)v10 = 0; /*0x50b412*/
  v11 = 0; /*0x50b41a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11); /*0x50b422*/
  if ( result ) /*0x50b42c*/
  {
    v12 = (__int64)sub_507010(flt_A4CAE0, *(_DWORD *)v10 + 1); /*0x50b46b*/
    v9 = v12; /*0x50b46f*/
    *a7 = 0.0; /*0x50b479*/
    if ( a4 ) /*0x50b47b*/
    {
      if ( l ) /*0x50b47f*/
      {
        if ( sub_4FB5F0(l, v11, v9) ) /*0x50b489*/
          *a7 = 1.0; /*0x50b494*/
      }
    }
    return 1; /*0x50b498*/
  }
  return result; /*0x50b42e*/
}
