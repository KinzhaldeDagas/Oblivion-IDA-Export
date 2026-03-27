bool __cdecl sub_50BE80(
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
  UInt16 v10[2]; // [esp+0h] [ebp-8h] BYREF
  int v11; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v10 = 0;
  v11 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11);
  if ( result )
  {
    v9 = *(_DWORD *)v10;
    if ( v11 )
      *(_BYTE *)(*(_DWORD *)v10 + 0x34) |= 0x20u;
    else
      *(_BYTE *)(*(_DWORD *)v10 + 0x34) &= ~0x20u;
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x40))(v9, 4);
    return 1;
  }
  return result;
}
