void __cdecl sub_512AE0(
        ParamInfo *a1,
        UInt8 *arg4,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  UInt16 v8[2]; // [esp+10h] [ebp-20Ch] BYREF
  UInt32 *a3; // [esp+14h] [ebp-208h]
  char a2[4]; // [esp+18h] [ebp-204h] BYREF

  a3 = a8;
  *(_DWORD *)v8 = 0;
  if ( Script_ExtractArgs(a1, arg4, a8, a4, argC, a5, l, v8, a2) )
  {
    if ( *(_DWORD *)v8 )
    {
      BSStringT_Set((BSStringT *)(*(_DWORD *)v8 + 0x1C), a2, 0);
      (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)v8 + 0x40))(*(_DWORD *)v8, 0x10);
    }
  }
}
