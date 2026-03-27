void __usercall sub_5982A0(double a1@<st2>, double a2@<st1>, char a3@<bpl>)
{
  Tile *OpenMenuTile; // eax
  Tile *v5; // esi
  int ParentMenu; // edi
  Actor *v7; // ebx
  BSExtraDataVtbl *Owner; // eax
  double v9; // st7
  BSExtraDataVtbl *v10; // ebp
  _DWORD *v11; // eax
  LowProcess *process; // ecx
  int v13; // eax
  double v14; // st7
  int v15; // ebp
  void *v16; // esi
  int v17; // eax
  int v18; // eax
  double v19; // st7
  int v20; // eax
  int v21; // eax
  int v22; // eax
  Tile *v23; // ebp
  int v24; // esi
  int v25; // eax
  void *v26; // eax
  _DWORD *v27; // eax
  int *v28; // eax
  int *v29; // esi
  PlayerCharacter *v30; // edx
  SInt32 v31; // [esp+24h] [ebp-1Ch]
  char v32; // [esp+3Fh] [ebp-1h]

  if ( !sub_5790E0(0x401, 0) && !sub_5790E0(0x3F8, 0) && !sub_5790E0(0x3E9, 0) )
  {
    OpenMenuTile = (Tile *)Menu_GetOpenMenuTile(0x3F0);
    v5 = OpenMenuTile;
    if ( OpenMenuTile )
    {
      ParentMenu = Tile_GetParentMenu(OpenMenuTile);
      if ( !ParentMenu )
        goto LABEL_39;
      sub_6AC3D0((_DWORD *)OSGlobals->sound);
      sub_5B3E90(a1, a2, a3);
      v7 = (Actor *)OblivionDynamicCast(
                      *(void **)(ParentMenu + 0x44),
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                      &Actor `RTTI Type Descriptor',
                      0);
      v32 = *(_BYTE *)(ParentMenu + 0x63);
      Owner = TESObjectREFR_GetOwner(*(TESObjectREFR **)(ParentMenu + 0x44));
      v9 = fConstant_2;
      v10 = Owner;
      Tile_SetFloat(v5, (_DWORD *)0x1772, fConstant_2);
      v11 = (_DWORD *)Tile_GetParentMenu(v5);
      sub_584740(v11, a1, a2);
      g_ContainerMenu_Quantity = 0xFFFFFFFF;
      if ( v7 )
      {
        if ( Actor_IsNPC(v7) )
        {
          process = v7->members.super.process;
          if ( process )
            ((void (__thiscall *)(LowProcess *, Actor *))process->Unk_C5)(process, v7);
        }
      }
      if ( v32 && !v7->vtbl->super.super.GetKnockedState((TESObjectREFR *)v7) && byte_B13E90 )
      {
        ((void (__userpurge *)(int, int, double@<st0>, double@<st1>, double@<st2>))TESDataHandler_g_PlayerRef->vtbl->super.ModExperience)(
          0x1F,
          1,
          v9,
          a2,
          a1);
        v31 = TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue((Actor *)TESDataHandler_g_PlayerRef, kActorVal_Luck);
        v13 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
        v14 = Calc_LuckModifiedSkill(v13, 0x1F);
        v15 = Double_To_SInt32(v14);
        v16 = OblivionDynamicCast(
                *(void **)(ParentMenu + 0x44),
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                &Actor `RTTI Type Descriptor',
                0);
        v17 = (*(int (__thiscall **)(void *, int, SInt32))(*(_DWORD *)v16 + 0x284))(v16, 7, v31);
        v18 = (*(int (__thiscall **)(void *, int, int))(*(_DWORD *)v16 + 0x284))(v16, 0x1F, v17);
        v19 = Calc_LuckModifiedSkill(v18, COERCE_SIGNED_INT(0.0));
        v20 = Double_To_SInt32(v19);
        v9 = sub_546660(v15, v20, 0.0);
        if ( v21 < GetRandomLargeInteger_(0) % 0x64 )
          ((void (__thiscall *)(PlayerCharacter *, void *, _DWORD, _DWORD))TESDataHandler_g_PlayerRef->vtbl->super.Unk_8F)(
            TESDataHandler_g_PlayerRef,
            v16,
            0,
            0);
      }
      else if ( byte_B3B279 )
      {
        if ( dword_B3B27C > 0 )
        {
          ((void (__thiscall *)(PlayerCharacter *, _DWORD, _DWORD, _DWORD, int, BSExtraDataVtbl *))TESDataHandler_g_PlayerRef->vtbl->super.Unk_8E)(
            TESDataHandler_g_PlayerRef,
            *(_DWORD *)(ParentMenu + 0x44),
            0,
            0,
            dword_B3B27C,
            v10);
          byte_B3B279 = 0;
        }
      }
      if ( *(_BYTE *)(ParentMenu + 0x61) )
      {
        if ( *(_BYTE *)(ParentMenu + 0x62) )
        {
          v22 = Menu_GetOpenMenuTile(0x3F1);
          v23 = (Tile *)v22;
          if ( v22 )
          {
            if ( v7 )
            {
              sub_58FBA0(v22, a1, a2, v9, 0);
              if ( *(_BYTE *)(ParentMenu + 0x55) )
              {
                v24 = Tile_GetParentMenu(v23);
                sub_5EF930(v7);
                *(_BYTE *)(v24 + 0x96) = 1;
                sub_59E030((void **)v24);
              }
              Tile_SetFloat(v23, (_DWORD *)0xFA1, fConstant_2);
            }
          }
        }
        else
        {
          TESDataHandler_g_PlayerRef->pad10D[0] = 0;
        }
      }
      if ( !*(_DWORD *)(ParentMenu + 0x44) )
        goto LABEL_39;
      v25 = *(unsigned __int8 *)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(ParentMenu + 0x44) + 0x170))(*(_DWORD *)(ParentMenu + 0x44))
                               + 4);
      if ( v25 == 0x17 )
      {
        v27 = *(_DWORD **)((*(int (__thiscall **)(_DWORD))(**(_DWORD **)(ParentMenu + 0x44) + 0x170))(*(_DWORD *)(ParentMenu + 0x44))
                         + 0x74);
      }
      else
      {
        if ( (unsigned int)(v25 - 0x23) > 1
          || !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(ParentMenu + 0x44) + 0x198))(
                *(_DWORD *)(ParentMenu + 0x44),
                0) )
        {
          goto LABEL_39;
        }
        v26 = (void *)sub_46B280("DRSBodyClose");
        v27 = OblivionDynamicCast(
                v26,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESSound `RTTI Type Descriptor',
                0);
      }
      if ( v27 )
      {
        if ( OSGlobals->sound )
        {
          OSGLobals_PlaySound(v27[3], 0x121, 0);
          v29 = v28;
          if ( v28 )
          {
            if ( byte_B3B278 )
              sub_6B71F0(v28, 0x14D, 0);
            else
              sub_6B7190(v28, 0);
            sub_6B73E0(v29);
            FormHeapFree((unsigned int)v29);
          }
        }
      }
LABEL_39:
      v30 = TESDataHandler_g_PlayerRef;
      dword_B3B27C = 0;
      LOBYTE(v30->unk124) = 0;
    }
  }
}
