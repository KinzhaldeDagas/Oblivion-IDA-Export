char __thiscall sub_56FC00(Ni2DBuffer **this)
{
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  TESSaveLoad *v6; // ecx
  Ni2DBuffer *v7; // eax
  int *v8; // eax
  int *v9; // ecx
  void (__thiscall ***v10)(_DWORD); // esi
  _DWORD *v11; // eax
  void *v12; // eax
  int v13; // edi
  void *v14; // eax
  int v15; // esi
  TESSaveLoad *v16; // ecx
  UInt32 vftable; // eax
  TESForm *v18; // eax
  void *v19; // eax
  PlayerCharacter *v20; // esi
  const char **PlayerNode; // ebp
  signed int v22; // edi
  UInt32 v23; // eax
  PlayerCharacterVtbl *vtbl; // edx
  const char *v25; // eax
  const char **v26; // eax
  UInt32 refID; // edi
  Ni2DBuffer *v28; // eax
  UInt32 v29; // edi
  UInt32 v30; // edi
  int v31; // eax
  int v32; // ecx
  int v33; // edx
  int v34; // ebp
  int v35; // edi
  int v36; // eax
  bool v37; // sf
  int v38; // edi
  _WORD *v39; // esi
  TESSaveLoad *v40; // ecx
  bool v41; // cf
  unsigned int i; // esi
  int v43; // esi
  int v44; // edi
  _DWORD *v45; // esi
  int v46; // esi
  unsigned int v47; // esi
  unsigned int *v48; // edi
  TESSaveLoad *v49; // ecx
  UInt32 *v50; // edi
  UInt32 v51; // esi
  TESForm *v52; // eax
  int v53; // ebx
  unsigned int v54; // ecx
  const char *v55; // eax
  const char *v56; // eax
  unsigned int v57; // edi
  int v59; // [esp-14h] [ebp-194h]
  int v60; // [esp-14h] [ebp-194h]
  int v61; // [esp-14h] [ebp-194h]
  size_t v62; // [esp-10h] [ebp-190h]
  size_t v63; // [esp-10h] [ebp-190h]
  size_t v64; // [esp-10h] [ebp-190h]
  size_t v65; // [esp-10h] [ebp-190h]
  size_t v66; // [esp-10h] [ebp-190h]
  size_t v67; // [esp-10h] [ebp-190h]
  size_t v68; // [esp-10h] [ebp-190h]
  size_t v69; // [esp-10h] [ebp-190h]
  size_t v70; // [esp-10h] [ebp-190h]
  size_t v71; // [esp-10h] [ebp-190h]
  size_t v72; // [esp-10h] [ebp-190h]
  int v73; // [esp-10h] [ebp-190h]
  int v74; // [esp-10h] [ebp-190h]
  int v75; // [esp-10h] [ebp-190h]
  int v76; // [esp-10h] [ebp-190h]
  int v77; // [esp-10h] [ebp-190h]
  int v78; // [esp-10h] [ebp-190h]
  _BYTE v79[12]; // [esp-8h] [ebp-188h]
  int v80; // [esp-8h] [ebp-188h]
  size_t v81; // [esp-4h] [ebp-184h]
  int v82; // [esp-4h] [ebp-184h]
  int v83; // [esp+4h] [ebp-17Ch]
  int v84; // [esp+8h] [ebp-178h]
  unsigned __int16 v85; // [esp+8h] [ebp-178h]
  char v86; // [esp+Bh] [ebp-175h]
  unsigned __int16 v87; // [esp+Ch] [ebp-174h] BYREF
  unsigned __int16 v88; // [esp+10h] [ebp-170h] BYREF
  char v89; // [esp+13h] [ebp-16Dh]
  unsigned int v90; // [esp+14h] [ebp-16Ch] BYREF
  unsigned __int16 v91; // [esp+18h] [ebp-168h]
  int v92; // [esp+1Ch] [ebp-164h]
  char v93[4]; // [esp+20h] [ebp-160h] BYREF
  char v94[4]; // [esp+24h] [ebp-15Ch] BYREF
  void *v95; // [esp+28h] [ebp-158h]
  void *v96; // [esp+2Ch] [ebp-154h]
  char ArgList[4]; // [esp+30h] [ebp-150h]
  void *v98; // [esp+34h] [ebp-14Ch]
  void *v99; // [esp+38h] [ebp-148h] BYREF
  UInt32 v100; // [esp+3Ch] [ebp-144h] BYREF
  void *v101; // [esp+40h] [ebp-140h]
  int v102; // [esp+4Ch] [ebp-134h]
  int Dst; // [esp+50h] [ebp-130h] BYREF
  int v104; // [esp+54h] [ebp-12Ch] BYREF
  NiTransform v105[5]; // [esp+58h] [ebp-128h] BYREF
  int v106; // [esp+170h] [ebp-10h]
  unsigned int v107; // [esp+17Ch] [ebp-4h]

  *(_DWORD *)v94 = 0;
  v100 = 0;
  if ( sub_45A170() )
  {
    *(_DWORD *)&v79[4] = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, *(size_t *)&v79[4]);
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
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x589,
          *v3,
          v5,
          v80,
          v82);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x589,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v81) = 2;
    v100 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v6, v94, v81);
  }
  HIBYTE(v90) = sub_56BCA0(this);
  v7 = (Ni2DBuffer *)FormHeapAlloc(0x4Cu);
  if ( v7 )
  {
    v7->__vftable = 0;
    v7[3].members.height = 0;
  }
  else
  {
    v7 = 0;
  }
  *(this + 6) = v7;
  if ( sub_45A290((unsigned __int8 **)SaveLoad_CurrentSavegame, &v105[0].rot.data[1][2]) )
  {
    v8 = (int *)sub_442890((UInt32 *)&v104, (char *)&v105[0].rot.data[1][2], 0, 0);
    v9 = (int *)*(this + 6);
    v107 = 0;
    sub_55E2A0(v9, v8);
    v107 = 0xFFFFFFFF;
    if ( v104 )
    {
      v10 = (void (__thiscall ***)(_DWORD))v104;
      if ( !InterlockedDecrement((volatile LONG *)(v104 + 4)) )
      {
        *(_DWORD *)&v79[4] = 1;
        (**v10)(v10);
      }
    }
  }
  v11 = *(this + 6);
  if ( !*v11 )
    v89 = 0;
  *(_DWORD *)v79 = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v11 + 1, *(size_t *)v79);
  *(_DWORD *)v79 = 0x10;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v105, *(size_t *)v79);
  sub_47C600(v105, (NiTransform *)&(*(this + 6))->members.width);
  *(_DWORD *)v79 = 0xC;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &(*(this + 6))[2].members, *(size_t *)v79);
  *(_DWORD *)v79 = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &(*(this + 6))[2].members.data, *(size_t *)v79);
  *(_DWORD *)v79 = 4;
  SaveLoad_LoadFormID(&(*(this + 6))[3], *(size_t *)v79, *(int *)&v79[8], v83, v84);
  LODWORD(v62) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &(*(this + 6))[3].members, v62);
  LODWORD(v63) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &(*(this + 6))[3].members.width, v63);
  LODWORD(v64) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v100, v64);
  LODWORD(v65) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v93, v65);
  LODWORD(v66) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v90, v66);
  LODWORD(v67) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v99, v67);
  LODWORD(v68) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v88, v68);
  v95 = (void *)FormHeapAlloc(
                  (0xC * (unsigned __int64)(unsigned __int16)v90) >> 0x20 != 0
                ? 0xFFFFFFFF
                : 0xC * (unsigned __int16)v90);
  v98 = (void *)FormHeapAlloc(
                  (0xC * (unsigned __int64)(unsigned __int16)v90) >> 0x20 != 0
                ? 0xFFFFFFFF
                : 0xC * (unsigned __int16)v90);
  v12 = (void *)FormHeapAlloc((unsigned __int64)(unsigned __int16)v99 >> 0x1F != 0 ? 0xFFFFFFFF : 2
                                                                                                * (unsigned __int16)v99);
  v13 = v88;
  v96 = v12;
  v14 = (void *)FormHeapAlloc((0x4C * (unsigned __int64)v88) >> 0x20 != 0 ? 0xFFFFFFFF : 0x4C * v88);
  v15 = (int)v14;
  v101 = v14;
  v106 = 1;
  if ( v14 )
  {
    sub_401080(v14, 0x4C, v13, (void *(__thiscall *)(void *))sub_72EF90);
    v92 = v15;
  }
  else
  {
    v92 = 0;
  }
  LODWORD(v69) = 0xC * (unsigned __int16)v90;
  v16 = SaveLoad_CurrentSavegame;
  v106 = 0xFFFFFFFF;
  SaveLoad_LoadData((int)v16, v95, v69);
  LODWORD(v70) = 0xC * (unsigned __int16)v90;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v98, v70);
  LODWORD(v71) = 2 * (unsigned __int16)v99;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v96, v71);
  vftable = (UInt32)(*(this + 6))[3].__vftable;
  if ( !vftable )
    goto LABEL_33;
  v18 = TESForm_LookupByFormID(vftable);
  v19 = OblivionDynamicCast(
          v18,
          0,
          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
          0);
  v20 = (PlayerCharacter *)v19;
  if ( !v19 )
    goto LABEL_33;
  PlayerNode = *((const char ***)v19 + 0xF);
  if ( !PlayerNode )
    goto LABEL_33;
  v22 = sub_480F00(PlayerNode, 1, 0);
  v23 = v100;
  if ( v100 == v22 )
    goto LABEL_27;
  if ( v20 == TESDataHandler_g_PlayerRef )
  {
    PlayerNode = (const char **)PlayerCharacter_GetPlayerNode(TESDataHandler_g_PlayerRef, 1);
    v22 = sub_480F00(PlayerNode, 1, 0);
    v23 = v100;
  }
  if ( v23 == v22
    || (vtbl = v20->vtbl,
        *(_DWORD *)v94 = v20->super.super.super.super.super.refID,
        v25 = (const char *)((int (__thiscall *)(PlayerCharacter *, UInt32, signed int))vtbl->super.super.super.super.GetEditorName)(
                              v20,
                              v23,
                              v22),
        PrintError(
          "Geometry count has changed on reference %08X %s.  Original count was %i, current count is %i",
          *(_DWORD *)v94,
          v25,
          v59,
          v73),
        v86 = 0,
        v100 == v22) )
  {
LABEL_27:
    v26 = sub_481320((int)PlayerNode, PlayerNode, *(int *)v93, 1, 0);
    if ( !v26 )
    {
      refID = v20->super.super.super.super.super.refID;
      v74 = (int)v20->vtbl->super.super.super.super.GetEditorName((TESForm *)v20);
      PrintError("Could not find geometry with index %i on reference %08X %s", *(_DWORD *)v93, refID, v74);
LABEL_33:
      v86 = 0;
      goto LABEL_34;
    }
    v28 = (Ni2DBuffer *)(*((int (__thiscall **)(const char **))*v26 + 4))(v26);
    NiSmartPointer_Set__(this + 0xB, v28);
    if ( !*(this + 0xB) )
    {
      v29 = v20->super.super.super.super.super.refID;
      v75 = (int)v20->vtbl->super.super.super.super.GetEditorName((TESForm *)v20);
      PrintError("Found geometry with index %i on reference %08X %s is not a TriShape", *(_DWORD *)v93, v29, v75);
      goto LABEL_33;
    }
    NiSmartPointer_Set__(this + 0xC, (Ni2DBuffer *)(*(this + 0xB))[1].members.width);
    if ( !*(this + 0xC) )
    {
      v30 = v20->super.super.super.super.super.refID;
      v76 = (int)v20->vtbl->super.super.super.super.GetEditorName((TESForm *)v20);
      PrintError("Found geometry with index %i on reference %08X %s has no parent", *(_DWORD *)v93, v30, v76);
      goto LABEL_33;
    }
  }
LABEL_34:
  v31 = (int)*(this + 0xB);
  v32 = 0;
  if ( !v31
    || !*(_DWORD *)(v31 + 0xB8)
    || (v33 = *(_DWORD *)(v31 + 0xB8), !*(_DWORD *)(v33 + 8))
    || (v32 = *(_DWORD *)(*(_DWORD *)(v33 + 8) + 0x44), *(_DWORD *)(*(_DWORD *)(v33 + 8) + 0x40) != v88) )
  {
    v86 = 0;
  }
  *(_DWORD *)v94 = 0;
  if ( v88 )
  {
    v34 = v92;
    v101 = (void *)(v32 - v92);
    do
    {
      LODWORD(v72) = 2;
      SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v87, v72);
      if ( v86 )
      {
        *(_WORD *)(v34 + 0x48) = v87;
        v35 = v87;
        v36 = FormHeapAlloc((unsigned __int64)v87 >> 0x1D != 0 ? 0xFFFFFFFF : 8 * v87);
        v102 = v36;
        v106 = 2;
        if ( v36 )
        {
          v37 = v35 - 1 < 0;
          v38 = v35 - 1;
          v39 = (_WORD *)v36;
          if ( !v37 )
          {
            do
            {
              sub_72EFA0(v39);
              v39 += 4;
              --v38;
            }
            while ( v38 >= 0 );
            v36 = v102;
          }
        }
        else
        {
          v36 = 0;
        }
        *(_DWORD *)(v34 + 0x44) = v36;
        v40 = SaveLoad_CurrentSavegame;
        v41 = LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x67u;
        v106 = 0xFFFFFFFF;
        if ( v41 )
          goto LABEL_51;
        for ( i = 0; i < v87; ++i )
        {
          LODWORD(v72) = 8;
          SaveLoad_LoadData((int)v40, (void *)(*(_DWORD *)(v34 + 0x44) + 8 * i), v72);
          v40 = SaveLoad_CurrentSavegame;
        }
        if ( LOBYTE(v40[1].createdObjectList.next) < 0x67u )
        {
LABEL_51:
          LODWORD(v72) = 8 * v87;
          SaveLoad_LoadData((int)v40, *(void **)(v34 + 0x44), v72);
        }
        qmemcpy((void *)v34, (char *)v101 + v34, 0x34u);
      }
      else
      {
        SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, 8 * v87);
      }
      v34 += 0x4C;
      ++*(_DWORD *)v94;
    }
    while ( *(int *)v94 < v88 );
  }
  if ( v86 )
  {
    sub_56CFF0((int *)this, (int)*(this + 0xB), v90, (unsigned __int16)v99, (int)v95, (int)v98, (int)v96, v92);
  }
  else
  {
    v43 = (int)*(this + 6);
    v44 = *(_DWORD *)(v43 + 0x48);
    v45 = (_DWORD *)(v43 + 0x48);
    if ( v44 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v44 + 4)) )
        (**(void (__thiscall ***)(int, int))v44)(v44, 1);
      *v45 = 0;
    }
    v46 = (int)*(this + 7);
    if ( v46 )
    {
      if ( !InterlockedDecrement((volatile LONG *)(v46 + 4)) )
        (**(void (__thiscall ***)(int, int))v46)(v46, 1);
      *(this + 7) = 0;
    }
    v47 = 0;
    if ( v85 )
    {
      v48 = (unsigned int *)(v90 + 0x44);
      do
      {
        if ( *v48 )
          FormHeapFree(*v48);
        ++v47;
        v48 += 0x13;
      }
      while ( v47 < v85 );
    }
    FormHeapFree(v90);
    FormHeapFree(*(unsigned int *)v93);
    FormHeapFree((unsigned int)v96);
    FormHeapFree(*(unsigned int *)v94);
  }
  if ( sub_45A170() )
  {
    v49 = SaveLoad_CurrentSavegame;
    v50 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v51 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v50 )
    {
      v52 = TESForm_LookupByFormID(*v50);
      v53 = *(_DWORD *)ArgList;
      v54 = *(_DWORD *)ArgList + v91;
      if ( v51 <= v54 )
      {
        if ( v51 < v54 )
        {
          v56 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v52->vtbl->GetEditorName)(
                                v52,
                                *((unsigned __int8 *)v50 + 9),
                                *(UInt32 *)((char *)v50 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v53 + v91 - v51,
            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
            0x643,
            *v50,
            v56,
            v61,
            v78);
        }
      }
      else
      {
        v55 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v52->vtbl->GetEditorName)(
                              v52,
                              *((unsigned __int8 *)v50 + 9),
                              *(UInt32 *)((char *)v50 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v51 - v91 - v53,
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x643,
          *v50,
          v55,
          v60,
          v77);
      }
    }
    else
    {
      v57 = v91 + *(_DWORD *)ArgList;
      if ( v51 <= v57 )
      {
        if ( v51 < v57 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            *(_DWORD *)ArgList + v91 - v51,
            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
            0x643,
            LOBYTE(v49[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v51 - v91 - *(_DWORD *)ArgList,
          "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp",
          0x643,
          LOBYTE(v49[1].createdObjectList.next));
      }
    }
  }
  return v86;
}
