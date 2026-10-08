bool __cdecl sub_50D5E0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  _DWORD *v8; // esi
  bool result; // al
  int v10; // ecx
  UInt16 v11[2]; // [esp+14h] [ebp-4h] BYREF

  *(float *)v11 = 0.0; /*0x50d5e5*/
  v8 = OblivionDynamicCast( /*0x50d609*/
         a4,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
         &Actor `RTTI Type Descriptor',
         0);
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v11); /*0x50d627*/
  if ( result ) /*0x50d631*/
  {
    if ( v8 ) /*0x50d639*/
    {
      v10 = v8[0x16]; /*0x50d63b*/
      if ( v10 ) /*0x50d640*/
        (*(void (__stdcall **)(_DWORD))(*(_DWORD *)v10 + 0x3E0))(*(_DWORD *)v11); /*0x50d652*/
      if ( MEMORY[0xB361AC] ) /*0x50d654*/
        Interface_ConsolePrint("Package duration is set to  %.02f ", *(float *)v11); /*0x50d66c*/
    }
    return 1; /*0x50d675*/
  }
  return result; /*0x50d633*/
}
