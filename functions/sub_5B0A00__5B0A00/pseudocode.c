void __userpurge sub_5B0A00(
        int a1@<ecx>,
        int ebx0@<ebx>,
        int a3@<edi>,
        double a4@<st2>,
        double a5@<st1>,
        int a6,
        int a7)
{
  _DWORD *OpenMenuTile; // eax
  void *ParentMenu; // eax
  int v12; // eax
  int v13; // eax
  PlayerCharacterVtbl *vtbl; // edi
  BSExtraDataVtbl *Owner; // eax
  _BYTE *v16; // eax
  int v17; // ecx
  PlayerCharacterVtbl *v18; // edi
  BSExtraDataVtbl *v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // ecx
  int *v23; // ecx
  float a2; // [esp+20h] [ebp-10h]
  int v25; // [esp+2Ch] [ebp-4h]
  int v26; // [esp+34h] [ebp+4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F6);
  if ( OpenMenuTile )
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile);
    if ( ParentMenu )
    {
      if ( OblivionDynamicCast(
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &LockPickMenu `RTTI Type Descriptor',
             0) )
      {
        if ( a6 == 2 || sub_6DA150(0xA) == 2 )
        {
          sub_5B07E0(a4, a5);
          return;
        }
        if ( *(_DWORD *)(a1 + 0x150) == 4 )
          sub_5B0620(a1);
        v12 = *(_DWORD *)(a1 + 0x178);
        if ( v12 && !*(_DWORD *)(v12 + 0x44)
          || (TESObjectREF_GetItemCount(
                (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                TESDataHandler_g_SkeletonKey,
                ebx0,
                a3,
                v25),
              v13) )
        {
          if ( a6 == 5 )
          {
            Tile_SetFloat(*(Tile **)(a1 + 0x178), (_DWORD *)0xFAE, 1.0);
            sub_58FBA0(*(_DWORD *)(a1 + 0x178), a4, a5, 1.0, 0);
            if ( *(_DWORD *)(a1 + 0x150) == 1 )
              return;
            if ( TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38)) )
            {
              if ( !*(_BYTE *)(a1 + 0x17C) )
              {
                vtbl = TESDataHandler_g_PlayerRef->vtbl;
                Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38));
                if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD, BSExtraDataVtbl *, unsigned int))vtbl->super.Unk_92)(
                       TESDataHandler_g_PlayerRef,
                       *(_DWORD *)(a1 + 0x38),
                       Owner,
                       0xFFFFFFFF) != 0xFFFFFFFF )
                  *(_BYTE *)(a1 + 0x17C) = 1;
              }
            }
            byte_B3B3F5 = 1;
            *(_BYTE *)(a1 + 0x17C) = 1;
            if ( sub_5B0260((char *)a1) )
            {
              v16 = (_BYTE *)(a1 + 0x94);
              v17 = 5;
              do
              {
                v16[1] = 1;
                *v16 = 1;
                v16 += 0x28;
                --v17;
              }
              while ( v17 );
              sub_5B03B0(a1);
              return;
            }
LABEL_41:
            sub_5AF200(a1);
            return;
          }
        }
        if ( *(int *)(a1 + 0x160) < 0 )
          return;
        if ( TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38)) )
        {
          if ( !*(_BYTE *)(a1 + 0x17C) )
          {
            v18 = TESDataHandler_g_PlayerRef->vtbl;
            v19 = TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38));
            if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD, BSExtraDataVtbl *, unsigned int))v18->super.Unk_92)(
                   TESDataHandler_g_PlayerRef,
                   *(_DWORD *)(a1 + 0x38),
                   v19,
                   0xFFFFFFFF) != 0xFFFFFFFF )
              *(_BYTE *)(a1 + 0x17C) = 1;
          }
        }
        v20 = *(_DWORD *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x80);
        v21 = a1 + 0x28 * *(_DWORD *)(a1 + 0x160);
        if ( v20 != 0xFFFFFFFF )
        {
          if ( *(_BYTE *)(v21 + 0x95) )
            goto LABEL_42;
          if ( 0.0 != *(float *)(v21 + 0x7C) && *(_BYTE *)(v21 + 0x94) == 1 )
          {
            ((void (__stdcall *)(int, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.ModExperience)(
              0x1E,
              0,
              0.0);
            if ( TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                   (Actor *)TESDataHandler_g_PlayerRef,
                   kActorVal_Security) <= 0x64 )
              v26 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue(
                      (Actor *)TESDataHandler_g_PlayerRef,
                      kActorVal_Security);
            else
              v26 = 0x64;
            a2 = (float)v26;
            Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFB2, a2);
            v22 = 5 * *(_DWORD *)(a1 + 0x160);
            *(_DWORD *)(a1 + 0x150) = 1;
            *(_BYTE *)(a1 + 8 * v22 + 0x95) = 1;
            *(_BYTE *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x94) = 0;
            v23 = *(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4));
            if ( v23 )
            {
              if ( sub_6B7260(v23) )
                sub_6B7240(*(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4)));
            }
            sub_5AFD50("UILockTumblerLock");
            return;
          }
        }
        if ( !*(_BYTE *)(v21 + 0x95) && v20 == 0xFFFFFFFF && *(_BYTE *)(v21 + 0x94) )
          goto LABEL_41;
LABEL_42:
        sub_5AFD50("UILockPickAttempt");
      }
    }
  }
}
