bool __cdecl sub_50C620(
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
  int *v9; // edi
  int v10; // esi
  int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  UInt16 v15[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v15 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v15);
  if ( result )
  {
    if ( a4 )
    {
      v9 = (int *)OblivionDynamicCast(
                    a4,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
      if ( *(_DWORD *)v15 )
      {
        if ( sub_5E0F30(*(_DWORD ***)v15) )
        {
          v10 = *(_DWORD *)(*(_DWORD *)v15 + 0x58);
          v11 = *v9;
          v12 = (*(int (__thiscall **)(int))(*(_DWORD *)v10 + 0x37C))(v10);
          v13 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x380))(v10, v12);
          v14 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v10 + 0x378))(v10, v13);
          (*(void (__thiscall **)(int *, ParamInfo *, int))(v11 + 0x300))(v9, a1, v14);
        }
      }
    }
    return 1;
  }
  return result;
}
