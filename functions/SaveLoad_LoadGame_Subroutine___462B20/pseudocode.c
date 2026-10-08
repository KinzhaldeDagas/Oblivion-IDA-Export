unsigned __int16 __userpurge SaveLoad_LoadGame_Subroutine_@<ax>(
        TESSaveLoad *ecx0@<ecx>,
        char a2@<bpl>,
        double st0_0@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        double a10@<st0>,
        int a11)
{
  _DWORD *v12; // edi
  void (__cdecl *v13)(_DWORD *, unsigned int *, int, float *, int); // edx
  unsigned int v14; // eax
  void (__cdecl *v15)(_DWORD *, UInt32 *, int, float *, int); // ecx
  UInt8 *modRefIDTable; // ecx
  UInt8 v17; // cl
  UInt32 v18; // eax
  TESForm *v19; // eax
  TESWorldSpace *v20; // eax
  void (__cdecl *v21)(_DWORD *, int *, int, float *, int); // eax
  void (__cdecl *v22)(_DWORD *, int *, int, float *, int); // eax
  void (__cdecl *v23)(_DWORD *, int *, int, float *, int); // eax
  UInt8 *v24; // edx
  UInt8 v25; // dl
  int v26; // eax
  void (__cdecl *v27)(_DWORD *, double *); // eax
  TESForm *v28; // ebp
  TESObjectCELL *v29; // ebx
  signed int i; // ebp
  float *v31; // eax
  float v32; // ecx
  float v33; // edx
  int v34; // eax
  TESRegionList *regionListOwner; // eax
  OblivionRegionListNode *p_regions; // ebx
  TESForm *regionForm; // eax
  TESForm::FormFlags flags; // ecx
  int v39; // eax
  int v40; // ecx
  TES *v41; // ecx
  signed int v42; // ebx
  TESForm *v43; // eax
  TESObjectCELL *DwordAtOffset40; // eax
  TESObjectCELL *v45; // eax
  UInt32 v46; // eax
  TESForm *v47; // eax
  void *CellAtCellCoord; // eax
  TESForm *v49; // eax
  TESWorldSpace *v50; // eax
  TESWorldSpace *v51; // ebx
  void (__cdecl *v52)(_DWORD *, unsigned __int16 *, int, float *, int); // eax
  unsigned __int16 v53; // ax
  _DWORD *v54; // ecx
  FreeEntry *v55; // eax
  void *v56; // ebx
  void (__cdecl *v57)(_DWORD *, void *, _DWORD, float *, int); // edx
  void (__cdecl *v58)(_DWORD *, unsigned __int16 *, int, float *, int); // edx
  unsigned __int16 v59; // ax
  _DWORD *v60; // ecx
  FreeEntry *v61; // eax
  void *v62; // ebx
  void (__cdecl *v63)(_DWORD *, void *, _DWORD, float *, int); // eax
  void (__cdecl *v64)(_DWORD *, unsigned __int16 *, int, float *, int); // eax
  unsigned __int16 v65; // ax
  _DWORD *v66; // ecx
  FreeEntry *v67; // eax
  void *v68; // ebx
  void (__cdecl *v69)(_DWORD *, void *, _DWORD, float *, int); // edx
  void (__cdecl *v70)(_DWORD *, unsigned __int16 *, int, float *, int); // edx
  unsigned __int16 v71; // ax
  _DWORD *v72; // ecx
  FreeEntry *v73; // eax
  void *v74; // ebx
  void (__cdecl *v75)(_DWORD *, void *, _DWORD, float *, int); // eax
  Sky *GlobalObject; // eax
  void (__cdecl *v77)(_DWORD *, int *, int, int *, int); // eax
  int v78; // ebx
  bool v79; // zf
  char *v80; // ecx
  char *sound; // ebx
  void (__cdecl *v82)(_DWORD *, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 v83; // ax
  _DWORD *v84; // ecx
  FreeEntry *v85; // eax
  void *v86; // ebx
  void (__cdecl *v87)(_DWORD *, void *, _DWORD, int *, int); // eax
  void (__cdecl *v88)(_DWORD *, unsigned __int16 *, int, int *, int); // ecx
  unsigned __int16 v89; // ax
  _DWORD *v90; // ecx
  FreeEntry *v91; // eax
  void *v92; // ebx
  void (__cdecl *v93)(_DWORD *, void *, _DWORD, int *, int); // edx
  int v94; // ecx
  void (__cdecl *v95)(_DWORD *, unsigned __int16 *, int, int *, int); // ecx
  unsigned __int16 v96; // ax
  _DWORD *v97; // ecx
  FreeEntry *v98; // eax
  void *v99; // ebx
  void (__cdecl *v100)(_DWORD *, void *, _DWORD, int *, int); // edx
  TESSaveLoadGame_SerializationView *v101; // eax
  void (__cdecl *v102)(_DWORD *, unsigned __int16 *, int, int *, int); // eax
  _DWORD *v103; // ecx
  FreeEntry *v104; // eax
  void *v105; // ebx
  void (__cdecl *v106)(_DWORD *, void *, _DWORD, int *, int); // edx
  TESObjectREFR *v108; // [esp+4h] [ebp-64h]
  int v109; // [esp+8h] [ebp-60h]
  char v110; // [esp+1Bh] [ebp-4Dh]
  unsigned __int16 v111; // [esp+1Ch] [ebp-4Ch] BYREF
  int a1; // [esp+20h] [ebp-48h] BYREF
  int v113; // [esp+24h] [ebp-44h] BYREF
  unsigned int v114; // [esp+28h] [ebp-40h] BYREF
  UInt32 v115; // [esp+2Ch] [ebp-3Ch] BYREF
  int v116; // [esp+30h] [ebp-38h] BYREF
  int v117; // [esp+34h] [ebp-34h] BYREF
  int v118; // [esp+38h] [ebp-30h]
  float a3[2]; // [esp+3Ch] [ebp-2Ch] BYREF
  double v120; // [esp+44h] [ebp-24h] BYREF
  int v121; // [esp+4Ch] [ebp-1Ch]
  float v122[3]; // [esp+50h] [ebp-18h] BYREF
  float v123; // [esp+5Ch] [ebp-Ch]
  float v124; // [esp+60h] [ebp-8h]
  int v125; // [esp+64h] [ebp-4h]

  ecx0->flags |= 0x4000u; /*0x462b28*/
  sub_67CF00((int *)&qword_B3BB2C[0xA1]); /*0x462b35*/
  if ( unk_B3BF80 ) /*0x462b3a*/
    sub_683500((NiTMap_TESCELL *)unk_B3BF80); /*0x462b44*/
  if ( unk_B35B90 ) /*0x462b49*/
    sub_4BE420((_DWORD *)unk_B35B90); /*0x462b53*/
  if ( g_DistantLODLoaderTasksByCell ) /*0x462b58*/
    sub_4BD8C0(g_DistantLODLoaderTasksByCell); /*0x462b62*/
  sub_43E0F0(MEMORY[0xB33A1C]); /*0x462b6d*/
  sub_65E800(reference); /*0x462b78*/
  sub_4F9FD0(); /*0x462b7d*/
  sub_4F9DD0(); /*0x462b82*/
  SaveLoad_ClearCreatedObjList__((char *)ecx0); /*0x462b89*/
  v12 = (_DWORD *)a11; /*0x462b8e*/
  MEMORY[0xB33E90][0x138D] = 1; /*0x462ba4*/
  v13 = (void (__cdecl *)(_DWORD *, unsigned int *, int, float *, int))v12[1];// Savegame review: direct file_object[1] read callback usage; plugin wraps the save file callback before this subroutine runs. /*0x462baa*/
  LODWORD(a3[0]) = 1; /*0x462bae*/
  v13(v12, &v114, 4, a3, 1); /*0x462bb2*/
  v14 = v114; /*0x462bb4*/
  if ( v114 < 0xFF000800 ) /*0x462bc0*/
  {
    v14 = 0xFF000800; /*0x462bc2*/
    v114 = 0xFF000800; /*0x462bc7*/
  }
  *(_DWORD *)&g_TESDataHandler->activeFileState.unknownBeforeActiveFileState[0x800] = v14; /*0x462bd7*/
  v15 = (void (__cdecl *)(_DWORD *, UInt32 *, int, float *, int))v12[1]; /*0x462bdd*/
  LOBYTE(a11) = 1; /*0x462be8*/
  LODWORD(a3[0]) = 1; /*0x462bec*/
  v15(v12, &v115, 4, a3, 1); /*0x462bf0*/
  modRefIDTable = ecx0->modRefIDTable; /*0x462bf6*/
  if ( !modRefIDTable || HIBYTE(v115) == 0xFF ) /*0x462c07*/
  {
    v18 = v115; /*0x462c2d*/
  }
  else if ( HIBYTE(v115) >= ecx0->numMods || (v17 = modRefIDTable[HIBYTE(v115)], v17 == 0xFF) ) /*0x462c17*/
  {
    v18 = 0; /*0x462c29*/
  }
  else
  {
    v18 = (v115 & 0xFFFFFF) + (v17 << 0x18); /*0x462c25*/
  }
  v115 = v18; /*0x462c3e*/
  v19 = TESForm_LookupByFormID(v18); /*0x462c42*/
  v20 = (TESWorldSpace *)OblivionDynamicCast( /*0x462c4b*/
                           v19,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESWorldSpace `RTTI Type Descriptor',
                           0);
  if ( v20 ) /*0x462c55*/
    sub_4431F0(MEMORY[0xB333A0], a8, a2, a9, a10, v20); /*0x462c5e*/
  else
    LOBYTE(a11) = 0; /*0x462c65*/
  v21 = (void (__cdecl *)(_DWORD *, int *, int, float *, int))v12[1]; /*0x462c6a*/
  LODWORD(a3[0]) = 1; /*0x462c7b*/
  v21(v12, &v113, 4, a3, 1); /*0x462c7f*/
  v22 = (void (__cdecl *)(_DWORD *, int *, int, float *, int))v12[1]; /*0x462c81*/
  LODWORD(a3[0]) = 1; /*0x462c92*/
  v22(v12, &v116, 4, a3, 1); /*0x462c96*/
  v23 = (void (__cdecl *)(_DWORD *, int *, int, float *, int))v12[1]; /*0x462c98*/
  LODWORD(a3[0]) = 1; /*0x462ca9*/
  v23(v12, &a1, 4, a3, 1); /*0x462cad*/
  v24 = ecx0->modRefIDTable; /*0x462cb3*/
  if ( !v24 || HIBYTE(a1) == 0xFF ) /*0x462cc4*/
  {
    v26 = a1; /*0x462cea*/
  }
  else if ( HIBYTE(a1) >= ecx0->numMods || (v25 = v24[HIBYTE(a1)], v25 == 0xFF) ) /*0x462cd4*/
  {
    v26 = 0; /*0x462ce6*/
  }
  else
  {
    v26 = (a1 & 0xFFFFFF) + (v25 << 0x18); /*0x462ce2*/
  }
  a1 = v26; /*0x462cfa*/
  v27 = (void (__cdecl *)(_DWORD *, double *))v12[1]; /*0x462cfe*/
  LODWORD(a3[0]) = 1; /*0x462d02*/
  v27(v12, &v120); /*0x462d06*/
  TESObjectREFR_SetPosition((TESObjectREFR *)reference, *(float *)&v120, *((float *)&v120 + 1), *(float *)&v121); /*0x462d27*/
  v28 = TESForm_LookupByFormID(a1); /*0x462d42*/
  v29 = (TESObjectCELL *)OblivionDynamicCast( /*0x462d5b*/
                           v28,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESObjectCELL `RTTI Type Descriptor',
                           0);
  v118 = (int)OblivionDynamicCast( /*0x462d67*/
                v28,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWorldSpace `RTTI Type Descriptor',
                0);
  if ( !v118 && !v29 ) /*0x462d6f*/
    LOBYTE(a11) = 0; /*0x462d71*/
  sub_5F0410((TESObjectREFR *)reference, (int)v28); /*0x462d7b*/
  i = v118; /*0x462d80*/
  sub_4835D0(0, (TESWorldSpace *)v118); /*0x462d87*/
  if ( sub_45A380((int)ecx0, v120, v121, v29, (TESWorldSpace *)i) ) /*0x462dac*/
  {
    sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFD); /*0x462dbd*/
    a10 = sub_5AD980(a8, a10, 0); /*0x462dc4*/
    sub_45EC50((int)ecx0, a8, a9, a10); /*0x462dce*/
    a6 = sub_5AD980(a8, a10, 0); /*0x462dd5*/
    sub_447DB0((char *)g_TESDataHandler, 0xFFFFFFFE); /*0x462de5*/
  }
  if ( (_BYTE)a11 ) /*0x462def*/
  {
    if ( v29 ) /*0x462df7*/
    {
      MEMORY[0xB333A0]->extXCoord = v113; /*0x462e03*/
      MEMORY[0xB333A0]->extYCoord = v116; /*0x462e10*/
      ecx0->flags |= 0x10u; /*0x462e13*/
      if ( (TESObjectCELL *)Shared_GetDwordAtOffset40(reference) != v29 ) /*0x462e24*/
        PlayerCharacter_ChangeCellAndPosition( /*0x462e5f*/
          (TESObjectREFR *)reference,
          a10,
          a7,
          a8,
          a9,
          st0_0,
          a6,
          a4,
          a5,
          (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(reference->super.super.super.super.pos[0]),
          (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(reference->super.super.super.super.pos[1]),
          (void *(__thiscall *)(NiAVObject *))LODWORD(reference->super.super.super.super.pos[2]),
          LODWORD(reference->super.super.super.super.rot.x),
          LODWORD(reference->super.super.super.super.rot.y),
          LODWORD(reference->super.super.super.super.rot.z),
          v29,
          0);
LABEL_60:
      ecx0->flags &= ~0x10u; /*0x463074*/
LABEL_61:
      if ( (_BYTE)a11 ) /*0x46307d*/
        goto LABEL_68; /*0x46307d*/
      goto LABEL_62; /*0x46307d*/
    }
    if ( !i ) /*0x462e6b*/
      goto LABEL_61; /*0x462e6b*/
    v31 = (float *)((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>, double@<st1>, double@<st2>))reference->vtbl->super.super.super.GetPos)( /*0x462e7f*/
                     reference,
                     a10,
                     a9,
                     a8);
    v32 = *v31; /*0x462e81*/
    v33 = v31[1]; /*0x462e83*/
    v34 = *((_DWORD *)v31 + 2); /*0x462e86*/
    v123 = v32; /*0x462e89*/
    v124 = v33; /*0x462e8f*/
    v125 = v34; /*0x462e93*/
    if ( !sub_4EF160((_BYTE *)i) ) /*0x462e97*/
      goto LABEL_52; /*0x462e97*/
    if ( !byte_B14F58 ) /*0x462ea4*/
      goto LABEL_52; /*0x462ea4*/
    a7 = v123; /*0x462ec0*/
    sub_4A6970(a3, v123, v124); /*0x462ec7*/
    regionListOwner = g_TESDataHandler->regionListOwner; /*0x462ed2*/
    v110 = 0; /*0x462eda*/
    if ( regionListOwner ) /*0x462edf*/
    {
      p_regions = &regionListOwner->regions; /*0x462ee1*/
      if ( regionListOwner != (TESRegionList *)0xFFFFFFFC ) /*0x462ee6*/
      {
        do /*0x462f39*/
        {
          regionForm = p_regions->regionForm; /*0x462ee8*/
          if ( !p_regions->regionForm ) /*0x462ee8*/
            break; /*0x462eec*/
          flags = regionForm->member.flags; /*0x462eee*/
          if ( (flags & 0x40) != 0 && (flags & 0x20) == 0 && regionForm[1].member.flags == v118 ) /*0x462f0a*/
          {
            for ( i = *(_DWORD *)&regionForm[1].member.type; i; i = *(_DWORD *)(i + 4) ) /*0x462f11*/
            {
              if ( !*(_DWORD *)i ) /*0x462f13*/
                break; /*0x462f18*/
              if ( sub_4A7330(*(float **)i, a3) ) /*0x462f1f*/
                v110 = 1; /*0x462f28*/
            }
          }
          p_regions = p_regions->next; /*0x462f34*/
        }
        while ( p_regions ); /*0x462f39*/
        if ( v110 ) /*0x462f40*/
        {
LABEL_52:
          v39 = v113; /*0x462f4c*/
          v40 = v116; /*0x462f50*/
          ecx0->flags |= 0x10u; /*0x462f54*/
          LODWORD(a3[0]) = v40 << 0xC; /*0x462f66*/
          v41 = MEMORY[0xB333A0]; /*0x462f6a*/
          v122[0] = (float)(v39 << 0xC); /*0x462f70*/
          v122[1] = (float)SLODWORD(a3[0]); /*0x462f7f*/
          a7 = 0.0; /*0x462f83*/
          v122[2] = 0.0; /*0x462f85*/
          sub_444FB0((unsigned int)v41, (TESObjectREFR *)i, a10, st0_0, a9, a8, 0.0, a6, a4, a5, v122, 0); /*0x462f89*/
          i = (int)v123 >> 0xC; /*0x462f9a*/
          a10 = v124; /*0x462f9d*/
          LODWORD(a3[0]) = (int)v124; /*0x462fa1*/
          v42 = SLODWORD(a3[0]) >> 0xC; /*0x462fb6*/
          v43 = sub_447740((TESWorldSpace **)g_TESDataHandler, i, SLODWORD(a3[0]) >> 0xC, (TESWorldSpace *)v118, 0); /*0x462fbb*/
          LODWORD(a3[0]) = v43; /*0x462fc2*/
          if ( !v43 || !GetObjectPointerAt_054(v43) ) /*0x462fca*/
          {
            if ( Shared_GetDwordAtOffset40(reference) ) /*0x462fd9*/
            {
              v108 = (TESObjectREFR *)reference; /*0x462fe8*/
              DwordAtOffset40 = (TESObjectCELL *)Shared_GetDwordAtOffset40(reference); /*0x462fe9*/
              TESObjectCELL_RemoveReference(DwordAtOffset40, v108); /*0x462ff0*/
            }
            sub_445A10((unsigned int)MEMORY[0xB333A0], (int)v12, 0.0, a8, a9, a10, st0_0, a6, a4, a5, v122); /*0x463000*/
            LODWORD(a3[0]) = sub_447740((TESWorldSpace **)g_TESDataHandler, i, v42, (TESWorldSpace *)v118, 1); /*0x463019*/
          }
          v45 = (TESObjectCELL *)LODWORD(a3[0]); /*0x46301d*/
          if ( LODWORD(a3[0]) ) /*0x463023*/
          {
            ecx0->flags |= 0x80000u; /*0x463025*/
            PlayerCharacter_ChangeCellAndPosition( /*0x463061*/
              (TESObjectREFR *)reference,
              a10,
              0.0,
              a8,
              a9,
              st0_0,
              a6,
              a4,
              a5,
              (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(reference->super.super.super.super.pos[0]),
              (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(reference->super.super.super.super.pos[1]),
              (void *(__thiscall *)(NiAVObject *))LODWORD(reference->super.super.super.super.pos[2]),
              LODWORD(reference->super.super.super.super.rot.x),
              LODWORD(reference->super.super.super.super.rot.y),
              LODWORD(reference->super.super.super.super.rot.z),
              v45,
              0);
            ecx0->flags &= ~0x80000u; /*0x463066*/
          }
          else
          {
            LOBYTE(a11) = 0; /*0x46306f*/
          }
          goto LABEL_60; /*0x46306d*/
        }
      }
    }
    LOBYTE(a11) = 0; /*0x462f42*/
  }
LABEL_62:
  v46 = strtol(Str, 0, 0x10); /*0x463083*/
  v47 = TESForm_LookupByFormID(v46); /*0x4630a4*/
  CellAtCellCoord = OblivionDynamicCast( /*0x4630ad*/
                      v47,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESObjectCELL `RTTI Type Descriptor',
                      0);
  if ( CellAtCellCoord /*0x46310b*/
    || (v49 = TESForm_LookupByFormID(0x3Cu),
        v50 = (TESWorldSpace *)OblivionDynamicCast(
                                 v49,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESWorldSpace `RTTI Type Descriptor',
                                 0),
        (v51 = v50) != 0)
    && ((CellAtCellCoord = TESWorldSpace::GetCellAtCellCoord(v50, 0, 0)) != 0
     || (CellAtCellCoord = TESWorldSpace_LoadExteriorCellAtCoord(v51, a8, a9, a10, 0, 0)) != 0
     || (CellAtCellCoord = sub_4471D0(0, 0, 0, (int **)v51)) != 0) )
  {
    sub_66FD90((TESObjectREFR *)reference, (char *)i, st0_0, a6, a7, a8, a9, a10, a4, a5, 0, *(float *)&CellAtCellCoord); /*0x463116*/
  }
LABEL_68:
  TESSaveLoadGame_LoadGlobalValues((TESSaveLoadGame_SerializationView *)ecx0, a8, a9, a10, v12); /*0x46311b*/
  ecx0->flags |= 0x10u; /*0x463123*/
  sub_443300(MEMORY[0xB333A0], a8, a9); /*0x46312d*/
  ecx0->flags &= ~0x10u; /*0x463132*/
  v52 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1]; /*0x463136*/
  LODWORD(a3[0]) = 1; /*0x46314c*/
  v52(v12, &v111, 2, a3, 1); /*0x463150*/
  v53 = v111; /*0x463152*/
  if ( v111 ) /*0x46315d*/
  {
    v54 = (_DWORD *)ecx0->unk030[4]; /*0x46315f*/
    if ( v54 ) /*0x463164*/
    {
      sub_4531B0(v54, 1, v111, "TES Class"); /*0x46316f*/
      v53 = v111; /*0x463174*/
    }
    v55 = j_MemoryHeap_Alloc(&FormHeap, 1, v53 | 0x100000000LL, v109); /*0x463183*/
    ecx0->unk000[5] = (UInt32)v55; /*0x46318a*/
    if ( !v55 ) /*0x46318d*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x463194*/
    v56 = (void *)ecx0->unk000[5]; /*0x4631a1*/
    v57 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1]; /*0x4631a4*/
    LODWORD(a3[0]) = 1; /*0x4631b0*/
    v57(v12, v56, v111, a3, 1); /*0x4631b4*/
    sub_441280((int *)MEMORY[0xB333A0]); /*0x4631bf*/
    MemoryHeap_Free_checked(v56); /*0x4631ca*/
    ecx0->unk000[5] = 0; /*0x4631cf*/
  }
  ActorProcessManager_ClearCrimes((ActorProcessManager *)&qword_B3BB2C[0x75]); /*0x4631db*/
  sub_67AE90((int *)&qword_B3BB2C[0x75]); /*0x4631e5*/
  v58 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1]; /*0x4631ea*/
  LODWORD(a3[0]) = 1; /*0x4631fb*/
  v58(v12, &v111, 2, a3, 1); /*0x4631ff*/
  v59 = v111; /*0x463201*/
  if ( v111 ) /*0x46320c*/
  {
    v60 = (_DWORD *)ecx0->unk030[4]; /*0x46320e*/
    if ( v60 ) /*0x463213*/
    {
      sub_4531B0(v60, 1, v111, "Process Lists Class"); /*0x46321e*/
      v59 = v111; /*0x463223*/
    }
    v61 = j_MemoryHeap_Alloc(&FormHeap, 1, v59 | 0x100000000LL, v109); /*0x463232*/
    ecx0->unk000[5] = (UInt32)v61; /*0x463239*/
    if ( !v61 ) /*0x46323c*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x463243*/
    v62 = (void *)ecx0->unk000[5]; /*0x463250*/
    v63 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1]; /*0x463253*/
    LODWORD(a3[0]) = 1; /*0x46325f*/
    v63(v12, v62, v111, a3, 1); /*0x463263*/
    ActorProcessManager_LoadCrimes((ActorProcessManager *)&qword_B3BB2C[0x75]); /*0x46326d*/
    MemoryHeap_Free_checked(v62); /*0x463278*/
    ecx0->unk000[5] = 0; /*0x46327d*/
  }
  v64 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1]; /*0x463284*/
  LODWORD(a3[0]) = 1; /*0x463295*/
  v64(v12, &v111, 2, a3, 1); /*0x463299*/
  v65 = v111; /*0x46329b*/
  if ( v111 ) /*0x4632a6*/
  {
    v66 = (_DWORD *)ecx0->unk030[4]; /*0x4632a8*/
    if ( v66 ) /*0x4632ad*/
    {
      sub_4531B0(v66, 1, v111, "Spectator Events"); /*0x4632b8*/
      v65 = v111; /*0x4632bd*/
    }
    v67 = j_MemoryHeap_Alloc(&FormHeap, 1, v65 | 0x100000000LL, v109); /*0x4632cc*/
    ecx0->unk000[5] = (UInt32)v67; /*0x4632d3*/
    if ( !v67 ) /*0x4632d6*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x4632dd*/
    v68 = (void *)ecx0->unk000[5]; /*0x4632ea*/
    v69 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1]; /*0x4632ed*/
    LODWORD(a3[0]) = 1; /*0x4632f9*/
    v69(v12, v68, v111, a3, 1); /*0x4632fd*/
    sub_67D040((char ***)&qword_B3BB2C[0xA1]); /*0x463307*/
    MemoryHeap_Free_checked(v68); /*0x463312*/
    ecx0->unk000[5] = 0; /*0x463317*/
  }
  v70 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1]; /*0x46331e*/
  LODWORD(a3[0]) = 1; /*0x46332f*/
  v70(v12, &v111, 2, a3, 1); /*0x463333*/
  v71 = v111; /*0x463335*/
  if ( v111 ) /*0x463340*/
  {
    v72 = (_DWORD *)ecx0->unk030[4]; /*0x463346*/
    if ( v72 ) /*0x46334b*/
    {
      sub_4531B0(v72, 1, v111, "Sky/Weather"); /*0x463356*/
      v71 = v111; /*0x46335b*/
    }
    v73 = j_MemoryHeap_Alloc(&FormHeap, 1, v71 | 0x100000000LL, v109); /*0x46336a*/
    ecx0->unk000[5] = (UInt32)v73; /*0x463371*/
    if ( !v73 ) /*0x463374*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x46337b*/
    v74 = (void *)ecx0->unk000[5]; /*0x463388*/
    v75 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1]; /*0x46338b*/
    LODWORD(a3[0]) = 1; /*0x463397*/
    v75(v12, v74, v111, a3, 1); /*0x46339b*/
    if ( (_BYTE)a11 ) /*0x4633a5*/
    {
      GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x4633a7*/
      sub_5437C0(GlobalObject); /*0x4633ae*/
    }
    MemoryHeap_Free_checked(v74); /*0x4633b9*/
    ecx0->unk000[5] = 0; /*0x4633be*/
  }
  v77 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v12[1]; /*0x4633c5*/
  v78 = unk_B3B90C; /*0x4633c8*/
  a11 = 1; /*0x4633dc*/
  v77(v12, &v117, 4, &a11, 1); /*0x4633e0*/
  v79 = v117 == 0; /*0x4633e9*/
  unk_B3B90C = v117; /*0x4633eb*/
  if ( v79 ) /*0x4633f0*/
  {
    if ( v78 ) /*0x463415*/
    {
      sound = (char *)MEMORY[0xB33398]->sound; /*0x46341d*/
      if ( sound ) /*0x463422*/
      {
        SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0); /*0x46342f*/
        SoundManager_OpenMusicFile(sound, 0, 0, 0); /*0x46343c*/
        SoundManager_PlayMusic((int)sound, (int)v12); /*0x463443*/
      }
    }
  }
  else if ( !v78 ) /*0x4633f4*/
  {
    v80 = (char *)MEMORY[0xB33398]->sound; /*0x4633fc*/
    if ( v80 ) /*0x463401*/
    {
      a10 = 1.0; /*0x463403*/
      sub_6ACD10(v80, 4u, 0, COERCE_INT(1.0)); /*0x46340c*/
    }
  }
  SaveLoad_LoadCreatedObjects(ecx0, a8, a9, a10, v12); /*0x46344b*/
  v82 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1]; /*0x463450*/
  a11 = 1; /*0x463461*/
  v82(v12, &v111, 2, &a11, 1); /*0x463465*/
  v83 = v111; /*0x463467*/
  if ( v111 ) /*0x463472*/
  {
    v84 = (_DWORD *)ecx0->unk030[4]; /*0x463474*/
    if ( v84 ) /*0x463479*/
    {
      sub_4531B0(v84, 1, v111, "Quick Keys"); /*0x463484*/
      v83 = v111; /*0x463489*/
    }
    v85 = j_MemoryHeap_Alloc(&FormHeap, 1, v83 | 0x100000000LL, v109); /*0x463498*/
    ecx0->unk000[5] = (UInt32)v85; /*0x46349f*/
    if ( !v85 ) /*0x4634a2*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x4634a9*/
    v86 = (void *)ecx0->unk000[5]; /*0x4634b6*/
    v87 = (void (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1]; /*0x4634b9*/
    a11 = 1; /*0x4634c5*/
    v87(v12, v86, v111, &a11, 1); /*0x4634c9*/
    sub_5C1420(1); /*0x4634ce*/
    MemoryHeap_Free_checked(v86); /*0x4634d9*/
    ecx0->unk000[5] = 0; /*0x4634de*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x21u ) /*0x4634ef*/
  {
    v88 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1]; /*0x4634f5*/
    a11 = 1; /*0x463506*/
    v88(v12, &v111, 2, &a11, 1); /*0x46350a*/
    v89 = v111; /*0x46350c*/
    if ( v111 ) /*0x463517*/
    {
      v90 = (_DWORD *)ecx0->unk030[4]; /*0x463519*/
      if ( v90 ) /*0x46351e*/
      {
        sub_4531B0(v90, 1, v111, "HUD Reticle"); /*0x463529*/
        v89 = v111; /*0x46352e*/
      }
      v91 = j_MemoryHeap_Alloc(&FormHeap, 1, v89 | 0x100000000LL, v109); /*0x46353d*/
      ecx0->unk000[5] = (UInt32)v91; /*0x463544*/
      if ( !v91 ) /*0x463547*/
        sub_404EC0("Could not create save buffer, out of memory."); /*0x46354e*/
      v92 = (void *)ecx0->unk000[5]; /*0x46355b*/
      v93 = (void (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1]; /*0x46355e*/
      a11 = 1; /*0x46356a*/
      v93(v12, v92, v111, &a11, 1); /*0x46356e*/
      sub_5A8B60(v94); /*0x463573*/
      MemoryHeap_Free_checked(v92); /*0x46357e*/
      ecx0->unk000[5] = 0; /*0x463583*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion < 0x21u ) /*0x463593*/
    sub_5A8BA0(); /*0x463595*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x53u ) /*0x4635a4*/
  {
    v95 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1]; /*0x4635aa*/
    a11 = 1; /*0x4635bb*/
    v95(v12, &v111, 2, &a11, 1); /*0x4635bf*/
    v96 = v111; /*0x4635c1*/
    if ( v111 ) /*0x4635cc*/
    {
      v97 = (_DWORD *)ecx0->unk030[4]; /*0x4635ce*/
      if ( v97 ) /*0x4635d3*/
      {
        sub_4531B0(v97, 1, v111, "Interface"); /*0x4635de*/
        v96 = v111; /*0x4635e3*/
      }
      v98 = j_MemoryHeap_Alloc(&FormHeap, 1, v96 | 0x100000000LL, v109); /*0x4635f2*/
      ecx0->unk000[5] = (UInt32)v98; /*0x4635f9*/
      if ( !v98 ) /*0x4635fc*/
        sub_404EC0("Could not create save buffer, out of memory."); /*0x463603*/
      v99 = (void *)ecx0->unk000[5]; /*0x463610*/
      v100 = (void (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1]; /*0x463613*/
      a11 = 1; /*0x46361f*/
      v100(v12, v99, v111, &a11, 1); /*0x463623*/
      sub_57C000(); /*0x463628*/
      MemoryHeap_Free_checked(v99); /*0x463633*/
      ecx0->unk000[5] = 0; /*0x463638*/
    }
  }
  v101 = g_TESSaveLoadGame; /*0x46363f*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x79u ) /*0x463648*/
  {
    v102 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1]; /*0x46364e*/
    a11 = 1; /*0x46365f*/
    v102(v12, &v111, 2, &a11, 1); /*0x463663*/
    LOWORD(v101) = v111; /*0x463665*/
    if ( v111 ) /*0x463670*/
    {
      v103 = (_DWORD *)ecx0->unk030[4]; /*0x463672*/
      if ( v103 ) /*0x463677*/
      {
        sub_4531B0(v103, 1, v111, "Regions"); /*0x463682*/
        LOWORD(v101) = v111; /*0x463687*/
      }
      v104 = j_MemoryHeap_Alloc(&FormHeap, 1, (unsigned __int16)v101 | 0x100000000LL, v109); /*0x463696*/
      ecx0->unk000[5] = (UInt32)v104; /*0x46369d*/
      if ( !v104 ) /*0x4636a0*/
        sub_404EC0("Could not create save buffer, out of memory."); /*0x4636a7*/
      v105 = (void *)ecx0->unk000[5]; /*0x4636b4*/
      v106 = (void (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1]; /*0x4636b7*/
      a11 = 1; /*0x4636c3*/
      v106(v12, v105, v111, &a11, 1); /*0x4636c7*/
      sub_4A3100(); /*0x4636cc*/
      LOWORD(v101) = MemoryHeap_Free_checked(v105); /*0x4636d7*/
      ecx0->unk000[5] = 0; /*0x4636dc*/
    }
  }
  ecx0->flags &= ~0x4000u; /*0x4636e3*/
  return (unsigned __int16)v101; /*0x4636ea*/
}
