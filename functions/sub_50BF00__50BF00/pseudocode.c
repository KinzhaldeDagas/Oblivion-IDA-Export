bool __cdecl sub_50BF00(
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

  *(_DWORD *)v10 = 0; /*0x50bf30*/
  v11 = 0; /*0x50bf38*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v10, &v11); /*0x50bf40*/
  if ( result ) /*0x50bf4a*/
  {
    v9 = *(_DWORD *)v10; /*0x50bf5a*/
    if ( v11 ) /*0x50bf5c*/
      *(_BYTE *)(*(_DWORD *)v10 + 0x34) |= 0x80u; /*0x50bf5e*/
    else
      *(_BYTE *)(*(_DWORD *)v10 + 0x34) &= ~0x80u; /*0x50bf6f*/
    (*(void (__thiscall **)(int, int))(*(_DWORD *)v9 + 0x40))(v9, 4); /*0x50bf67*/
    return 1; /*0x50bf69*/
  }
  return result; /*0x50bf4c*/
}
