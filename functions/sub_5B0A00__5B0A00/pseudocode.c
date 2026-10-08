// LockPickMenu input/state handler. Auto-attempt and successful manual tumbler placement both award Security useValue0.
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
  int v10; // eax
  int v11; // eax
  PlayerCharacterVtbl *vtbl; // edi
  BSExtraDataVtbl *Owner; // eax
  _BYTE *v14; // eax
  int v15; // ecx
  PlayerCharacterVtbl *v16; // edi
  BSExtraDataVtbl *v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // ecx
  int *v21; // ecx
  float a2; // [esp+20h] [ebp-10h]
  int v23; // [esp+2Ch] [ebp-4h]
  int v24; // [esp+34h] [ebp+4h]

  OpenMenuTile = (_DWORD *)Menu_GetOpenMenuTile(0x3F6); /*0x5b0a08*/
  if ( OpenMenuTile ) /*0x5b0a12*/
  {
    ParentMenu = (void *)Tile_GetParentMenu(OpenMenuTile); /*0x5b0a1a*/
    if ( ParentMenu ) /*0x5b0a21*/
    {
      if ( OblivionDynamicCast( /*0x5b0a36*/
             ParentMenu,
             0,
             (struct _s_RTTICompleteObjectLocator *)&Menu `RTTI Type Descriptor',
             &LockPickMenu `RTTI Type Descriptor',
             0) )
      {
        if ( a6 == 2 || sub_6DA150(0xA) == 2 ) /*0x5b0a66*/
        {
          sub_5B07E0(a4, a5); /*0x5b0d0b*/
          return; /*0x5b0d0b*/
        }
        if ( *(_DWORD *)(a1 + 0x150) == 4 ) /*0x5b0a73*/
          sub_5B0620(a1); /*0x5b0a77*/
        v10 = *(_DWORD *)(a1 + 0x178); /*0x5b0a7c*/
        if ( v10 && !*(_DWORD *)(v10 + 0x44) /*0x5b0aa1*/
          || (TESObjectREFR_GetItemCount((TESObjectREFR *)reference, (TESForm *)MEMORY[0xB35ECC], ebx0, a3, v23), v11) )
        {
          if ( a6 == 5 ) /*0x5b0aaa*/
          {
            Tile_SetFloat(*(Tile **)(a1 + 0x178), (_DWORD *)0xFAE, 1.0); /*0x5b0ac1*/
            sub_58FBA0(*(_DWORD *)(a1 + 0x178), a4, a5, 1.0, 0); /*0x5b0ace*/
            if ( *(_DWORD *)(a1 + 0x150) == 1 ) /*0x5b0ade*/
              return; /*0x5b0ade*/
            if ( TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38)) ) /*0x5b0ae7*/
            {
              if ( !*(_BYTE *)(a1 + 0x17C) ) /*0x5b0af0*/
              {
                vtbl = reference->vtbl; /*0x5b0b02*/
                Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38)); /*0x5b0b06*/
                if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD, BSExtraDataVtbl *, unsigned int))vtbl->super.Unk_92)( /*0x5b0b21*/
                       reference,
                       *(_DWORD *)(a1 + 0x38),
                       Owner,
                       0xFFFFFFFF) != 0xFFFFFFFF )
                  *(_BYTE *)(a1 + 0x17C) = 1; /*0x5b0b23*/
              }
            }
            BYTE1(dword_B3B0B4[0xD0]) = 1; /*0x5b0b29*/
            *(_BYTE *)(a1 + 0x17C) = 1; /*0x5b0b31*/
            if ( LockPickMenu_TryAutoAttempt((char *)a1) ) /*0x5b0b37*/
            {
              v14 = (_BYTE *)(a1 + 0x94); /*0x5b0b44*/
              v15 = 5; /*0x5b0b4a*/
              do /*0x5b0b5a*/
              {
                v14[1] = 1; /*0x5b0b50*/
                *v14 = 1; /*0x5b0b53*/
                v14 += 0x28; /*0x5b0b55*/
                --v15; /*0x5b0b58*/
              }
              while ( v15 ); /*0x5b0b5a*/
              sub_5B03B0(a1); /*0x5b0b5e*/
              return; /*0x5b0b66*/
            }
LABEL_41:
            sub_5AF200(a1); /*0x5b0cea*/
            return; /*0x5b0cf4*/
          }
        }
        if ( *(int *)(a1 + 0x160) < 0 ) /*0x5b0b70*/
          return; /*0x5b0b70*/
        if ( TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38)) ) /*0x5b0b79*/
        {
          if ( !*(_BYTE *)(a1 + 0x17C) ) /*0x5b0b87*/
          {
            v16 = reference->vtbl; /*0x5b0b98*/
            v17 = TESObjectREFR_GetOwner(*(TESObjectREFR **)(a1 + 0x38)); /*0x5b0b9c*/
            if ( ((int (__thiscall *)(PlayerCharacter *, _DWORD, BSExtraDataVtbl *, unsigned int))v16->super.Unk_92)( /*0x5b0bb7*/
                   reference,
                   *(_DWORD *)(a1 + 0x38),
                   v17,
                   0xFFFFFFFF) != 0xFFFFFFFF )
              *(_BYTE *)(a1 + 0x17C) = 1; /*0x5b0bb9*/
          }
        }
        v18 = *(_DWORD *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x80); /*0x5b0bc8*/
        v19 = a1 + 0x28 * *(_DWORD *)(a1 + 0x160); /*0x5b0bd2*/
        if ( v18 != 0xFFFFFFFF ) /*0x5b0bd5*/
        {
          if ( *(_BYTE *)(v19 + 0x95) ) /*0x5b0bdb*/
            goto LABEL_42; /*0x5b0be2*/
          if ( 0.0 != *(float *)(v19 + 0x7C) && *(_BYTE *)(v19 + 0x94) == 1 ) /*0x5b0bfe*/
          {
            ((void (__stdcall *)(int, _DWORD, _DWORD))reference->vtbl->super.ModExperience)(0x1E, 0, 0.0);// Successful manual tumbler set: Security (0x1E), useValue0, identity scale (0.0). /*0x5b0c1a*/
            if ( reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Security) <= 0x64 ) /*0x5b0c31*/
              v24 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Security); /*0x5b0c4f*/
            else
              v24 = 0x64; /*0x5b0c33*/
            a2 = (float)v24; /*0x5b0c5b*/
            Tile_SetFloat(*(Tile **)(a1 + 0x28), (_DWORD *)0xFB2, a2); /*0x5b0c63*/
            v20 = 5 * *(_DWORD *)(a1 + 0x160); /*0x5b0c6e*/
            *(_DWORD *)(a1 + 0x150) = 1; /*0x5b0c71*/
            *(_BYTE *)(a1 + 8 * v20 + 0x95) = 1; /*0x5b0c77*/
            *(_BYTE *)(a1 + 0x28 * *(_DWORD *)(a1 + 0x160) + 0x94) = 0; /*0x5b0c87*/
            v21 = *(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4)); /*0x5b0c9b*/
            if ( v21 ) /*0x5b0ca0*/
            {
              if ( SoundHandle::IsPlaying(v21) ) /*0x5b0ca2*/
                sub_6B7240(*(int **)(a1 + 0x28 * (*(_DWORD *)(a1 + 0x160) + 4))); /*0x5b0cba*/
            }
            sub_5AFD50("UILockTumblerLock"); /*0x5b0cc6*/
            return; /*0x5b0cc6*/
          }
        }
        if ( !*(_BYTE *)(v19 + 0x95) && v18 == 0xFFFFFFFF && *(_BYTE *)(v19 + 0x94) ) /*0x5b0ce1*/
          goto LABEL_41; /*0x5b0ce8*/
LABEL_42:
        sub_5AFD50("UILockPickAttempt"); /*0x5b0cf7*/
      }
    }
  }
}
