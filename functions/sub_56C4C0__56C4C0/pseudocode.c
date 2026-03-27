char __thiscall sub_56C4C0(int **this)
{
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  TESSaveLoad *v6; // ecx
  int *v7; // eax
  int *v8; // eax
  int *v9; // ecx
  float v10; // esi
  _DWORD *v11; // eax
  UInt32 v12; // eax
  PlayerCharacter *v13; // edi
  TESForm *v14; // eax
  const char **niNode; // ebx
  TESObjectCELL *v16; // ecx
  signed int v17; // esi
  int v18; // eax
  PlayerCharacterVtbl *vtbl; // edx
  int *v20; // ecx
  int v21; // eax
  const char **v22; // eax
  UInt32 refID; // esi
  _DWORD *v24; // ecx
  int v25; // esi
  NiNode *v26; // esi
  NiProperty *v27; // eax
  NiProperty *v28; // eax
  Ni2DBuffer *NiPropertyByID; // eax
  UInt32 v30; // esi
  TESSaveLoad *v31; // ecx
  UInt32 *v32; // edi
  UInt32 v33; // esi
  TESForm *v34; // eax
  int v35; // ebx
  TESForm *v36; // ecx
  UInt32 v37; // eax
  const char *v38; // eax
  const char *v39; // eax
  UInt32 v40; // edi
  int v41; // ebp
  int v42; // esi
  _DWORD *v43; // ebp
  int v45; // [esp-18h] [ebp-174h]
  int v46; // [esp-18h] [ebp-174h]
  int v47; // [esp-14h] [ebp-170h]
  int v48; // [esp-14h] [ebp-170h]
  int v49; // [esp-14h] [ebp-170h]
  size_t v50; // [esp-10h] [ebp-16Ch]
  size_t v51; // [esp-10h] [ebp-16Ch]
  size_t v52; // [esp-10h] [ebp-16Ch]
  size_t v53; // [esp-10h] [ebp-16Ch]
  int v54; // [esp-10h] [ebp-16Ch]
  int v55; // [esp-10h] [ebp-16Ch]
  int v56; // [esp-10h] [ebp-16Ch]
  int v57; // [esp-10h] [ebp-16Ch]
  int v58; // [esp-10h] [ebp-16Ch]
  _BYTE v59[12]; // [esp-8h] [ebp-164h]
  int v60; // [esp-8h] [ebp-164h]
  size_t v61; // [esp-4h] [ebp-160h]
  int v62; // [esp-4h] [ebp-160h]
  int v63; // [esp+4h] [ebp-158h]
  int v64; // [esp+8h] [ebp-154h]
  char v65; // [esp+Bh] [ebp-151h]
  unsigned __int16 v66; // [esp+Ch] [ebp-150h]
  int v67; // [esp+10h] [ebp-14Ch] BYREF
  int v68; // [esp+14h] [ebp-148h]
  char v69[4]; // [esp+18h] [ebp-144h] BYREF
  int v70; // [esp+1Ch] [ebp-140h]
  char v71[4]; // [esp+20h] [ebp-13Ch]
  UInt32 v72; // [esp+28h] [ebp-134h]
  int Dst; // [esp+30h] [ebp-12Ch] BYREF
  NiTransform v74[5]; // [esp+34h] [ebp-128h] BYREF
  unsigned int v75; // [esp+158h] [ebp-4h]

  *(_DWORD *)v69 = 0;
  v72 = 0;
  if ( sub_45A170() )
  {
    *(_DWORD *)&v59[4] = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, *(size_t *)&v59[4]);
    if ( Dst != 0x4B4F4C42 )
    {
      v3 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v3 )
      {
        v4 = TESForm_LookupByFormID(*v3);
        v5 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v4->vtbl->GetEditorName)(
                             v4,
                             *((unsigned __int8 *)v3 + 9),
                             *(UInt32 *)((char *)v3 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0xDB,
          *v3,
          v5,
          v60,
          v62);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0xDB,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v61) = 2;
    v72 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v6, v69, v61);
  }
  HIBYTE(v68) = sub_56BCA0(this);
  v7 = (int *)FormHeapAlloc(0x4Cu);
  if ( v7 )
  {
    *v7 = 0;
    v7[0x12] = 0;
  }
  else
  {
    v7 = 0;
  }
  *(this + 6) = v7;
  if ( sub_45A290((unsigned __int8 **)SaveLoad_CurrentSavegame, &v74[0].rot.data[1][2]) )
  {
    v8 = (int *)sub_442890((UInt32 *)v74, (char *)&v74[0].rot.data[1][2], 0, 0);
    v9 = *(this + 6);
    v75 = 0;
    sub_55E2A0(v9, v8);
    v75 = 0xFFFFFFFF;
    if ( LODWORD(v74[0].rot.data[0][0]) )
    {
      v10 = v74[0].rot.data[0][0];
      if ( !InterlockedDecrement((volatile LONG *)(LODWORD(v74[0].rot.data[0][0]) + 4)) )
      {
        *(_DWORD *)&v59[4] = 1;
        (**(void (__thiscall ***)(float))LODWORD(v10))(COERCE_FLOAT(LODWORD(v10)));
      }
    }
  }
  v11 = *(this + 6);
  if ( !*v11 )
    HIBYTE(v67) = 0;
  *(_DWORD *)v59 = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v11 + 1, *(size_t *)v59);
  *(_DWORD *)v59 = 0x10;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v74, *(size_t *)v59);
  sub_47C600(v74, (NiTransform *)(*(this + 6) + 2));
  *(_DWORD *)v59 = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, *(this + 6) + 0xB, *(size_t *)v59);
  *(_DWORD *)v59 = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, *(this + 6) + 0xE, *(size_t *)v59);
  *(_DWORD *)v59 = 4;
  SaveLoad_LoadFormID(*(this + 6) + 0xF, *(size_t *)v59, *(int *)&v59[8], v63, v64);
  LODWORD(v50) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, *(this + 6) + 0x10, v50);
  LODWORD(v51) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, *(this + 6) + 0x11, v51);
  LODWORD(v52) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v67, v52);
  LODWORD(v53) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v69, v53);
  v12 = (*(this + 6))[0xF];
  v13 = 0;
  if ( v12 )
  {
    v14 = TESForm_LookupByFormID(v12);
    v13 = (PlayerCharacter *)OblivionDynamicCast(
                               v14,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
  }
  LOBYTE(v68) = 0;
  if ( v13 )
  {
    niNode = (const char **)v13->super.super.super.super.niNode;
  }
  else
  {
    v16 = (TESObjectCELL *)*(this + 3);
    if ( !v16 )
    {
LABEL_46:
      v65 = 0;
      goto LABEL_47;
    }
    niNode = (const char **)TESObjectCELL_GetNiNode_(v16);
    LOBYTE(v68) = 1;
  }
  if ( !niNode || !v65 )
    goto LABEL_46;
  v17 = sub_480F00(niNode, 1, v68);
  v18 = v67;
  if ( v67 != v17 )
  {
    if ( v13 == TESDataHandler_g_PlayerRef )
    {
      niNode = (const char **)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
      v17 = sub_480F00(niNode, 1, v68);
      v18 = v67;
    }
    if ( v18 != v17 )
    {
      if ( v13 )
      {
        vtbl = v13->vtbl;
        *(_DWORD *)v71 = v13->super.super.super.super.super.refID;
        v45 = ((int (__thiscall *)(PlayerCharacter *, int, signed int))vtbl->super.super.super.super.GetEditorName)(
                v13,
                v18,
                v17);
        PrintError(
          "Geometry count has changed on reference %08X %s.  Original count was %i, current count is %i",
          *(_DWORD *)v71,
          v45);
      }
      else
      {
        v20 = *(this + 3);
        if ( !v20 )
          goto LABEL_33;
        v47 = v18;
        v21 = *v20;
        *(_DWORD *)v71 = v20[3];
        v46 = (*(int (__thiscall **)(int *, int, signed int))(v21 + 0xD4))(v20, v47, v17);
        PrintError(
          "Geometry count has changed on cell %08X %s's 3D.  Original count was %i, current count is %i",
          *(_DWORD *)v71,
          v46);
      }
      v18 = v67;
LABEL_33:
      v65 = 0;
      if ( v18 != v17 )
        goto LABEL_47;
    }
  }
  v22 = sub_481320((int)this, niNode, *(int *)v69, 1, v68);
  if ( !v22 )
  {
    if ( v13 )
    {
      refID = v13->super.super.super.super.super.refID;
      v54 = (int)v13->vtbl->super.super.super.super.GetEditorName((TESForm *)v13);
      PrintError("Could not find geometry with index %i on reference %08X %s", *(_DWORD *)v69, refID, v54);
    }
    else
    {
      v24 = *(this + 3);
      if ( v24 )
      {
        v25 = v24[3];
        v55 = (*(int (**)(void))(*v24 + 0xD4))();
        PrintError("Could not find geometry with index %i on cell %08X %s", *(_DWORD *)v69, v25, v55);
      }
    }
    goto LABEL_46;
  }
  v26 = (NiNode *)(*((int (__thiscall **)(const char **))*v22 + 4))(v22);
  if ( NiNode_GetNiPropertyByID(v26, 4)
    && (v27 = NiNode_GetNiPropertyByID(v26, 4), (*((int (__thiscall **)(NiProperty *))v27->vtbl + 0x15))(v27) >= 1)
    && (v28 = NiNode_GetNiPropertyByID(v26, 4), (*((int (__thiscall **)(NiProperty *))v28->vtbl + 0x15))(v28) <= 0xA) )
  {
    NiPropertyByID = (Ni2DBuffer *)NiNode_GetNiPropertyByID(v26, 4);
  }
  else
  {
    NiPropertyByID = 0;
  }
  NiSmartPointer_Set__((Ni2DBuffer **)*(this + 6) + 0x12, NiPropertyByID);
  if ( !(*(this + 6))[0x12] )
  {
    v30 = v13->super.super.super.super.super.refID;
    v56 = (int)v13->vtbl->super.super.super.super.GetEditorName((TESForm *)v13);
    PrintError("There is no shader property on geometry with index %i on reference %08X %s", *(_DWORD *)v69, v30, v56);
    goto LABEL_46;
  }
LABEL_47:
  if ( sub_45A170() )
  {
    v31 = SaveLoad_CurrentSavegame;
    v32 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v33 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v32 )
    {
      v34 = TESForm_LookupByFormID(*v32);
      v35 = v70;
      v36 = v34;
      v37 = v70 + v66;
      if ( v33 <= v37 )
      {
        if ( v33 < v37 )
        {
          v39 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v36->vtbl->GetEditorName)(
                                v36,
                                *((unsigned __int8 *)v32 + 9),
                                *(UInt32 *)((char *)v32 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v35 + v66 - v33,
            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
            0x141,
            *v32,
            v39,
            v49,
            v58);
        }
      }
      else
      {
        v38 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v36->vtbl->GetEditorName)(
                              v36,
                              *((unsigned __int8 *)v32 + 9),
                              *(UInt32 *)((char *)v32 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v33 - v66 - v35,
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0x141,
          *v32,
          v38,
          v48,
          v57);
      }
    }
    else
    {
      v40 = v66 + v70;
      if ( v33 <= v40 )
      {
        if ( v33 < v40 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v70 + v66 - v33,
            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
            0x141,
            LOBYTE(v31[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v33 - v66 - v70,
          "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp",
          0x141,
          LOBYTE(v31[1].createdObjectList.next));
      }
    }
  }
  v41 = (int)*(this + 6);
  if ( v65 )
  {
    sub_7EE3E0(*(_DWORD **)(v41 + 0x48), v41);
  }
  else
  {
    v42 = *(_DWORD *)(v41 + 0x48);
    v43 = (_DWORD *)(v41 + 0x48);
    if ( v42 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v42 + 4)) )
        (**(void (__cdecl ***)(int))v42)(1);
      *v43 = 0;
    }
  }
  return v65;
}
