void __cdecl sub_505120(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  int v8; // eax
  UInt16 v9[2]; // [esp+14h] [ebp-204h] BYREF

  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v9) )
  {
    if ( a4 )
    {
      v8 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl->Unk_4F)(a4, 0);
      if ( v8 )
        (*(void (__thiscall **)(int, UInt16 *))(*(_DWORD *)v8 + 0xD8))(v8, v9);
    }
  }
}
