void __userpurge sub_463D70(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  _DWORD *v7; // ecx
  int v8; // esi
  TESForm *v9; // eax
  int v10; // esi
  void *v11; // eax
  int v12; // esi
  TESObjectREFR *v13; // eax
  int *v14; // [esp+8h] [ebp-30h] BYREF
  int v15[11]; // [esp+Ch] [ebp-2Ch] BYREF

  v7 = *(_DWORD **)a1;
  v14 = 0;
  NiTMap_GetAt(v7, a5, &v14);
  if ( v14 )
  {
    if ( (*v14 & 2) != 0 )
    {
      v8 = v14[1];
      if ( v8 )
      {
        qmemcpy(v15, (const void *)(v8 + 4), 0x24u);
        v15[1] = sub_459950(a1, v15[1]);
        v15[2] = sub_459950(a1, v15[2]);
        v9 = sub_4603E0(a1, a2, a3, a5, v15);
        v10 = (int)v9;
        if ( v9 )
        {
          v11 = OblivionDynamicCast(
                  v9,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                  &MagicProjectile `RTTI Type Descriptor',
                  0);
          if ( v11 )
            (*(void (__thiscall **)(void *, int))(*(_DWORD *)v11 + 0x10))(v11, 1);
          else
            TESSaveLoadGame_LoadForm((_DWORD **)a1, a2, a3, a4, v10);
        }
      }
    }
    else if ( *v14 >= 0 )
    {
      PrintError("Reference in cell map has neither required flag.");
    }
    else
    {
      v12 = v14[1];
      if ( v12 )
      {
        qmemcpy(v15, (const void *)(v12 + 4), sizeof(v15));
        v15[0] = sub_459950(a1, v15[0]);
        v15[4] = sub_459950(a1, v15[4]);
        v13 = sub_45C4F0(a5, (int)v15);
        if ( v13 )
          TESSaveLoadGame_LoadForm((_DWORD **)a1, a2, a3, a4, (int)v13);
        BSSimpleList_Remove((_DWORD *)a1 + 8, a5);
      }
    }
  }
}
