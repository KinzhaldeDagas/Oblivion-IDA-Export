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

  *(double *)a7 = 0.0;
  a7 = 0;
  v12 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, &a7, &v12);
  if ( result )
  {
    if ( a7 )
    {
      v9 = a7 + 0x24;
      if ( v12 > 0 )
      {
        v10 = *(void (__stdcall **)(int))(*(_DWORD *)v9 + 0x50);
        *(_DWORD *)(a7 + 0x28) |= 2u;
        v10(0x10);
        return 1;
      }
      v11 = *(void (__stdcall **)(int))(*(_DWORD *)v9 + 0x50);
      *(_DWORD *)(a7 + 0x28) &= ~2u;
      v11(0x10);
    }
    return 1;
  }
  return result;
}
