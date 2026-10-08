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

  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v9) ) /*0x50517d*/
  {
    if ( a4 ) /*0x50518b*/
    {
      v8 = ((int (__thiscall *)(TESObjectREFR *, _DWORD))a4->vtbl->Unk_4F)(a4, 0); /*0x505199*/
      if ( v8 ) /*0x50519d*/
        (*(void (__thiscall **)(int, UInt16 *))(*(_DWORD *)v8 + 0xD8))(v8, v9); /*0x5051ae*/
    }
  }
}
