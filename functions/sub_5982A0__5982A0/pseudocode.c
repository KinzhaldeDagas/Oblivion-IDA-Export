// Container-menu close/resolution handler. When the opened container is an actor and the pickpocket state applies, it awards Sneak useValue1 before the native detection/crime comparison.
void __usercall sub_5982A0(double a1@<st2>, double a2@<st1>)
{
  Tile *OpenMenuTile; // eax
  Tile *v4; // esi
  int ParentMenu; // edi
  Actor *v6; // ebx
  BSExtraDataVtbl *Owner; // eax
  double v8; // st7
  BSExtraDataVtbl *v9; // ebp
  _DWORD *v10; // eax
  LowProcess *process; // ecx
  SInt32 v12; // eax
  double v13; // st7
  int v14; // ebp
  void *v15; // esi
  int v16; // eax
  SInt32 v17; // eax
  double v18; // st7
  int v19; // eax
  int v20; // eax
  int v21; // eax
  Tile *v22; // ebp
  int v23; // esi
  int v24; // eax
  void *v25; // eax
  void **v26; // eax
  int *sound; // ecx
  int *v28; // eax
  int *v29; // esi
  PlayerCharacter *v30; // edx
  SInt32 v31; // [esp+24h] [ebp-1Ch]
  char v32; // [esp+3Fh] [ebp-1h]

  if ( !InterfaceManager_IsMenuVisibleByID(0x401, 0) /*0x5982d6*/
    && !InterfaceManager_IsMenuVisibleByID(0x3F8, 0)
    && !InterfaceManager_IsMenuVisibleByID(0x3E9, 0) )
  {
    OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F0); /*0x5982ec*/
    v4 = OpenMenuTile; /*0x5982f1*/
    if ( OpenMenuTile ) /*0x5982f8*/
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile); /*0x598306*/
      if ( !ParentMenu ) /*0x59830a*/
        goto LABEL_39; /*0x59830a*/
      sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x59831a*/
      sub_5B3E90(a1, a2); /*0x59831f*/
      v6 = (Actor *)OblivionDynamicCast( /*0x598344*/
                      *(void **)(ParentMenu + 0x44),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      v32 = *(_BYTE *)(ParentMenu + 0x63); /*0x598346*/
      Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)(ParentMenu + 0x44)); /*0x59834a*/
      v8 = fConstant_2; /*0x59834f*/
      v9 = Owner; /*0x598360*/
      Tile_SetFloat(v4, (_DWORD *)0x1772, fConstant_2); /*0x598362*/
      v10 = (_DWORD *)Tile_GetParentMenu(v4); /*0x598369*/
      Menu::StartFadeOut(v10, a2); /*0x598370*/
      g_ContainerMenu_Quantity = 0xFFFFFFFF; /*0x598377*/
      if ( v6 ) /*0x598381*/
      {
        if ( Actor_IsNPC(v6) ) /*0x598385*/
        {
          process = v6->members.super.process; /*0x59838e*/
          if ( process ) /*0x598393*/
            ((void (__thiscall *)(LowProcess *, Actor *))process->Unk_C5)(process, v6); /*0x59839e*/
        }
      }
      if ( v32 && !v6->vtbl->super.super.GetKnockedState((TESObjectREFR *)v6) && byte_B13E90 ) /*0x5983bf*/
      {
        a1 = 0.0; /*0x5983d1*/
        ((void (__userpurge *)(int, int, double@<st0>, double@<st1>))reference->vtbl->super.ModExperience)( /*0x5983e3*/
          0x1F,
          1,
          v8,
          a2);                                  // Actor-container/pickpocket resolution: Sneak (0x1F), useValue1, identity scale (0.0).
        v31 = reference->vtbl->super.GetActorValue((Actor *)reference, kActorVal_Luck); /*0x5983fd*/
        v12 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x598408*/
        v13 = Calc_LuckModifiedSkill(v12, 0x1F); /*0x59840b*/
        v14 = Double_To_SInt32(v13); /*0x598421*/
        v15 = OblivionDynamicCast( /*0x59842e*/
                *(void **)(ParentMenu + 0x44),
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        v16 = (*(int (__thiscall **)(void *, int, SInt32))(*(_DWORD *)v15 + 0x284))(v15, 7, v31); /*0x59843f*/
        v17 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)v15 + 0x284))(v15, 0x1F, v16); /*0x59844e*/
        v18 = Calc_LuckModifiedSkill(v17, COERCE_SINT32(0.0)); /*0x598451*/
        v19 = Double_To_SInt32(v18); /*0x598456*/
        v8 = sub_546660(v14, v19, 0.0); /*0x598465*/
        if ( v20 < Game_RandomLargeInteger(0) % 0x64 ) /*0x598490*/
          ((void (__thiscall *)(PlayerCharacter *, void *, _DWORD, _DWORD))reference->vtbl->super.Unk_8F)( /*0x5984a5*/
            reference,
            v15,
            0,
            0);
      }
      else if ( BYTE1(dword_B3B0B4[0x71]) ) /*0x5984a9*/
      {
        if ( dword_B3B0B4[0x72] > 0 ) /*0x5984b9*/
        {
          ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, _DWORD, int, BSExtraDataVtbl *))reference->vtbl->super.Unk_8E)( /*0x5984d3*/
            reference,
            *(_DWORD *)(ParentMenu + 0x44),
            0,
            0,
            dword_B3B0B4[0x72],
            v9);
          BYTE1(dword_B3B0B4[0x71]) = 0; /*0x5984d5*/
        }
      }
      if ( *(_BYTE *)(ParentMenu + 0x61) ) /*0x5984dc*/
      {
        if ( *(_BYTE *)(ParentMenu + 0x62) ) /*0x5984e2*/
        {
          v21 = Menu_GetOpenMenuTile(0x3F1); /*0x5984ed*/
          v22 = (Tile *)v21; /*0x5984f2*/
          if ( v21 ) /*0x5984f9*/
          {
            if ( v6 ) /*0x5984fd*/
            {
              sub_58FBA0(v21, a1, a2, v8, 0); /*0x598503*/
              if ( *(_BYTE *)(ParentMenu + 0x55) ) /*0x598508*/
              {
                v23 = Tile_GetParentMenu(v22); /*0x598517*/
                Actor::StopDialoguePlayback(v6); /*0x598519*/
                *(_BYTE *)(v23 + 0x96) = 1; /*0x598520*/
                sub_59E030((void **)v23); /*0x598527*/
              }
              Tile_SetFloat(v22, (_DWORD *)0xFA1, fConstant_2); /*0x59853d*/
            }
          }
        }
        else
        {
          reference->pad10D[0] = 0; /*0x598549*/
        }
      }
      if ( !*(_DWORD *)(ParentMenu + 0x44) ) /*0x598550*/
        goto LABEL_39; /*0x598556*/
      v24 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(ParentMenu + 0x44) + 0x170))(*(_DWORD *)(ParentMenu + 0x44)) /*0x598569*/
                               + 4);
      if ( v24 == 0x17 ) /*0x598570*/
      {
        v26 = *(void ***)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(ParentMenu + 0x44) + 0x170))(*(_DWORD *)(ParentMenu + 0x44)) /*0x5985ca*/
                        + 0x74);
      }
      else
      {
        if ( (unsigned int)(v24 - 0x23) > 1 /*0x59858d*/
          || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(ParentMenu + 0x44) + 0x198))(
                *(_DWORD *)(ParentMenu + 0x44),
                0) )
        {
          goto LABEL_39; /*0x598591*/
        }
        v25 = (void *)sub_46B280("DRSBodyClose"); /*0x5985aa*/
        v26 = (void **)OblivionDynamicCast( /*0x5985b3*/
                         v25,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         &TESSound `RTTI Type Descriptor',
                         0);
      }
      if ( v26 ) /*0x5985cf*/
      {
        sound = (int *)MEMORY[0xB33398]->sound; /*0x5985d7*/
        if ( sound ) /*0x5985dc*/
        {
          v28 = OSGLobals_PlaySound(sound, v26[3], 0x121, 0); /*0x5985e9*/
          v29 = v28; /*0x5985ee*/
          if ( v28 ) /*0x5985f2*/
          {
            if ( LOBYTE(dword_B3B0B4[0x71]) ) /*0x5985f4*/
              sub_6B71F0(v28, 0x14D, 0); /*0x59860d*/
            else
              sub_6B7190(v28, 0); /*0x598601*/
            sub_6B73E0(v29); /*0x598614*/
            FormHeapFree((unsigned int)v29); /*0x59861a*/
          }
        }
      }
LABEL_39:
      v30 = reference; /*0x598622*/
      dword_B3B0B4[0x72] = 0; /*0x598628*/
      LOBYTE(v30->unk124) = 0; /*0x598632*/
    }
  }
}
