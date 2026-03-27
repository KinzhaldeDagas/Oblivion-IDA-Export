void __userpurge sub_59A400(
        int a1@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        signed int a5,
        TESObjectREFR *a6)
{
  char *v7; // ecx
  char v8; // al
  PlayerCharacter *v9; // ecx
  TESObjectREFR *v10; // edi
  double v11; // st7
  TESForm *v12; // eax
  EntryData *InventoryEntryOfItem; // esi
  const char *v14; // ecx
  int v15; // edx
  _BYTE *v16; // eax
  float *Singleton; // eax
  double WeightForForm_Fast; // st7
  int v19; // ebp
  TESObjectREFR *v20; // ecx
  TESForm *type; // eax
  char *v22; // eax
  bool v23; // zf
  int v24; // edi
  double v25; // st7
  CHAR *v26; // eax
  NiNode *Health; // eax
  const char *v28; // edi
  CHAR *v29; // eax
  const char *v30; // edi
  CHAR *v31; // eax
  const char *v32; // edi
  CHAR *v33; // eax
  CHAR *v34; // eax
  int v35; // edx
  int v36; // eax
  PlayerCharacter *v37; // eax
  int v38; // eax
  PlayerCharacter *v39; // eax
  double v40; // st7
  int v41; // eax
  int v42; // edi
  int v43; // edx
  int v44; // edi
  TESForm *v45; // eax
  void *data; // ecx
  void *v47; // edi
  void (__thiscall *ModExperience)(Actor *, UInt32, UInt32, float); // edx
  int v49; // edi
  double v50; // st7
  signed int v51; // edi
  float *v52; // eax
  void *v53; // eax
  double v54; // st7
  int v55; // edi
  void *v56; // ebp
  TESChildCELL *v57; // eax
  PlayerCharacter *v58; // ecx
  PlayerCharacter *v59; // ecx
  PlayerCharacterVtbl *vtbl; // edx
  int v61; // eax
  int v62; // eax
  double v63; // st7
  int v64; // eax
  int v65; // eax
  double v66; // st7
  int v67; // eax
  char *v68; // eax
  int v69; // edi
  char *Name; // eax
  int v71; // edi
  int v72; // eax
  int v73; // eax
  int v74; // ecx
  int v75; // eax
  BSExtraDataVtbl *v76; // eax
  tListVoid *extendData; // edi
  int v78; // ebp
  BaseExtraList *v79; // edi
  tListVoid *next; // ebp
  signed __int16 ExtraCount; // ax
  int v82; // edi
  BaseExtraList *v83; // ebp
  double v84; // st7
  int v85; // eax
  Tile *v86; // ecx
  double v87; // st7
  double v88; // st7
  int v89; // eax
  Tile *v90; // ecx
  char v91; // al
  TESForm *v92; // ebp
  TESObjectREFR *v93; // edi
  ExtraDataList *****ContainerChanges; // esi
  double v95; // st7
  char v96; // al
  TESObjectREFR *v97; // esi
  TESObjectREFR *v98; // ebx
  double v99; // st7
  double v100; // st7
  double Float; // st7
  int v102; // eax
  signed int v103; // edi
  double v104; // st7
  char *v105; // [esp+50h] [ebp-37Ch]
  const char *v106; // [esp+5Ch] [ebp-370h]
  const char *v107; // [esp+5Ch] [ebp-370h]
  const char *v108; // [esp+5Ch] [ebp-370h]
  char *v109; // [esp+5Ch] [ebp-370h]
  float v110; // [esp+60h] [ebp-36Ch]
  int v111; // [esp+60h] [ebp-36Ch]
  int v112; // [esp+60h] [ebp-36Ch]
  int v113; // [esp+60h] [ebp-36Ch]
  char v114; // [esp+60h] [ebp-36Ch]
  int v115; // [esp+60h] [ebp-36Ch]
  const char *a2; // [esp+64h] [ebp-368h]
  float a2a; // [esp+64h] [ebp-368h]
  TESForm *a2b; // [esp+64h] [ebp-368h]
  float a2c; // [esp+64h] [ebp-368h]
  float a2d; // [esp+64h] [ebp-368h]
  float a2e; // [esp+64h] [ebp-368h]
  float a2f; // [esp+64h] [ebp-368h]
  float a2g; // [esp+64h] [ebp-368h]
  float a2h; // [esp+64h] [ebp-368h]
  _DWORD *v125; // [esp+68h] [ebp-364h]
  char v126; // [esp+7Fh] [ebp-34Dh]
  char v127; // [esp+7Fh] [ebp-34Dh]
  float v128; // [esp+80h] [ebp-34Ch]
  float v129; // [esp+80h] [ebp-34Ch]
  float v130; // [esp+80h] [ebp-34Ch]
  int v131; // [esp+80h] [ebp-34Ch]
  BaseExtraList **v132; // [esp+80h] [ebp-34Ch]
  bool v133; // [esp+87h] [ebp-345h]
  __int64 v134; // [esp+88h] [ebp-344h] BYREF
  TESChildCELL *v135; // [esp+90h] [ebp-33Ch]
  PlayerCharacter *v136; // [esp+94h] [ebp-338h]
  PlayerCharacter *v137; // [esp+98h] [ebp-334h] BYREF
  char Format[800]; // [esp+9Ch] [ebp-330h] BYREF
  unsigned int v139; // [esp+3C8h] [ebp-4h]

  v135 = (TESChildCELL *)a6;
  if ( sub_5790E0(0x3E9, 0) )
    return;
  if ( (unsigned int)(a5 - 1) <= 4 )
  {
    sub_57DE50(5);
    sub_599200((int *)a1, a4, a5, (int)a6);
    return;
  }
  if ( a5 == 7 || a5 == 8 )
  {
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE);
    v102 = Double_To_SInt32(Float);
    if ( a5 == 7 )
      v103 = v102 - 1;
    else
      v103 = v102 + 1;
    v135 = (TESChildCELL *)v103;
    if ( v103 >= 1 )
    {
      if ( v103 <= 5 )
      {
LABEL_215:
        sub_57DE50(6);
        v104 = (double)(int)v135;
        a2h = v104;
        Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAE, a2h);
        sub_599200((int *)a1, v104, v103, 0);
        return;
      }
      v103 = 1;
    }
    else
    {
      v103 = 5;
    }
    v135 = (TESChildCELL *)v103;
    goto LABEL_215;
  }
  if ( (unsigned int)(a5 - 0x10) <= 4 )
  {
    v7 = (char *)(a1 + 0x60);
    if ( (*(_BYTE *)(a1 + 0x60) & 0x7F) == a5 - 0x10 )
    {
      sub_597A60(v7);
    }
    else
    {
      sub_597A40(v7, a5 - 0x10);
      *(_BYTE *)(a1 + 0x60) &= ~0x80u;
    }
    ContainerMenu_Update(st5_0, a3);
    return;
  }
  if ( a5 != 0x33 )
  {
    if ( a5 == 0x2A )
    {
      if ( !*(_BYTE *)(a1 + 0x64) )
        return;
      sub_57DE50(0xE);
      v84 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5);
      v85 = Double_To_SInt32(v84);
      v86 = *(Tile **)(a1 + 0x2C);
      a2c = flt_A6B618;
      *(_DWORD *)(a1 + 0x4C) = v85;
      Tile_SetFloat(v86, (_DWORD *)0xFB7, a2c);
      a2d = (float)*(int *)(a1 + 0x48);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, a2d);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0);
      v87 = 1.0;
      *(_BYTE *)(a1 + 0x64) = *(_BYTE *)(a1 + 0x64) == 0;
    }
    else
    {
      if ( a5 != 0x2B )
      {
        switch ( a5 )
        {
          case ' ':
            v91 = *(_BYTE *)(a1 + 0x64);
            v92 = (TESForm *)TESDataHandler_g_PlayerRef;
            if ( v91 )
              v93 = *(TESObjectREFR **)(a1 + 0x44);
            else
              v93 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
            if ( !v91 )
              v92 = *(TESForm **)(a1 + 0x44);
            ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v93->member.baseExtraList);
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x44) + 0x190))(*(_DWORD *)(a1 + 0x44)) )
              sub_4876C0(ContainerChanges, *(_DWORD *)(a1 + 0x44));
            if ( ContainerChanges )
            {
              v95 = sub_492E70((float *)ContainerChanges, st5_0, a4, a3, v93, v92, (unsigned __int8)byte_B3B279, 0, 0);
              dword_B3B27C = Double_To_SInt32(v95);
            }
            if ( dword_B3B7D0 > 0 )
              sub_607B90(v93, 1);
            sub_57DE50(0x1D);
            byte_B3B278 = 1;
            sub_5982A0(st5_0, a3, (char)v92);
            break;
          case '"':
            v96 = *(_BYTE *)(a1 + 0x64);
            if ( v96 )
              v97 = *(TESObjectREFR **)(a1 + 0x44);
            else
              v97 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
            if ( v96 )
              v98 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
            else
              v98 = *(TESObjectREFR **)(a1 + 0x44);
            sub_57DE50(1);
            if ( v97 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
            {
              v99 = sub_422DC0(&v98->member.baseExtraList);
              LODWORD(v134) = Double_To_SInt32(v99);
              sub_5BD080((char)a6, st5_0, a3, &v134, v98, 0);
            }
            else
            {
              v100 = sub_422DC0(&v97->member.baseExtraList);
              v137 = (PlayerCharacter *)Double_To_SInt32(v100);
              sub_5BD080((char)a6, st5_0, a3, &v137, v97, 1);
            }
            break;
          case '!':
            Tile_SetFloat((Tile *)a6, (_DWORD *)0xFA7, flt_A40098);
            if ( *(_BYTE *)(a1 + 0x61) )
              sub_446C10((unsigned int ****)TESDataHandler);
            sub_57DE50(2);
            sub_5982A0(st5_0, a3, (char)a6);
            break;
        }
        return;
      }
      if ( *(_BYTE *)(a1 + 0x64) )
        return;
      sub_57DE50(0xE);
      v88 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5);
      v89 = Double_To_SInt32(v88);
      v90 = *(Tile **)(a1 + 0x2C);
      a2e = flt_A6B618;
      *(_DWORD *)(a1 + 0x48) = v89;
      Tile_SetFloat(v90, (_DWORD *)0xFB7, a2e);
      a2f = (float)*(int *)(a1 + 0x4C);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, a2f);
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0);
      v87 = fConstant_2;
      *(_BYTE *)(a1 + 0x64) = *(_BYTE *)(a1 + 0x64) == 0;
    }
    a2g = v87;
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFB5, a2g);
    ContainerMenu_Update(st5_0, a3);
    return;
  }
  if ( *(_BYTE *)(a1 + 0x54) )
    return;
  v8 = *(_BYTE *)(a1 + 0x64);
  v9 = TESDataHandler_g_PlayerRef;
  if ( v8 )
  {
    v10 = *(TESObjectREFR **)(a1 + 0x44);
    v136 = (PlayerCharacter *)v10;
  }
  else
  {
    v136 = TESDataHandler_g_PlayerRef;
    v10 = (TESObjectREFR *)v9;
  }
  if ( v8 )
    v137 = v9;
  else
    v137 = *(PlayerCharacter **)(a1 + 0x44);
  v126 = 1;
  if ( *(_BYTE *)(a1 + 0x63) )
    byte_B13E90 = 0;
  v11 = Tile_GetFloat(a6, 0xFB9);
  v12 = (TESForm *)Double_To_SInt32(v11);
  if ( v10 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
  {
    InventoryEntryOfItem = GetInventoryEntryOfItem(v10, v12, 0);
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))InventoryEntryOfItem->type->vtbl->Unk_1E)(InventoryEntryOfItem->type) )
    {
      v14 = (const char *)dword_B38568;
LABEL_24:
      GameUI_QueueMessage(v14, 0, 1u, flt_A30634);
LABEL_25:
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v15);
      FormHeapFree((unsigned int)InventoryEntryOfItem);
      return;
    }
    if ( TESDataHandler_g_PlayerRef->vtbl->super.GetMountedHorse(TESDataHandler_g_PlayerRef)
      && TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedWeaponData(
           TESDataHandler_g_PlayerRef->super.super.super.process,
           0)
      && (unsigned __int8)ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0)
      && InventoryEntryOfItem->type == TESDataHandler_g_PlayerRef->super.super.super.process->GetEquippedWeaponData(
                                         TESDataHandler_g_PlayerRef->super.super.super.process,
                                         0)->type )
    {
      v14 = (const char *)TESObjectREFR;
      goto LABEL_24;
    }
  }
  else
  {
    InventoryEntryOfItem = GetInventoryEntryOfItem(v10, v12, *(_BYTE *)(a1 + 0x61));
  }
  if ( !InventoryEntryOfItem )
    goto LABEL_171;
  if ( !InventoryEntryOfItem->extendData || (v16 = InventoryEntryOfItem->extendData->node.data) == 0 || !sub_41DF50(v16) )
  {
    Singleton = (float *)InterfaceManager_GetSingleton(0, 1);
    WeightForForm_Fast = sub_57F9F0(Singleton, st5_0, v11, a3, 0.0, (_DWORD *)0xFDD, 0);
    v19 = *(_DWORD *)(a1 + 0x44);
    if ( byte_B3B27A && *(_BYTE *)(a1 + 0x61) || !*(_BYTE *)(a1 + 0x61) )
    {
      v20 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      type = InventoryEntryOfItem->type;
      if ( v10 == (TESObjectREFR *)TESDataHandler_g_PlayerRef )
        sub_5E99C0(v20, v19, st5_0, a3, WeightForForm_Fast, type, 0, 0);
      else
        sub_5E99C0(v20, v19, st5_0, a3, WeightForForm_Fast, type, 1, 0);
    }
    v22 = (char *)g_ContainerMenu_Quantity;
    v23 = g_ContainerMenu_Quantity == 0xFFFFFFFF;
    v24 = 1;
    LODWORD(v134) = 1;
    if ( v23 )
    {
      if ( v137 == TESDataHandler_g_PlayerRef
        && (sub_469980((int)InventoryEntryOfItem->type)
         || !*(_BYTE *)(a1 + 0x61) && InventoryEntryOfItem->type == (TESForm *)TESDataHandler_g_Lockpick) )
      {
        g_ContainerMenu_Quantity = (int)TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem);
      }
      else if ( (int)TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem) >= dword_B38688 )
      {
        *(_BYTE *)(a1 + 0x54) = 1;
        Health = TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem);
        sub_5C05D0(v19, 1, st5_0, a3, (int)&g_ContainerMenu_Quantity, 0x33, (int)v135, (signed int)Health, 0);
        goto LABEL_25;
      }
    }
    else
    {
      v24 = (int)v22;
      LODWORD(v134) = v22;
    }
    v133 = 0;
    if ( !*(_BYTE *)(a1 + 0x61) )
      goto LABEL_93;
    if ( !byte_B3B27A )
    {
      v134 = 0;
      v23 = v136 == TESDataHandler_g_PlayerRef;
      v139 = 0;
      if ( v23 )
      {
        v128 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 0, *(float *)&v125);
        if ( g_ContainerMenu_Quantity != 0xFFFFFFFF )
          v128 = (double)g_ContainerMenu_Quantity * v128;
        a3 = v128;
        v25 = v128;
        if ( v128 < 1.0 )
        {
          byte_B3B288 = 1;
          if ( v24 <= 1 )
          {
            v28 = *(const char **)dword_B38CC0;
            v29 = sub_488DF0(InventoryEntryOfItem);
            BSStringT_Static_Format((BSStringT *)&v134, "%s %s?", v28, v29);
          }
          else
          {
            v19 = *(_DWORD *)dword_B38CC0;
            v26 = sub_488DF0(InventoryEntryOfItem);
            BSStringT_Static_Format((BSStringT *)&v134, "%s %i %s?", (const char *)v19, v24, v26);
          }
          goto LABEL_69;
        }
        a2 = (const char *)dword_B38D20;
        v110 = v128;
        if ( v24 == 1 )
        {
          v30 = *(const char **)dword_B38CB8;
          v25 = FloatFloor(v128);
          v111 = Double_To_SInt32(v25);
          v106 = (const char *)dword_B38D10;
          v31 = sub_488DF0(InventoryEntryOfItem);
          BSStringT_Static_Format((BSStringT *)&v134, "%s %s %s %i %s?", v30, v31, v106, v111, a2);
LABEL_69:
          v114 = MessageButtonTextNo;
          v109 = (char *)MessageButtonTextYes;
          dword_B3B280 = (int)v135;
          v105 = (char *)v134;
          dword_B3B284 = 0x33;
          ShowUIMessageBox(v109, v19, st5_0, a3, v25, v105, (int)ContainerMenuCallback, 1, v109, v114);
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v35);
          FormHeapFree((unsigned int)InventoryEntryOfItem);
          v139 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v134);
          return;
        }
        v19 = *(_DWORD *)dword_B38CB8;
      }
      else
      {
        v129 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 1, *(float *)&v125);
        if ( g_ContainerMenu_Quantity != 0xFFFFFFFF )
          v129 = (double)g_ContainerMenu_Quantity * v129;
        a2 = (const char *)dword_B38D20;
        v110 = v129;
        if ( v24 == 1 )
        {
          v32 = *(const char **)dword_B38CB0;
          v25 = FloatFloor(v129);
          v112 = Double_To_SInt32(v25);
          v107 = (const char *)dword_B38D10;
          v33 = sub_488DF0(InventoryEntryOfItem);
          BSStringT_Static_Format((BSStringT *)&v134, "%s %s %s %i %s?", v32, v33, v107, v112, a2);
          goto LABEL_69;
        }
        v19 = *(_DWORD *)dword_B38CB0;
      }
      v25 = FloatFloor(v110);
      v113 = Double_To_SInt32(v25);
      v108 = (const char *)dword_B38D10;
      v34 = sub_488DF0(InventoryEntryOfItem);
      BSStringT_Static_Format((BSStringT *)&v134, "%s %i %s %s %i %s?", (const char *)v19, v24, v34, v108, v113, a2);
      goto LABEL_69;
    }
    sub_484B70((ExtraDataList ***)InventoryEntryOfItem);
    if ( v36 )
    {
      sub_484B70((ExtraDataList ***)InventoryEntryOfItem);
      v133 = v37 != TESDataHandler_g_PlayerRef;
    }
    if ( v136 == TESDataHandler_g_PlayerRef )
    {
      v130 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 0, *(float *)&v125);
      if ( g_ContainerMenu_Quantity != 0xFFFFFFFF )
        v130 = (double)g_ContainerMenu_Quantity * v130;
      sub_484B70((ExtraDataList ***)InventoryEntryOfItem);
      if ( v38 )
      {
        sub_484B70((ExtraDataList ***)InventoryEntryOfItem);
        if ( v39 != TESDataHandler_g_PlayerRef )
          v133 = 1;
      }
      if ( v130 >= 1.0 && !sub_5E10F0((void *)v19, *(float *)&TESDataHandler_g_PlayerRef) )
      {
LABEL_80:
        v40 = FloatFloor(v130);
        v41 = Double_To_SInt32(v40);
        *(float *)&v134 = sub_5489E0(-v41);
        (*(void (__thiscall **)(int, PlayerCharacter *, char *))(*(_DWORD *)v19 + 0x374))(
          v19,
          TESDataHandler_g_PlayerRef,
          (char *)v134);
        v42 = TESTopic::GEtTopic(5, 2);
        sub_6AC3D0((_DWORD *)OSGlobals->sound);
        (*(void (__thiscall **)(int, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v19 + 0xDC))(
          v19,
          v42,
          TESDataHandler_g_PlayerRef,
          1,
          1,
          0);
        WeightForForm_Fast = flt_A30634;
        GameUI_QueueMessage((const char *)sOfferRefused, 0, 1u, flt_A30634);
        v126 = 0;
        goto LABEL_92;
      }
      WeightForForm_Fast = FloatFloor(v130);
      v134 = (__int64)WeightForForm_Fast;
      v44 = (__int64)WeightForForm_Fast;
      if ( sub_5FAA70((_BYTE *)v19) < (unsigned int)v44 )
      {
        v49 = TESTopic::GEtTopic(5, 2);
        sub_6AC3D0((_DWORD *)OSGlobals->sound);
        (*(void (__thiscall **)(int, int, PlayerCharacter *, _DWORD, int, _DWORD))(*(_DWORD *)v19 + 0xDC))(
          v19,
          v49,
          TESDataHandler_g_PlayerRef,
          0,
          1,
          0);
        GameUI_QueueMessage("Merchant does not have enough gold.", 0, 1u, flt_A30634);
        g_ContainerMenu_Quantity = 1;
        *(_BYTE *)(a1 + 0x54) = 0;
        goto LABEL_25;
      }
      if ( v44 > 0 )
      {
        *(float *)&v134 = sub_5489E0((__int64)WeightForForm_Fast);
        (*(void (__thiscall **)(int, PlayerCharacter *, char *))(*(_DWORD *)v19 + 0x374))(
          v19,
          TESDataHandler_g_PlayerRef,
          (char *)v134);
        byte_B3B27A = 0;
        v45 = TESDataHandler_LookupFormByID((TESForm *)0xF);
        TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)v45, 0, v44);
        data = 0;
        if ( InventoryEntryOfItem->extendData )
          data = InventoryEntryOfItem->extendData->node.data;
        if ( v133 )
          TESDataHandler_g_PlayerRef->AmountStolenSold += v44;
        WeightForForm_Fast = Script_AddEventToExtraScript(TESDataHandler_g_PlayerRef, data, 0x4000);
        LODWORD(v134) = TESTopic::GEtTopic(5, 7);
        if ( (_DWORD)v134 )
        {
          v47 = OblivionDynamicCast(
                  *(void **)(a1 + 0x44),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
          if ( v47 )
          {
            sub_6AC3D0((_DWORD *)OSGlobals->sound);
            (*(void (__thiscall **)(void *, char *, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v47 + 0xDC))(
              v47,
              (char *)v134,
              TESDataHandler_g_PlayerRef,
              1,
              1,
              0);
          }
        }
      }
      if ( !byte_B3B288 )
      {
        ModExperience = TESDataHandler_g_PlayerRef->vtbl->super.ModExperience;
        LODWORD(v134) = (signed int)TESDataHandler_g_PlayerRef->unk11C / 0x64;
        WeightForForm_Fast = (double)(int)v134;
        a2a = WeightForForm_Fast;
        ((void (__stdcall *)(int, _DWORD, _DWORD))ModExperience)(0x1D, 0, LODWORD(a2a));
      }
    }
    else
    {
      v130 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 1, *(float *)&v125);
      if ( g_ContainerMenu_Quantity != 0xFFFFFFFF )
        v130 = (double)g_ContainerMenu_Quantity * v130;
      if ( v130 >= 1.0 && !sub_5E10F0((void *)v19, *(float *)&TESDataHandler_g_PlayerRef) )
        goto LABEL_80;
      v50 = FloatFloor(v130);
      v51 = Double_To_SInt32(v50);
      if ( sub_5E4420((Actor *)TESDataHandler_g_PlayerRef) >= v51 )
      {
        *(float *)&v135 = sub_5489E0(v51);
        (*(void (__thiscall **)(int, PlayerCharacter *, TESChildCELL *))(*(_DWORD *)v19 + 0x374))(
          v19,
          TESDataHandler_g_PlayerRef,
          v135);
        if ( v51 > 0 )
        {
          v52 = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
          sub_491700(v52, st5_0, a3, *(float *)&v135, (TESObjectREFR *)TESDataHandler_g_PlayerRef, v51, 0);
        }
        v53 = 0;
        if ( InventoryEntryOfItem->extendData )
          v53 = InventoryEntryOfItem->extendData->node.data;
        v54 = Script_AddEventToExtraScript(v19, v53, 0x4000);
        sub_44D340((_DWORD *)TESDataHandler, a3, v54, (int)InventoryEntryOfItem, v134, (TESObjectREFR *)v19);
        g_ContainerMenu_Quantity = 0xFFFFFFFF;
        v55 = TESTopic::GEtTopic(5, 6);
        if ( v55 )
        {
          v56 = OblivionDynamicCast(
                  *(void **)(a1 + 0x44),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
          if ( v56 )
          {
            sub_6AC3D0((_DWORD *)OSGlobals->sound);
            (*(void (__thiscall **)(void *, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v56 + 0xDC))(
              v56,
              v55,
              TESDataHandler_g_PlayerRef,
              1,
              1,
              0);
          }
        }
        sub_446C10((unsigned int ****)TESDataHandler);
        if ( *(_DWORD *)(TESDataHandler + 0xCDC) )
          sub_448F40((_DWORD *)TESDataHandler, a3, v54, *(TESObjectREFR **)(a1 + 0x44));
        ContainerMenu_Update(st5_0, a3);
        goto LABEL_25;
      }
      WeightForForm_Fast = flt_A30634;
      GameUI_QueueMessage((const char *)sNotEnoughGold, 0, 1u, flt_A30634);
      v126 = 0;
    }
LABEL_92:
    byte_B3B288 = 0;
    if ( !v126 )
    {
LABEL_170:
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v43);
      FormHeapFree((unsigned int)InventoryEntryOfItem);
      v10 = (TESObjectREFR *)v136;
LABEL_171:
      v23 = v10 == (TESObjectREFR *)TESDataHandler_g_PlayerRef;
      byte_B3B27A = 0;
      if ( v23 )
        sub_5C1900();
      return;
    }
LABEL_93:
    if ( g_ContainerMenu_Quantity == 0xFFFFFFFF )
      g_ContainerMenu_Quantity = 1;
    if ( *(_BYTE *)(a1 + 0x63) )
    {
      if ( v136 == TESDataHandler_g_PlayerRef )
      {
        a2b = InventoryEntryOfItem->type;
        byte_B3B279 = 0;
        WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast((int)a2b);
        *(float *)&v134 = WeightForForm_Fast;
        if ( Actor_IsNPC(*(Actor **)(a1 + 0x44))
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x44) + 0x198))(
                *(_DWORD *)(a1 + 0x44),
                0) )
        {
          WeightForForm_Fast = 0.0;
          if ( *(float *)&v134 > 0.0 )
          {
            ShowUIMessageBox((char *)sOk, v19, st5_0, a3, 0.0, (const char *)dword_B38C40, 0, 1, (const char *)sOk, 0);
            goto LABEL_25;
          }
        }
      }
    }
    v57 = (TESChildCELL *)OblivionDynamicCast(
                            *(void **)(a1 + 0x44),
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v23 = *(_BYTE *)(a1 + 0x63) == 0;
    v135 = v57;
    if ( !v23 )
    {
      v58 = TESDataHandler_g_PlayerRef;
      if ( v136 == TESDataHandler_g_PlayerRef )
        goto LABEL_128;
      v127 = 0;
      sub_4842E0((int)InventoryEntryOfItem);
      v59 = TESDataHandler_g_PlayerRef;
      vtbl = TESDataHandler_g_PlayerRef->vtbl;
      LODWORD(v134) = g_ContainerMenu_Quantity * v61;
      v115 = ((int (__thiscall *)(PlayerCharacter *))vtbl->super.GetActorValue)(v59);
      v62 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
      v63 = Calc_LuckModifiedSkill(v62, 0x1F);
      v131 = Double_To_SInt32(v63);
      v64 = (*(int (__thiscall **)(char *, int, int))(*(_DWORD *)v134 + 0x284))((char *)v134, 7, v115);
      v65 = (*(int (__thiscall **)(char *, int, int))(*(_DWORD *)v134 + 0x284))((char *)v134, 0x1F, v64);
      v66 = Calc_LuckModifiedSkill(v65, 7);
      v67 = Double_To_SInt32(v66);
      WeightForForm_Fast = sub_546660(v134, v67, *(float *)&v131);
      LODWORD(v134) = v68;
      v69 = GetRandomLargeInteger_(0) % (int)0xFFFFFF9C;
      if ( (int)v134 > v69 )
      {
        if ( !sub_469980((int)InventoryEntryOfItem->type) )
          TESDataHandler_g_PlayerRef->miscStats[0x1D] += g_ContainerMenu_Quantity;
      }
      else
      {
        v127 = 1;
      }
      Name = TESObjectREFR_GetName((TESObjectREFR *)v135);
      _sprintf(Format, "%s %s %d %s %d ", Name, "pickpocketed  chance of ", (_DWORD)v134, "random chance is ", v69);
      PrintToLog___(Format);
      if ( v127 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 0x19C))(v19) )
      {
        byte_B3B279 = 0;
        sub_5982A0(st5_0, a3, v19);
        ((void (__thiscall *)(PlayerCharacter *, TESChildCELL *, TESForm *, int))TESDataHandler_g_PlayerRef->vtbl->super.Unk_8F)(
          TESDataHandler_g_PlayerRef,
          v135,
          InventoryEntryOfItem->type,
          g_ContainerMenu_Quantity);
        goto LABEL_25;
      }
    }
    v58 = TESDataHandler_g_PlayerRef;
LABEL_128:
    v23 = byte_B3B279 == 0;
    LODWORD(v134) = InventoryEntryOfItem->type;
    if ( !v23 && v136 != v58 )
    {
      v71 = (int)v58->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v58);
      sub_484B70((ExtraDataList ***)InventoryEntryOfItem);
      if ( v72 == v71 )
      {
        byte_B3B279 = 0;
      }
      else
      {
        sub_4842E0((int)InventoryEntryOfItem);
        v74 = v73;
        v75 = g_ContainerMenu_Quantity;
        dword_B3B27C += g_ContainerMenu_Quantity * v74;
        TESDataHandler_g_PlayerRef->miscStats[0x1C] += v75;
      }
    }
    if ( *(_BYTE *)(a1 + 0x61) )
    {
      if ( v19 )
      {
        v76 = sub_420680((ExtraDataList *)(v19 + 0x44));
        if ( v76 )
          v137 = (PlayerCharacter *)v76;
        byte_B3B279 = 0;
      }
    }
    extendData = InventoryEntryOfItem->extendData;
    if ( InventoryEntryOfItem->extendData )
    {
      v78 = g_ContainerMenu_Quantity;
      if ( g_ContainerMenu_Quantity == 1 )
      {
        v79 = (BaseExtraList *)extendData->node.data;
        if ( v133 && (*(_BYTE *)(a1 + 0x61) || InventoryEntryOfItem->type->member.type == kFormType_Ammo) )
          ExtraDataList_RemoveOwner(v79);
        v136->vtbl->super.super.super.RemoveItem(
          (TESObjectREFR *)v136,
          InventoryEntryOfItem->type,
          v79,
          g_ContainerMenu_Quantity,
          (unsigned __int8)byte_B3B279,
          0,
          (TESObjectREFR *)v137,
          0,
          0,
          1,
          0);
LABEL_161:
        if ( *(_BYTE *)(a1 + 0x61) )
        {
          sub_446C10((unsigned int ****)TESDataHandler);
          sub_448F40((_DWORD *)TESDataHandler, a3, WeightForForm_Fast, *(TESObjectREFR **)(a1 + 0x44));
        }
        if ( *(float *)&v135 != 0.0 )
        {
          if ( (*((int (__thiscall **)(TESChildCELL *))v135->vtbl + 0x55))(v135) )
          {
            (*(void (__thiscall **)(void *, TESChildCELL *, int, _DWORD, _DWORD))(*(_DWORD *)v135[0x16].vtbl + 0x42C))(
              v135[0x16].vtbl,
              v135,
              1,
              0,
              0);
            if ( (_DWORD)v134 )
            {
              if ( *(_BYTE *)(v134 + 4) == 0x22 && dword_B3B7D0 > 0 )
                sub_607F90((_BYTE *)v134, 0x7FFFFFFF, v135, 1, 0);
            }
          }
        }
        g_ContainerMenu_Quantity = 0xFFFFFFFF;
        ContainerMenu_Update(st5_0, a3);
        goto LABEL_170;
      }
      if ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)InventoryEntryOfItem->extendData) )
      {
        v132 = (BaseExtraList **)extendData;
        if ( v78 )
        {
          next = extendData;
          do
          {
            if ( !next )
              break;
            if ( !next->node.data )
              break;
            ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)next->node.data);
            v82 = ExtraCount;
            if ( ExtraCount > 0 )
            {
              if ( g_ContainerMenu_Quantity < ExtraDataList_GetExtraCount((ExtraDataList *)next->node.data) )
                v82 = g_ContainerMenu_Quantity;
              v83 = *v132;
              if ( v133 && (*(_BYTE *)(a1 + 0x61) || InventoryEntryOfItem->type->member.type == kFormType_Ammo) )
                ExtraDataList_RemoveOwner(*v132);
              v136->vtbl->super.super.super.RemoveItem(
                (TESObjectREFR *)v136,
                InventoryEntryOfItem->type,
                v83,
                v82,
                (unsigned __int8)byte_B3B279,
                0,
                (TESObjectREFR *)v137,
                0,
                0,
                1,
                0);
              g_ContainerMenu_Quantity -= v82;
              next = (tListVoid *)v132;
            }
            next = (tListVoid *)next->node.next;
            v132 = (BaseExtraList **)next;
          }
          while ( g_ContainerMenu_Quantity );
        }
      }
    }
    if ( g_ContainerMenu_Quantity > 0 )
      v136->vtbl->super.super.super.RemoveItem(
        (TESObjectREFR *)v136,
        InventoryEntryOfItem->type,
        0,
        g_ContainerMenu_Quantity,
        (unsigned __int8)byte_B3B279,
        0,
        (TESObjectREFR *)v137,
        0,
        0,
        1,
        0);
    goto LABEL_161;
  }
}
