// Barter/inventory transaction handler. Its skill path awards Mercantile useValue0 with scale trunc(PlayerCharacter+0x11C / 100).
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
  PlayerCharacter *v97; // esi
  PlayerCharacter *v98; // ebx
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

  v135 = (TESChildCELL *)a6; /*0x59a44b*/
  if ( InterfaceManager_IsMenuVisibleByID(0x3E9, 0) ) /*0x59a44f*/
    return; /*0x59a459*/
  if ( (unsigned int)(a5 - 1) <= 4 ) /*0x59a46c*/
  {
    sub_57DE50(5); /*0x59a470*/
    sub_599200((int *)a1, a4, a5, (int)a6); /*0x59a47a*/
    return; /*0x59a47a*/
  }
  if ( a5 == 7 || a5 == 8 ) /*0x59a48b*/
  {
    Float = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 4), 0xFAE); /*0x59b5b2*/
    v102 = Double_To_SInt32(Float); /*0x59b5b7*/
    if ( a5 == 7 ) /*0x59b5c1*/
      v103 = v102 - 1; /*0x59b5c3*/
    else
      v103 = v102 + 1; /*0x59b5c8*/
    v135 = (TESChildCELL *)v103; /*0x59b5ce*/
    if ( v103 >= 1 ) /*0x59b5d2*/
    {
      if ( v103 <= 5 ) /*0x59b5de*/
      {
LABEL_215:
        sub_57DE50(6); /*0x59b5e9*/
        v104 = (double)(int)v135; /*0x59b5f0*/
        a2h = v104; /*0x59b5f7*/
        Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFAE, a2h); /*0x59b5ff*/
        sub_599200((int *)a1, v104, v103, 0); /*0x59b609*/
        return; /*0x59b609*/
      }
      v103 = 1; /*0x59b5e0*/
    }
    else
    {
      v103 = 5; /*0x59b5d4*/
    }
    v135 = (TESChildCELL *)v103; /*0x59b5e5*/
    goto LABEL_215; /*0x59b5e5*/
  }
  if ( (unsigned int)(a5 - 0x10) <= 4 ) /*0x59a497*/
  {
    v7 = (char *)(a1 + 0x60); /*0x59a4a8*/
    if ( (*(_BYTE *)(a1 + 0x60) & 0x7F) == a5 - 0x10 ) /*0x59a4aa*/
    {
      sub_597A60(v7); /*0x59a4ac*/
    }
    else
    {
      sub_597A40(v7, a5 - 0x10); /*0x59a4bc*/
      *(_BYTE *)(a1 + 0x60) &= ~0x80u; /*0x59a4c1*/
    }
    ContainerMenu_Update(st5_0, a3); /*0x59a4b1*/
    return; /*0x59a4b6*/
  }
  if ( a5 != 0x33 ) /*0x59a4d1*/
  {
    if ( a5 == 0x2A ) /*0x59b336*/
    {
      if ( !*(_BYTE *)(a1 + 0x64) ) /*0x59b33c*/
        return; /*0x59b33c*/
      sub_57DE50(0xE); /*0x59b344*/
      v84 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5); /*0x59b354*/
      v85 = Double_To_SInt32(v84); /*0x59b359*/
      v86 = *(Tile **)(a1 + 0x2C); /*0x59b365*/
      a2c = flt_A6B618; /*0x59b368*/
      *(_DWORD *)(a1 + 0x4C) = v85; /*0x59b370*/
      Tile_SetFloat(v86, (_DWORD *)0xFB7, a2c); /*0x59b373*/
      a2d = (float)*(int *)(a1 + 0x48); /*0x59b37f*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, a2d); /*0x59b387*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0); /*0x59b39a*/
      v87 = 1.0; /*0x59b39f*/
      *(_BYTE *)(a1 + 0x64) = *(_BYTE *)(a1 + 0x64) == 0; /*0x59b3a8*/
    }
    else
    {
      if ( a5 != 0x2B ) /*0x59b3b3*/
      {
        switch ( a5 ) /*0x59b44e*/
        {
          case ' ': /*0x59b44e*/
            v91 = *(_BYTE *)(a1 + 0x64); /*0x59b454*/
            v92 = (TESForm *)reference; /*0x59b459*/
            if ( v91 ) /*0x59b45f*/
              v93 = *(TESObjectREFR **)(a1 + 0x44); /*0x59b461*/
            else
              v93 = (TESObjectREFR *)reference; /*0x59b466*/
            if ( !v91 ) /*0x59b46a*/
              v92 = *(TESForm **)(a1 + 0x44); /*0x59b46c*/
            ContainerChanges = (ExtraDataList *****)ExtraDataList_GetContainerChanges(&v93->member.baseExtraList); /*0x59b47a*/
            if ( (*(unsigned __int8 (__thiscall **)(_DWORD))(**(_DWORD **)(a1 + 0x44) + 0x190))(*(_DWORD *)(a1 + 0x44)) ) /*0x59b484*/
              sub_4876C0(ContainerChanges, *(_DWORD *)(a1 + 0x44)); /*0x59b490*/
            if ( ContainerChanges ) /*0x59b497*/
            {
              v95 = sub_492E70( /*0x59b4a9*/
                      (float *)ContainerChanges,
                      st5_0,
                      a4,
                      a3,
                      v93,
                      v92,
                      (unsigned __int8)MEMORY[0xB3B279],
                      0,
                      0);
              MEMORY[0xB3B27C] = Double_To_SInt32(v95); /*0x59b4b3*/
            }
            if ( g_liveArrowProjectileCount > 0 ) /*0x59b4bf*/
              sub_607B90(v93, 1); /*0x59b4c4*/
            sub_57DE50(0x1D); /*0x59b4ce*/
            MEMORY[0xB3B278] = 1; /*0x59b4d6*/
            sub_5982A0(st5_0, a3, (char)v92); /*0x59b4dd*/
            break;
          case '"': /*0x59b44e*/
            v96 = *(_BYTE *)(a1 + 0x64); /*0x59b4ec*/
            if ( v96 ) /*0x59b4f7*/
              v97 = *(PlayerCharacter **)(a1 + 0x44); /*0x59b4f9*/
            else
              v97 = reference; /*0x59b4fe*/
            if ( v96 ) /*0x59b502*/
              v98 = reference; /*0x59b504*/
            else
              v98 = *(PlayerCharacter **)(a1 + 0x44); /*0x59b508*/
            sub_57DE50(1); /*0x59b50d*/
            if ( v97 == reference ) /*0x59b51b*/
            {
              v99 = sub_422DC0(&v98->super.super.super.super.baseExtraList); /*0x59b520*/
              LODWORD(v134) = Double_To_SInt32(v99); /*0x59b532*/
              sub_5BD080(st5_0, a3, v99, &v134, (TESChildCELL *)v98, 0); /*0x59b536*/
            }
            else
            {
              v100 = sub_422DC0(&v97->super.super.super.super.baseExtraList); /*0x59b546*/
              v137 = (PlayerCharacter *)Double_To_SInt32(v100); /*0x59b552*/
              sub_5BD080(st5_0, a3, v100, &v137, (TESChildCELL *)v97, 1); /*0x59b55c*/
            }
            break;
          case '!': /*0x59b44e*/
            Tile_SetFloat((Tile *)a6, (_DWORD *)0xFA7, flt_A40098); /*0x59b583*/
            if ( *(_BYTE *)(a1 + 0x61) ) /*0x59b588*/
              sub_446C10((unsigned int ****)g_TESDataHandler); /*0x59b594*/
            sub_57DE50(2); /*0x59b59b*/
            sub_5982A0(st5_0, a3, (char)a6); /*0x59b5a3*/
            break;
        }
        return; /*0x59b4e2*/
      }
      if ( *(_BYTE *)(a1 + 0x64) ) /*0x59b3b9*/
        return; /*0x59b3bd*/
      sub_57DE50(0xE); /*0x59b3c5*/
      v88 = Tile_GetFloat((_DWORD *)*(_DWORD *)(a1 + 0x28), 0xFB5); /*0x59b3d5*/
      v89 = Double_To_SInt32(v88); /*0x59b3da*/
      v90 = *(Tile **)(a1 + 0x2C); /*0x59b3e6*/
      a2e = flt_A6B618; /*0x59b3e9*/
      *(_DWORD *)(a1 + 0x48) = v89; /*0x59b3f1*/
      Tile_SetFloat(v90, (_DWORD *)0xFB7, a2e); /*0x59b3f4*/
      a2f = (float)*(int *)(a1 + 0x4C); /*0x59b400*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, a2f); /*0x59b408*/
      Tile_SetFloat(*(Tile **)(a1 + 0x2C), (_DWORD *)0xFB7, 0.0); /*0x59b41b*/
      v87 = fConstant_2; /*0x59b420*/
      *(_BYTE *)(a1 + 0x64) = *(_BYTE *)(a1 + 0x64) == 0; /*0x59b42d*/
    }
    a2g = v87; /*0x59b434*/
    Tile_SetFloat(*(Tile **)(a1 + 4), (_DWORD *)0xFB5, a2g); /*0x59b43c*/
    ContainerMenu_Update(st5_0, a3); /*0x59b441*/
    return; /*0x59b446*/
  }
  if ( *(_BYTE *)(a1 + 0x54) ) /*0x59a4d7*/
    return; /*0x59a4db*/
  v8 = *(_BYTE *)(a1 + 0x64); /*0x59a4e1*/
  v9 = reference; /*0x59a4e6*/
  if ( v8 ) /*0x59a4ec*/
  {
    v10 = *(TESObjectREFR **)(a1 + 0x44); /*0x59a4ee*/
    v136 = (PlayerCharacter *)v10; /*0x59a4f1*/
  }
  else
  {
    v136 = reference; /*0x59a4f7*/
    v10 = (TESObjectREFR *)v9; /*0x59a4fb*/
  }
  if ( v8 ) /*0x59a4ff*/
    v137 = v9; /*0x59a501*/
  else
    v137 = *(PlayerCharacter **)(a1 + 0x44); /*0x59a50a*/
  v126 = 1; /*0x59a512*/
  if ( *(_BYTE *)(a1 + 0x63) ) /*0x59a50e*/
    byte_B13E90 = 0; /*0x59a519*/
  v11 = Tile_GetFloat(a6, 0xFB9); /*0x59a527*/
  v12 = (TESForm *)Double_To_SInt32(v11); /*0x59a52c*/
  if ( v10 == (TESObjectREFR *)reference ) /*0x59a539*/
  {
    InventoryEntryOfItem = GetInventoryEntryOfItem(v10, v12, 0); /*0x59a547*/
    if ( ((unsigned __int8 (__thiscall *)(TESForm *))InventoryEntryOfItem->type->vtbl->Unk_1E)(InventoryEntryOfItem->type) ) /*0x59a551*/
    {
      v14 = (const char *)stru_B38568; /*0x59a558*/
LABEL_24:
      GameUI_QueueMessage(v14, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x59a55e*/
LABEL_25:
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v15); /*0x59a574*/
      FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x59a57c*/
      return; /*0x59a584*/
    }
    if ( reference->vtbl->super.GetMountedHorse(reference) /*0x59a5de*/
      && reference->super.super.super.process->GetEquippedWeaponData(reference->super.super.super.process, 0)
      && (unsigned __int8)ContainerEntryExtraData_HasWorn(InventoryEntryOfItem, 0)
      && InventoryEntryOfItem->type == reference->super.super.super.process->GetEquippedWeaponData(
                                         reference->super.super.super.process,
                                         0)->type )
    {
      v14 = (const char *)MEMORY[0xB38A40]; /*0x59a5e1*/
      goto LABEL_24; /*0x59a5e7*/
    }
  }
  else
  {
    InventoryEntryOfItem = GetInventoryEntryOfItem(v10, v12, *(_BYTE *)(a1 + 0x61)); /*0x59a5f7*/
  }
  if ( !InventoryEntryOfItem ) /*0x59a5fb*/
    goto LABEL_171; /*0x59a5fb*/
  if ( !InventoryEntryOfItem->extendData || (v16 = InventoryEntryOfItem->extendData->node.data) == 0 || !sub_41DF50(v16) ) /*0x59a60f*/
  {
    Singleton = (float *)InterfaceManager_GetSingleton(0, 1); /*0x59a629*/
    WeightForForm_Fast = InterfaceManager::SetCurrentFocusTarget(Singleton, st5_0, v11, a3, 0.0, (_DWORD *)0xFDD, 0); /*0x59a633*/
    v19 = *(_DWORD *)(a1 + 0x44); /*0x59a63f*/
    if ( MEMORY[0xB3B27A] && *(_BYTE *)(a1 + 0x61) || !*(_BYTE *)(a1 + 0x61) ) /*0x59a64a*/
    {
      v20 = (TESObjectREFR *)reference; /*0x59a650*/
      type = InventoryEntryOfItem->type; /*0x59a658*/
      if ( v10 == (TESObjectREFR *)reference ) /*0x59a65d*/
        sub_5E99C0(v20, type, 0, 0); /*0x59a661*/
      else
        sub_5E99C0(v20, type, 1, 0); /*0x59a666*/
    }
    v22 = (char *)g_ContainerMenu_Quantity; /*0x59a66b*/
    v23 = g_ContainerMenu_Quantity == 0xFFFFFFFF; /*0x59a670*/
    v24 = 1; /*0x59a673*/
    LODWORD(v134) = 1; /*0x59a678*/
    if ( v23 ) /*0x59a67c*/
    {
      if ( v137 == reference /*0x59a76b*/
        && (sub_469980((int)InventoryEntryOfItem->type)
         || !*(_BYTE *)(a1 + 0x61) && InventoryEntryOfItem->type == (TESForm *)MEMORY[0xB35EC8]) )
      {
        g_ContainerMenu_Quantity = (int)TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem); /*0x59a774*/
      }
      else if ( (int)TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem) >= stru_B38688 ) /*0x59a78b*/
      {
        *(_BYTE *)(a1 + 0x54) = 1; /*0x59a795*/
        Health = TESHealthForm_GetHealth((Sky *)InventoryEntryOfItem); /*0x59a799*/
        sub_5C05D0( /*0x59a7ab*/
          st5_0,
          a3,
          WeightForForm_Fast,
          (int)&g_ContainerMenu_Quantity,
          0x33,
          (int)v135,
          (signed int)Health,
          0);
        goto LABEL_25; /*0x59a7b3*/
      }
    }
    else
    {
      v24 = (int)v22; /*0x59a682*/
      LODWORD(v134) = v22; /*0x59a684*/
    }
    v133 = 0; /*0x59a68c*/
    if ( !*(_BYTE *)(a1 + 0x61) ) /*0x59a691*/
      goto LABEL_93; /*0x59a691*/
    if ( !MEMORY[0xB3B27A] ) /*0x59a697*/
    {
      v134 = 0; /*0x59a6a6*/
      v23 = v136 == reference; /*0x59a6b8*/
      v139 = 0; /*0x59a6be*/
      if ( v23 ) /*0x59a6c7*/
      {
        v128 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 0, *(float *)&v125); /*0x59a6d6*/
        if ( g_ContainerMenu_Quantity != 0xFFFFFFFF ) /*0x59a6e3*/
          v128 = (double)g_ContainerMenu_Quantity * v128; /*0x59a6ef*/
        a3 = v128; /*0x59a6f5*/
        v25 = v128; /*0x59a6fd*/
        if ( v128 < 1.0 ) /*0x59a702*/
        {
          MEMORY[0xB3B288] = 1; /*0x59a70d*/
          if ( v24 <= 1 ) /*0x59a716*/
          {
            v28 = *(const char **)stru_B38CC0; /*0x59a7b8*/
            v29 = sub_488DF0(InventoryEntryOfItem); /*0x59a7be*/
            BSStringT_Static_Format((BSStringT *)&v134, "%s %s?", v28, v29); /*0x59a7cf*/
          }
          else
          {
            v19 = *(_DWORD *)stru_B38CC0; /*0x59a71c*/
            v26 = sub_488DF0(InventoryEntryOfItem); /*0x59a722*/
            BSStringT_Static_Format((BSStringT *)&v134, "%s %i %s?", (const char *)v19, v24, v26); /*0x59a734*/
          }
          goto LABEL_69; /*0x59a73c*/
        }
        a2 = (const char *)stru_B38D20; /*0x59a7e5*/
        v110 = v128; /*0x59a7e7*/
        if ( v24 == 1 ) /*0x59a7ea*/
        {
          v30 = *(const char **)stru_B38CB8; /*0x59a7ec*/
          v25 = FloatFloor(v128); /*0x59a7f2*/
          v111 = Double_To_SInt32(v25); /*0x59a7ff*/
          v106 = (const char *)stru_B38D10; /*0x59a805*/
          v31 = sub_488DF0(InventoryEntryOfItem); /*0x59a808*/
          BSStringT_Static_Format((BSStringT *)&v134, "%s %s %s %i %s?", v30, v31, v106, v111, a2); /*0x59a819*/
LABEL_69:
          v114 = MEMORY[0xB38D00]; /*0x59a8d6*/
          v109 = (char *)MEMORY[0xB38CF8]; /*0x59a8e8*/
          MEMORY[0xB3B280] = (int)v135; /*0x59a8eb*/
          v105 = (char *)v134; /*0x59a8fa*/
          MEMORY[0xB3B284] = 0x33; /*0x59a8fb*/
          ShowUIMessageBox(v109, v19, st5_0, a3, v25, v105, (int)ContainerMenuCallback, 1, v109, v114); /*0x59a905*/
          ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v35); /*0x59a90f*/
          FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x59a915*/
          v139 = 0xFFFFFFFF; /*0x59a921*/
          BSStringT_Clear((unsigned int *)&v134); /*0x59a928*/
          return; /*0x59a92d*/
        }
        v19 = *(_DWORD *)stru_B38CB8; /*0x59a826*/
      }
      else
      {
        v129 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 1, *(float *)&v125); /*0x59a838*/
        if ( g_ContainerMenu_Quantity != 0xFFFFFFFF ) /*0x59a845*/
          v129 = (double)g_ContainerMenu_Quantity * v129; /*0x59a851*/
        a2 = (const char *)stru_B38D20; /*0x59a862*/
        v110 = v129; /*0x59a864*/
        if ( v24 == 1 ) /*0x59a867*/
        {
          v32 = *(const char **)stru_B38CB0; /*0x59a869*/
          v25 = FloatFloor(v129); /*0x59a86f*/
          v112 = Double_To_SInt32(v25); /*0x59a87c*/
          v107 = (const char *)stru_B38D10; /*0x59a882*/
          v33 = sub_488DF0(InventoryEntryOfItem); /*0x59a885*/
          BSStringT_Static_Format((BSStringT *)&v134, "%s %s %s %i %s?", v32, v33, v107, v112, a2); /*0x59a896*/
          goto LABEL_69; /*0x59a89e*/
        }
        v19 = *(_DWORD *)stru_B38CB0; /*0x59a8a0*/
      }
      v25 = FloatFloor(v110); /*0x59a8a6*/
      v113 = Double_To_SInt32(v25); /*0x59a8b3*/
      v108 = (const char *)stru_B38D10; /*0x59a8b9*/
      v34 = sub_488DF0(InventoryEntryOfItem); /*0x59a8bc*/
      BSStringT_Static_Format((BSStringT *)&v134, "%s %i %s %s %i %s?", (const char *)v19, v24, v34, v108, v113, a2); /*0x59a8ce*/
      goto LABEL_69; /*0x59a8ce*/
    }
    sub_484B70((ExtraDataList ***)InventoryEntryOfItem); /*0x59a934*/
    if ( v36 ) /*0x59a93b*/
    {
      sub_484B70((ExtraDataList ***)InventoryEntryOfItem); /*0x59a93f*/
      v133 = v37 != reference; /*0x59a94c*/
    }
    if ( v136 == reference ) /*0x59a95c*/
    {
      v130 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 0, *(float *)&v125); /*0x59a96c*/
      if ( g_ContainerMenu_Quantity != 0xFFFFFFFF ) /*0x59a977*/
        v130 = (double)g_ContainerMenu_Quantity * v130; /*0x59a983*/
      sub_484B70((ExtraDataList ***)InventoryEntryOfItem); /*0x59a989*/
      if ( v38 ) /*0x59a990*/
      {
        sub_484B70((ExtraDataList ***)InventoryEntryOfItem); /*0x59a994*/
        if ( v39 != reference ) /*0x59a99f*/
          v133 = 1; /*0x59a9a1*/
      }
      if ( v130 >= 1.0 && !sub_5E10F0((void *)v19, *(float *)&reference) ) /*0x59a9c0*/
      {
LABEL_80:
        v40 = FloatFloor(v130); /*0x59a9cd*/
        v41 = Double_To_SInt32(v40); /*0x59a9da*/
        *(float *)&v134 = sub_5489E0(-v41); /*0x59a9e7*/
        (*(void (__thiscall **)(int, PlayerCharacter *, char *))(*(_DWORD *)v19 + 0x374))(v19, reference, (char *)v134); /*0x59aa07*/
        v42 = TESTopic::GetTopic(5, 2); /*0x59aa12*/
        sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x59aa1f*/
        (*(void (__thiscall **)(int, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v19 + 0xDC))( /*0x59aa3c*/
          v19,
          v42,
          reference,
          1,
          1,
          0);
        WeightForForm_Fast = kTerrainLODQuadRayDirectionZ; /*0x59aa40*/
        GameUI_QueueMessage((const char *)MEMORY[0xB38DB8], 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x59aa54*/
        v126 = 0; /*0x59aa5c*/
        goto LABEL_92; /*0x59aa61*/
      }
      WeightForForm_Fast = FloatFloor(v130); /*0x59aa6e*/
      v134 = (__int64)WeightForForm_Fast; /*0x59aa8e*/
      v44 = (__int64)WeightForForm_Fast; /*0x59aa92*/
      if ( (unsigned int)sub_5FAA70((_BYTE *)v19) < v44 ) /*0x59aaa1*/
      {
        v49 = TESTopic::GetTopic(5, 2); /*0x59ac89*/
        sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x59ac8b*/
        (*(void (__thiscall **)(int, int, PlayerCharacter *, _DWORD, int, _DWORD))(*(_DWORD *)v19 + 0xDC))( /*0x59aca8*/
          v19,
          v49,
          reference,
          0,
          1,
          0);
        GameUI_QueueMessage("Merchant does not have enough gold.", 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x59acbf*/
        g_ContainerMenu_Quantity = 1; /*0x59acc4*/
        *(_BYTE *)(a1 + 0x54) = 0; /*0x59acce*/
        goto LABEL_25; /*0x59acd2*/
      }
      if ( v44 > 0 ) /*0x59aaa9*/
      {
        *(float *)&v134 = sub_5489E0((__int64)WeightForForm_Fast); /*0x59aab5*/
        (*(void (__thiscall **)(int, PlayerCharacter *, char *))(*(_DWORD *)v19 + 0x374))(v19, reference, (char *)v134); /*0x59aad1*/
        MEMORY[0xB3B27A] = 0; /*0x59aadb*/
        v45 = TESDataHandler_LookupFormByID((TESForm *)0xF); /*0x59aae2*/
        TESObjectREFR_AddItem_Abbrev((TESObjectREFR *)reference, (int)v45, 0, v44); /*0x59aaf1*/
        data = 0; /*0x59aaf8*/
        if ( InventoryEntryOfItem->extendData ) /*0x59aaf6*/
          data = InventoryEntryOfItem->extendData->node.data; /*0x59aafe*/
        if ( v133 ) /*0x59ab05*/
          reference->AmountStolenSold += v44; /*0x59ab0c*/
        WeightForForm_Fast = Script_AddEventToExtraScript(reference, data, 0x4000); /*0x59ab1e*/
        LODWORD(v134) = TESTopic::GetTopic(5, 7); /*0x59ab31*/
        if ( (_DWORD)v134 ) /*0x59ab35*/
        {
          v47 = OblivionDynamicCast( /*0x59ab4e*/
                  *(void **)(a1 + 0x44),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
          if ( v47 ) /*0x59ab55*/
          {
            sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x59ab60*/
            (*(void (__thiscall **)(void *, char *, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v47 + 0xDC))( /*0x59ab81*/
              v47,
              (char *)v134,
              reference,
              1,
              1,
              0);
          }
        }
      }
      if ( !MEMORY[0xB3B288] ) /*0x59ab85*/
      {
        ModExperience = reference->vtbl->super.ModExperience; /*0x59abad*/
        LODWORD(v134) = (signed int)reference->unk11C / 0x64; /*0x59abb3*/
        WeightForForm_Fast = (double)(int)v134; /*0x59abb8*/
        a2a = WeightForForm_Fast; /*0x59abbc*/
        ((void (__stdcall *)(int, _DWORD, _DWORD))ModExperience)(0x1D, 0, LODWORD(a2a));// Barter award: Mercantile (0x1D), useValue0, scale = trunc(PlayerCharacter+0x11C / 100). /*0x59abc3*/
      }
    }
    else
    {
      v130 = sub_488E50((void **)&InventoryEntryOfItem->extendData, (TESObjectREFR *)1, v19, 1, *(float *)&v125); /*0x59ace1*/
      if ( g_ContainerMenu_Quantity != 0xFFFFFFFF ) /*0x59acec*/
        v130 = (double)g_ContainerMenu_Quantity * v130; /*0x59acf8*/
      if ( v130 >= 1.0 && !sub_5E10F0((void *)v19, *(float *)&reference) ) /*0x59ad1c*/
        goto LABEL_80; /*0x59ad1c*/
      v50 = FloatFloor(v130); /*0x59adc3*/
      v51 = Double_To_SInt32(v50); /*0x59add6*/
      if ( sub_5E4420((Actor *)reference) >= v51 ) /*0x59addf*/
      {
        *(float *)&v135 = sub_5489E0(v51); /*0x59adeb*/
        (*(void (__thiscall **)(int, PlayerCharacter *, TESChildCELL *))(*(_DWORD *)v19 + 0x374))(v19, reference, v135); /*0x59ae07*/
        if ( v51 > 0 ) /*0x59ae0b*/
        {
          v52 = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x59ae16*/
          sub_491700(v52, st5_0, a3, *(float *)&v135, (TESObjectREFR *)reference, v51, 0); /*0x59ae27*/
        }
        v53 = 0; /*0x59ae2e*/
        if ( InventoryEntryOfItem->extendData ) /*0x59ae2c*/
          v53 = InventoryEntryOfItem->extendData->node.data; /*0x59ae34*/
        v54 = Script_AddEventToExtraScript(v19, v53, 0x4000); /*0x59ae3d*/
        sub_44D340((_DWORD *)g_TESDataHandler, a3, v54, (int)InventoryEntryOfItem, v134, (TESObjectREFR *)v19); /*0x59ae52*/
        g_ContainerMenu_Quantity = 0xFFFFFFFF; /*0x59ae5b*/
        v55 = TESTopic::GetTopic(5, 6); /*0x59ae6a*/
        if ( v55 ) /*0x59ae71*/
        {
          v56 = OblivionDynamicCast( /*0x59ae8a*/
                  *(void **)(a1 + 0x44),
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
          if ( v56 ) /*0x59ae91*/
          {
            sub_6AC3D0((_DWORD *)MEMORY[0xB33398]->sound); /*0x59ae9c*/
            (*(void (__thiscall **)(void *, int, PlayerCharacter *, int, int, _DWORD))(*(_DWORD *)v56 + 0xDC))( /*0x59aeb9*/
              v56,
              v55,
              reference,
              1,
              1,
              0);
          }
        }
        sub_446C10((unsigned int ****)g_TESDataHandler); /*0x59aec3*/
        if ( *(_DWORD *)(g_TESDataHandler + 0xCDC) ) /*0x59aece*/
          sub_448F40((_DWORD *)g_TESDataHandler, a3, v54, *(TESObjectREFR **)(a1 + 0x44)); /*0x59aedb*/
        ContainerMenu_Update(st5_0, a3); /*0x59aee0*/
        goto LABEL_25; /*0x59aee5*/
      }
      WeightForForm_Fast = kTerrainLODQuadRayDirectionZ; /*0x59aeea*/
      GameUI_QueueMessage((const char *)MEMORY[0xB38DB0], 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x59aeff*/
      v126 = 0; /*0x59af07*/
    }
LABEL_92:
    MEMORY[0xB3B288] = 0; /*0x59abc5*/
    if ( !v126 ) /*0x59abd1*/
    {
LABEL_170:
      ContainerEntryExtraData_DestroyDataTable((unsigned int *)InventoryEntryOfItem, v43); /*0x59b302*/
      FormHeapFree((unsigned int)InventoryEntryOfItem); /*0x59b30a*/
      v10 = (TESObjectREFR *)v136; /*0x59b30f*/
LABEL_171:
      v23 = v10 == (TESObjectREFR *)reference; /*0x59b316*/
      MEMORY[0xB3B27A] = 0; /*0x59b31c*/
      if ( v23 ) /*0x59b323*/
        PlayerCharacter_ReconcileHotkeysAfterInventoryRemoval(); /*0x59b329*/
      return; /*0x59b32e*/
    }
LABEL_93:
    if ( g_ContainerMenu_Quantity == 0xFFFFFFFF ) /*0x59abde*/
      g_ContainerMenu_Quantity = 1; /*0x59abe0*/
    if ( *(_BYTE *)(a1 + 0x63) ) /*0x59abea*/
    {
      if ( v136 == reference ) /*0x59abfe*/
      {
        a2b = InventoryEntryOfItem->type; /*0x59ac07*/
        MEMORY[0xB3B279] = 0; /*0x59ac08*/
        WeightForForm_Fast = TESWeightForm_GetWeightForForm_Fast((int)a2b); /*0x59ac0f*/
        *(float *)&v134 = WeightForForm_Fast; /*0x59ac14*/
        if ( Actor_IsNPC(*(Actor **)(a1 + 0x44)) /*0x59ac38*/
          && !(*(unsigned __int8 (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(a1 + 0x44) + 0x198))(
                *(_DWORD *)(a1 + 0x44),
                0) )
        {
          WeightForForm_Fast = 0.0; /*0x59ac42*/
          if ( *(float *)&v134 > 0.0 ) /*0x59ac4d*/
          {
            ShowUIMessageBox( /*0x59ac67*/
              (char *)MEMORY[0xB38CF0],
              v19,
              st5_0,
              a3,
              0.0,
              (const char *)stru_B38C40,
              0,
              1,
              (const char *)MEMORY[0xB38CF0],
              0);
            goto LABEL_25; /*0x59ac6f*/
          }
        }
      }
    }
    v57 = (TESChildCELL *)OblivionDynamicCast( /*0x59af23*/
                            *(void **)(a1 + 0x44),
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v23 = *(_BYTE *)(a1 + 0x63) == 0; /*0x59af2b*/
    v135 = v57; /*0x59af2f*/
    if ( !v23 ) /*0x59af33*/
    {
      v58 = reference; /*0x59af39*/
      if ( v136 == reference ) /*0x59af43*/
        goto LABEL_128; /*0x59af43*/
      v127 = 0; /*0x59af4b*/
      sub_4842E0((int)InventoryEntryOfItem); /*0x59af50*/
      v59 = reference; /*0x59af5c*/
      vtbl = reference->vtbl; /*0x59af62*/
      LODWORD(v134) = g_ContainerMenu_Quantity * v61; /*0x59af64*/
      v115 = ((int (__thiscall *)(PlayerCharacter *))vtbl->super.GetActorValue)(v59); /*0x59af82*/
      v62 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x59af8b*/
      v63 = Calc_LuckModifiedSkill(v62, 0x1F); /*0x59af8e*/
      v131 = Double_To_SInt32(v63); /*0x59afa1*/
      v64 = (*(int (__thiscall **)(char *, int, int))(*(_DWORD *)v134 + 0x284))((char *)v134, 7, v115); /*0x59afaf*/
      v65 = (*(int (__thiscall **)(char *, int, int))(*(_DWORD *)v134 + 0x284))((char *)v134, 0x1F, v64); /*0x59afbe*/
      v66 = Calc_LuckModifiedSkill(v65, 7); /*0x59afc1*/
      v67 = Double_To_SInt32(v66); /*0x59afc6*/
      WeightForForm_Fast = sub_546660(v134, v67, *(float *)&v131); /*0x59afdc*/
      LODWORD(v134) = v68; /*0x59afe3*/
      v69 = Game_RandomLargeInteger(0) % (int)0xFFFFFF9C; /*0x59b002*/
      if ( (int)v134 > v69 ) /*0x59b00b*/
      {
        if ( !sub_469980((int)InventoryEntryOfItem->type) ) /*0x59b018*/
          reference->miscStats[0x1D] += g_ContainerMenu_Quantity; /*0x59b02f*/
      }
      else
      {
        v127 = 1; /*0x59b00d*/
      }
      Name = TESObjectREFR_GetName((TESObjectREFR *)v135); /*0x59b049*/
      _sprintf(Format, "%s %s %d %s %d ", Name, "pickpocketed  chance of ", (_DWORD)v134, "random chance is ", v69); /*0x59b059*/
      PrintToLog___(Format); /*0x59b063*/
      if ( v127 && !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)v19 + 0x19C))(v19) ) /*0x59b07d*/
      {
        MEMORY[0xB3B279] = 0; /*0x59b083*/
        sub_5982A0(st5_0, a3, v19); /*0x59b088*/
        ((void (__thiscall *)(PlayerCharacter *, TESChildCELL *, TESForm *, int))reference->vtbl->super.Unk_8F)( /*0x59b0aa*/
          reference,
          v135,
          InventoryEntryOfItem->type,
          g_ContainerMenu_Quantity);
        goto LABEL_25; /*0x59b0ac*/
      }
    }
    v58 = reference; /*0x59b0b1*/
LABEL_128:
    v23 = MEMORY[0xB3B279] == 0; /*0x59b0b7*/
    LODWORD(v134) = InventoryEntryOfItem->type; /*0x59b0c1*/
    if ( !v23 && v136 != v58 ) /*0x59b0cb*/
    {
      v71 = (int)v58->vtbl->super.super.super.GetBaseForm((TESObjectREFR *)v58); /*0x59b0d9*/
      sub_484B70((ExtraDataList ***)InventoryEntryOfItem); /*0x59b0db*/
      if ( v72 == v71 ) /*0x59b0e2*/
      {
        MEMORY[0xB3B279] = 0; /*0x59b109*/
      }
      else
      {
        sub_4842E0((int)InventoryEntryOfItem); /*0x59b0e6*/
        v74 = v73; /*0x59b0eb*/
        v75 = g_ContainerMenu_Quantity; /*0x59b0ed*/
        MEMORY[0xB3B27C] += g_ContainerMenu_Quantity * v74; /*0x59b0f5*/
        reference->miscStats[0x1C] += v75; /*0x59b101*/
      }
    }
    if ( *(_BYTE *)(a1 + 0x61) ) /*0x59b110*/
    {
      if ( v19 ) /*0x59b118*/
      {
        v76 = ExtraDataList_GetMerchantContainer((ExtraDataList *)(v19 + 0x44)); /*0x59b11d*/
        if ( v76 ) /*0x59b124*/
          v137 = (PlayerCharacter *)v76; /*0x59b126*/
        MEMORY[0xB3B279] = 0; /*0x59b12a*/
      }
    }
    extendData = InventoryEntryOfItem->extendData; /*0x59b131*/
    if ( InventoryEntryOfItem->extendData ) /*0x59b131*/
    {
      v78 = g_ContainerMenu_Quantity; /*0x59b13b*/
      if ( g_ContainerMenu_Quantity == 1 ) /*0x59b144*/
      {
        v79 = (BaseExtraList *)extendData->node.data; /*0x59b14b*/
        if ( v133 && (*(_BYTE *)(a1 + 0x61) || InventoryEntryOfItem->type->member.type == kFormType_Ammo) ) /*0x59b15c*/
          ExtraDataList_RemoveOwner(v79); /*0x59b160*/
        v136->vtbl->super.super.super.RemoveItem( /*0x59b184*/
          (TESObjectREFR *)v136,
          InventoryEntryOfItem->type,
          v79,
          g_ContainerMenu_Quantity,
          (unsigned __int8)MEMORY[0xB3B279],
          0,
          (TESObjectREFR *)v137,
          0,
          0,
          1,
          0);
LABEL_161:
        if ( *(_BYTE *)(a1 + 0x61) ) /*0x59b27d*/
        {
          sub_446C10((unsigned int ****)g_TESDataHandler); /*0x59b289*/
          sub_448F40((_DWORD *)g_TESDataHandler, a3, WeightForForm_Fast, *(TESObjectREFR **)(a1 + 0x44)); /*0x59b298*/
        }
        if ( *(float *)&v135 != 0.0 ) /*0x59b2a3*/
        {
          if ( (*((int (__thiscall **)(TESChildCELL *))v135->vtbl + 0x55))(v135) ) /*0x59b2af*/
          {
            (*(void (__thiscall **)(void *, TESChildCELL *, int, _DWORD, _DWORD))(*(_DWORD *)v135[0x16].vtbl + 0x42C))( /*0x59b2c7*/
              v135[0x16].vtbl,
              v135,
              1,
              0,
              0);
            if ( (_DWORD)v134 ) /*0x59b2cf*/
            {
              if ( *(_BYTE *)(v134 + 4) == 0x22 && g_liveArrowProjectileCount > 0 ) /*0x59b2de*/
                ArrowProjectile_CleanupMatchingByBaseAndTarget((_BYTE *)v134, 0x7FFFFFFF, v135, 1, 0); /*0x59b2eb*/
            }
          }
        }
        g_ContainerMenu_Quantity = 0xFFFFFFFF; /*0x59b2f3*/
        ContainerMenu_Update(st5_0, a3); /*0x59b2fd*/
        goto LABEL_170; /*0x59b2fd*/
      }
      if ( !BSSimpleList_IsEmpty((BSSimpleList_VoidPtr *)InventoryEntryOfItem->extendData) ) /*0x59b18b*/
      {
        v132 = (BaseExtraList **)extendData; /*0x59b19a*/
        if ( v78 ) /*0x59b19e*/
        {
          next = extendData; /*0x59b1a4*/
          do /*0x59b233*/
          {
            if ( !next ) /*0x59b1a8*/
              break; /*0x59b1a8*/
            if ( !next->node.data ) /*0x59b1ae*/
              break; /*0x59b1b3*/
            ExtraCount = ExtraDataList_GetExtraCount((ExtraDataList *)next->node.data); /*0x59b1b9*/
            v82 = ExtraCount; /*0x59b1be*/
            if ( ExtraCount > 0 ) /*0x59b1c3*/
            {
              if ( g_ContainerMenu_Quantity < ExtraDataList_GetExtraCount((ExtraDataList *)next->node.data) ) /*0x59b1d7*/
                v82 = g_ContainerMenu_Quantity; /*0x59b1d9*/
              v83 = *v132; /*0x59b1e4*/
              if ( v133 && (*(_BYTE *)(a1 + 0x61) || InventoryEntryOfItem->type->member.type == kFormType_Ammo) ) /*0x59b1f5*/
                ExtraDataList_RemoveOwner(*v132); /*0x59b1f9*/
              v136->vtbl->super.super.super.RemoveItem( /*0x59b227*/
                (TESObjectREFR *)v136,
                InventoryEntryOfItem->type,
                v83,
                v82,
                (unsigned __int8)MEMORY[0xB3B279],
                0,
                (TESObjectREFR *)v137,
                0,
                0,
                1,
                0);
              g_ContainerMenu_Quantity -= v82; /*0x59b229*/
              next = (tListVoid *)v132; /*0x59b22f*/
            }
            next = (tListVoid *)next->node.next; /*0x59b23a*/
            v132 = (BaseExtraList **)next; /*0x59b23d*/
          }
          while ( g_ContainerMenu_Quantity ); /*0x59b233*/
        }
      }
    }
    if ( g_ContainerMenu_Quantity > 0 ) /*0x59b24f*/
      v136->vtbl->super.super.super.RemoveItem( /*0x59b27b*/
        (TESObjectREFR *)v136,
        InventoryEntryOfItem->type,
        0,
        g_ContainerMenu_Quantity,
        (unsigned __int8)MEMORY[0xB3B279],
        0,
        (TESObjectREFR *)v137,
        0,
        0,
        1,
        0);
    goto LABEL_161; /*0x59b27b*/
  }
}
