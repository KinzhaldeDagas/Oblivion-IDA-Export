bool __cdecl sub_506AF0(
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
  void *v9; // esi
  int v10; // edi
  int v11; // eax
  UInt16 v12[2]; // [esp+0h] [ebp-4h] BYREF
  void *retaddr; // [esp+4h] [ebp+0h]

  *(_DWORD *)v12 = 0; /*0x506b1a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12); /*0x506b22*/
  if ( result ) /*0x506b2c*/
  {
    v9 = OblivionDynamicCast( /*0x506b45*/
           a4,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    if ( *(_DWORD *)v12 ) /*0x506b50*/
    {
      if ( v9 ) /*0x506b54*/
      {
        v10 = **(_DWORD **)v12; /*0x506b59*/
        v11 = (*(int (__thiscall **)(void *, unsigned int))(*(_DWORD *)v9 + 0x170))(v9, 0xFFFFFFFF); /*0x506b65*/
        (*(void (__thiscall **)(void *, void *, int))(v10 + 0x248))(retaddr, v9, v11); /*0x506b73*/
      }
    }
    return 1; /*0x506b76*/
  }
  return result; /*0x506b30*/
}
