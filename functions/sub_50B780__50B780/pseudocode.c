bool __cdecl sub_50B780(
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
  int v9; // ecx
  void (__stdcall *v10)(int); // eax
  void (__stdcall *v11)(int); // eax
  int v12; // [esp+0h] [ebp-4h] BYREF

  *(double *)a7 = 0.0; /*0x50b78a*/
  a7 = 0; /*0x50b7b5*/
  v12 = 0; /*0x50b7bd*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, &v12); /*0x50b7c5*/
  if ( result ) /*0x50b7cf*/
  {
    if ( a7 ) /*0x50b7d9*/
    {
      v9 = a7 + 0x24; /*0x50b7df*/
      if ( v12 > 0 ) /*0x50b7e2*/
      {
        v10 = *(void (__stdcall **)(int))(*(_DWORD *)v9 + 0x50); /*0x50b7e6*/
        *(_DWORD *)(a7 + 0x28) |= 2u; /*0x50b7e9*/
        v10(0x10); /*0x50b7ef*/
        return 1; /*0x50b7f4*/
      }
      v11 = *(void (__stdcall **)(int))(*(_DWORD *)v9 + 0x50); /*0x50b7f7*/
      *(_DWORD *)(a7 + 0x28) &= ~2u; /*0x50b7fa*/
      v11(0x10); /*0x50b800*/
    }
    return 1; /*0x50b802*/
  }
  return result; /*0x50b7d1*/
}
