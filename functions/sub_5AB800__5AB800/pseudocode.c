double __usercall sub_5AB800@<st0>(
        double a1@<st2>,
        double st6_0@<st1>,
        double result@<st0>,
        int a4,
        int a5,
        int a6,
        char a7)
{
  _DWORD *OpenMenuTile; // eax
  int ParentMenu; // eax
  int v9; // ebx
  EntryData *v10; // ecx
  _DWORD *v11; // eax
  int v12; // esi
  TESObjectREFR *v13; // ebp
  bool v14; // zf
  int v15; // eax
  _DWORD *v16; // esi
  int ExtraCount; // edi
  int v18; // [esp+2Ch] [ebp-4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3EA); /*0x5ab806*/
  if ( OpenMenuTile ) /*0x5ab810*/
  {
    ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x5ab819*/
    v9 = ParentMenu; /*0x5ab81e*/
    if ( ParentMenu ) /*0x5ab822*/
    {
      v10 = *(EntryData **)(ParentMenu + 0x50); /*0x5ab828*/
      if ( v10 ) /*0x5ab82d*/
      {
        ContainerEntryExtraData_HasWorn(v10, 0); /*0x5ab838*/
        v11 = *(_DWORD **)(v9 + 0x50); /*0x5ab83d*/
        v12 = v11[2]; /*0x5ab840*/
        v13 = 0; /*0x5ab843*/
        v14 = *v11 == 0; /*0x5ab845*/
        v15 = CountDelta; /*0x5ab847*/
        v18 = v12; /*0x5ab84c*/
        if ( !v14 && v15 == 1 ) /*0x5ab855*/
        {
          v13 = (TESObjectREFR *)((int (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, int *, _DWORD))reference->vtbl->super.Unk_B2)( /*0x5ab87b*/
                                   reference,
                                   *(_DWORD *)(*(_DWORD *)(v9 + 0x50) + 8),
                                   ***(_DWORD ***)(v9 + 0x50),
                                   1,
                                   &a4,
                                   0);
LABEL_19:
          if ( v12 ) /*0x5ab925*/
          {
            if ( *(_BYTE *)(v12 + 4) == 0x22 && g_liveArrowProjectileCount > 0 ) /*0x5ab934*/
              ArrowProjectile_CleanupMatchingByBaseAndTarget( /*0x5ab948*/
                (TESForm *)v12,
                CountDelta,
                (TESObjectREFR *)reference,
                1,
                1);
          }
          if ( v13 ) /*0x5ab952*/
          {
            if ( a7 ) /*0x5ab959*/
              sub_66E090(reference, a1, st6_0, result, v13); /*0x5ab962*/
          }
          InventoryMenu_InitializeOrUpdate(a1, st6_0); /*0x5ab96e*/
          return result; /*0x5ab96e*/
        }
        v16 = **(_DWORD ***)(v9 + 0x50); /*0x5ab885*/
        if ( v16 && (v16[1] || *v16) ) /*0x5ab890*/
        {
          if ( !v15 ) /*0x5ab896*/
          {
LABEL_18:
            v12 = v18; /*0x5ab91f*/
            goto LABEL_19; /*0x5ab91f*/
          }
          do /*0x5ab8f8*/
          {
            if ( !v16 ) /*0x5ab8a2*/
              break; /*0x5ab8a2*/
            if ( !*v16 ) /*0x5ab8a4*/
              break; /*0x5ab8a8*/
            ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)*v16); /*0x5ab8b1*/
            if ( CountDelta < ExtraDataList_GetExtraCount((ExtraDataList *)*v16) ) /*0x5ab8c3*/
              ExtraCount = CountDelta; /*0x5ab8c5*/
            ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, int *, _DWORD))reference->vtbl->super.Unk_B2)( /*0x5ab8e7*/
              reference,
              *(_DWORD *)(*(_DWORD *)(v9 + 0x50) + 8),
              *v16,
              ExtraCount,
              &a4,
              0);
            v16 = (_DWORD *)v16[1]; /*0x5ab8ee*/
            v15 = CountDelta - ExtraCount; /*0x5ab8f1*/
            v14 = CountDelta == ExtraCount; /*0x5ab8f1*/
            CountDelta = v15; /*0x5ab8f3*/
          }
          while ( !v14 ); /*0x5ab8f8*/
        }
        if ( v15 > 0 ) /*0x5ab8fc*/
          ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, int, int *, _DWORD))reference->vtbl->super.Unk_B2)( /*0x5ab91d*/
            reference,
            *(_DWORD *)(*(_DWORD *)(v9 + 0x50) + 8),
            0,
            v15,
            &a4,
            0);
        goto LABEL_18; /*0x5ab91d*/
      }
    }
  }
  return result; /*0x5ab975*/
}
