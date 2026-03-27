bool __cdecl sub_50AFD0(
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
  _DWORD *v9; // eax
  _DWORD *v10; // esi
  int v11; // ecx
  UInt16 v12[2]; // [esp+4h] [ebp-4h] BYREF

  *(_DWORD *)v12 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v12);
  if ( result )
  {
    if ( a4 )
    {
      if ( *(_DWORD *)v12 )
      {
        v9 = OblivionDynamicCast(
               a4,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
               &Actor `RTTI Type Descriptor',
               0);
        v10 = v9;
        if ( v9 )
        {
          v11 = v9[0x16];
          if ( v11 )
          {
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)v11 + 0x488))(v11, *(_DWORD *)v12);
            sub_423970((ExtraDataList *)(v10 + 0x11), *(BSExtraDataVtbl **)v12);
          }
        }
      }
    }
    return 1;
  }
  return result;
}
