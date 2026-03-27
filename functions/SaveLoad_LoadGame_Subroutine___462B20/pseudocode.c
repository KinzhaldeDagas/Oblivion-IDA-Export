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
  int i; // ebp
  double v31; // st7
  float *v32; // eax
  float v33; // ecx
  float v34; // edx
  int v35; // eax
  int v36; // eax
  _DWORD *v37; // ebx
  _DWORD *v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  TES *v42; // ecx
  signed int v43; // ebx
  TESForm *v44; // eax
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v46; // eax
  UInt32 v47; // eax
  TESForm *v48; // eax
  void *CellAtCellCoord; // eax
  TESForm *v50; // eax
  TESWorldSpace *v51; // eax
  TESWorldSpace *v52; // ebx
  void (__cdecl *v53)(_DWORD *, unsigned __int16 *, int, float *, int); // eax
  unsigned __int16 v54; // ax
  _DWORD *v55; // ecx
  FreeEntry *v56; // eax
  void *v57; // ebx
  void (__cdecl *v58)(_DWORD *, void *, _DWORD, float *, int); // edx
  void (__cdecl *v59)(_DWORD *, unsigned __int16 *, int, float *, int); // edx
  unsigned __int16 v60; // ax
  _DWORD *v61; // ecx
  FreeEntry *v62; // eax
  void *v63; // ebx
  void (__cdecl *v64)(_DWORD *, void *, _DWORD, float *, int); // eax
  void (__cdecl *v65)(_DWORD *, unsigned __int16 *, int, float *, int); // eax
  unsigned __int16 v66; // ax
  _DWORD *v67; // ecx
  FreeEntry *v68; // eax
  void *v69; // ebx
  double (__cdecl *v70)(_DWORD *, void *, _DWORD, float *, int); // edx
  void (__cdecl *v71)(_DWORD *, unsigned __int16 *, int, float *, int); // edx
  unsigned __int16 v72; // ax
  _DWORD *v73; // ecx
  FreeEntry *v74; // eax
  void *v75; // ebx
  void (__cdecl *v76)(_DWORD *, void *, _DWORD, float *, int); // eax
  Sky *GlobalObject; // eax
  void (__cdecl *v78)(_DWORD *, int *, int, int *, int); // eax
  int v79; // ebx
  bool v80; // zf
  void *v81; // ecx
  const char *sound; // ebx
  void (__cdecl *v83)(_DWORD *, unsigned __int16 *, int, int *, int); // edx
  unsigned __int16 v84; // ax
  _DWORD *v85; // ecx
  FreeEntry *v86; // eax
  void *v87; // ebx
  double (__cdecl *v88)(_DWORD *, void *, _DWORD, int *, int); // eax
  double v89; // st7
  void (__cdecl *v90)(_DWORD *, unsigned __int16 *, int, int *, int); // ecx
  unsigned __int16 v91; // ax
  _DWORD *v92; // ecx
  FreeEntry *v93; // eax
  void *v94; // ebx
  void (__cdecl *v95)(_DWORD *, void *, _DWORD, int *, int); // edx
  void (__cdecl *v96)(_DWORD *, unsigned __int16 *, int, int *, int); // ecx
  unsigned __int16 v97; // ax
  _DWORD *v98; // ecx
  FreeEntry *v99; // eax
  void *v100; // ebx
  double (__cdecl *v101)(_DWORD *, void *, _DWORD, int *, int); // edx
  double v102; // st7
  TESSaveLoad *v103; // eax
  void (__cdecl *v104)(_DWORD *, unsigned __int16 *, int, int *, int); // eax
  _DWORD *v105; // ecx
  FreeEntry *v106; // eax
  void *v107; // ebx
  void (__cdecl *v108)(_DWORD *, void *, _DWORD, int *, int); // edx
  TESObjectREFR *v110; // [esp+4h] [ebp-64h]
  int v111; // [esp+8h] [ebp-60h]
  float v112; // [esp+8h] [ebp-60h]
  char v113; // [esp+1Bh] [ebp-4Dh]
  unsigned __int16 v114; // [esp+1Ch] [ebp-4Ch] BYREF
  int a1; // [esp+20h] [ebp-48h] BYREF
  int v116; // [esp+24h] [ebp-44h] BYREF
  unsigned int v117; // [esp+28h] [ebp-40h] BYREF
  UInt32 v118; // [esp+2Ch] [ebp-3Ch] BYREF
  int v119; // [esp+30h] [ebp-38h] BYREF
  int v120; // [esp+34h] [ebp-34h] BYREF
  int v121; // [esp+38h] [ebp-30h]
  float a3[2]; // [esp+3Ch] [ebp-2Ch] BYREF
  double v123; // [esp+44h] [ebp-24h] BYREF
  int v124; // [esp+4Ch] [ebp-1Ch]
  float v125[3]; // [esp+50h] [ebp-18h] BYREF
  float v126; // [esp+5Ch] [ebp-Ch]
  float v127; // [esp+60h] [ebp-8h]
  int v128; // [esp+64h] [ebp-4h]

  ecx0->flags |= 0x4000u;
  sub_67CF00(&dword_B3BDB0);
  if ( dword_B3BF80 )
    sub_683500((_DWORD *)dword_B3BF80);
  if ( dword_B35B90 )
    sub_4BE420((_DWORD *)dword_B35B90);
  if ( dword_B35B8C )
    sub_4BD8C0((_DWORD *)dword_B35B8C);
  sub_43E0F0(ModelLoaderPtr);
  sub_65E800(TESDataHandler_g_PlayerRef);
  sub_4F9FD0();
  sub_4F9DD0();
  SaveLoad_ClearCreatedObjList__((char *)ecx0);
  v12 = (_DWORD *)a11;
  byte_B3521D = 1;
  v13 = (void (__cdecl *)(_DWORD *, unsigned int *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v13(v12, &v117, 4, a3, 1);
  v14 = v117;
  if ( v117 < 0xFF000800 )
  {
    v14 = 0xFF000800;
    v117 = 0xFF000800;
  }
  *(_DWORD *)(TESDataHandler + 0x8C0) = v14;
  v15 = (void (__cdecl *)(_DWORD *, UInt32 *, int, float *, int))v12[1];
  LOBYTE(a11) = 1;
  LODWORD(a3[0]) = 1;
  v15(v12, &v118, 4, a3, 1);
  modRefIDTable = ecx0->modRefIDTable;
  if ( !modRefIDTable || HIBYTE(v118) == 0xFF )
  {
    v18 = v118;
  }
  else if ( HIBYTE(v118) >= ecx0->numMods || (v17 = modRefIDTable[HIBYTE(v118)], v17 == 0xFF) )
  {
    v18 = 0;
  }
  else
  {
    v18 = (v118 & 0xFFFFFF) + (v17 << 0x18);
  }
  v118 = v18;
  v19 = TESForm_LookupByFormID(v18);
  v20 = (TESWorldSpace *)OblivionDynamicCast(
                           v19,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESWorldSpace `RTTI Type Descriptor',
                           0);
  if ( v20 )
    sub_4431F0(TES, a8, a2, a9, a10, v20);
  else
    LOBYTE(a11) = 0;
  v21 = (void (__cdecl *)(_DWORD *, int *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v21(v12, &v116, 4, a3, 1);
  v22 = (void (__cdecl *)(_DWORD *, int *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v22(v12, &v119, 4, a3, 1);
  v23 = (void (__cdecl *)(_DWORD *, int *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v23(v12, &a1, 4, a3, 1);
  v24 = ecx0->modRefIDTable;
  if ( !v24 || HIBYTE(a1) == 0xFF )
  {
    v26 = a1;
  }
  else if ( HIBYTE(a1) >= ecx0->numMods || (v25 = v24[HIBYTE(a1)], v25 == 0xFF) )
  {
    v26 = 0;
  }
  else
  {
    v26 = (a1 & 0xFFFFFF) + (v25 << 0x18);
  }
  a1 = v26;
  v27 = (void (__cdecl *)(_DWORD *, double *))v12[1];
  LODWORD(a3[0]) = 1;
  v27(v12, &v123);
  TESObjectREFR_SetPosition(
    (TESObjectREFR *)TESDataHandler_g_PlayerRef,
    *(float *)&v123,
    *((float *)&v123 + 1),
    *(float *)&v124);
  v28 = TESForm_LookupByFormID(a1);
  v29 = (TESObjectCELL *)OblivionDynamicCast(
                           v28,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESObjectCELL `RTTI Type Descriptor',
                           0);
  v121 = (int)OblivionDynamicCast(
                v28,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESWorldSpace `RTTI Type Descriptor',
                0);
  if ( !v121 && !v29 )
    LOBYTE(a11) = 0;
  sub_5F0410((TESObjectREFR *)TESDataHandler_g_PlayerRef, (int)v28);
  i = v121;
  sub_4835D0(0, (_DWORD *)v121);
  if ( sub_45A380((int)ecx0, (int)v12, v123, v124, v29, (TESWorldSpace *)i) )
  {
    sub_447DB0((char *)TESDataHandler, 0xFFFFFFFD);
    v31 = sub_5AD980(a8, a10, 0);
    sub_45EC50((int)ecx0, i, a8, a9, v31);
    a10 = sub_5AD980(a8, v31, 0);
    sub_447DB0((char *)TESDataHandler, 0xFFFFFFFE);
  }
  if ( (_BYTE)a11 )
  {
    if ( v29 )
    {
      TES->extXCoord = v116;
      TES->extYCoord = v119;
      ecx0->flags |= 0x10u;
      if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) != v29 )
        sub_66EAF0(
          (int *)TESDataHandler_g_PlayerRef,
          a10,
          a7,
          a8,
          a9,
          st0_0,
          a6,
          a4,
          a5,
          (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[0]),
          (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[1]),
          (void *(__thiscall *)(NiAVObject *))LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[2]),
          LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.x),
          LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.y),
          LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.z),
          v29,
          0);
LABEL_60:
      ecx0->flags &= ~0x10u;
LABEL_61:
      if ( (_BYTE)a11 )
        goto LABEL_68;
      goto LABEL_62;
    }
    if ( !i )
      goto LABEL_61;
    v32 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetPos(TESDataHandler_g_PlayerRef);
    v33 = *v32;
    v34 = v32[1];
    v35 = *((_DWORD *)v32 + 2);
    v126 = v33;
    v127 = v34;
    v128 = v35;
    if ( !sub_4EF160((_BYTE *)i) )
      goto LABEL_52;
    if ( !byte_B14F58 )
      goto LABEL_52;
    a10 = v126;
    sub_4A6970(a3, v126, v127);
    v36 = *(_DWORD *)(TESDataHandler + 0xBC);
    v113 = 0;
    if ( v36 )
    {
      v37 = (_DWORD *)(v36 + 4);
      if ( v36 != 0xFFFFFFFC )
      {
        do
        {
          v38 = (_DWORD *)*v37;
          if ( !*v37 )
            break;
          v39 = v38[2];
          if ( (v39 & 0x40) != 0 && (v39 & 0x20) == 0 && v38[8] == v121 )
          {
            for ( i = v38[7]; i; i = *(_DWORD *)(i + 4) )
            {
              if ( !*(_DWORD *)i )
                break;
              if ( sub_4A7330(*(float **)i, a3) )
                v113 = 1;
            }
          }
          v37 = (_DWORD *)v37[1];
        }
        while ( v37 );
        if ( v113 )
        {
LABEL_52:
          v40 = v116;
          v41 = v119;
          ecx0->flags |= 0x10u;
          LODWORD(a3[0]) = v41 << 0xC;
          v42 = TES;
          v125[0] = (float)(v40 << 0xC);
          v125[1] = (float)SLODWORD(a3[0]);
          v125[2] = 0.0;
          sub_444FB0((unsigned int)v42, (TESObjectREFR *)i, 0.0, st0_0, a9, a8, a7, a6, a4, a5, v125, 0);
          i = (int)v126 >> 0xC;
          a10 = v127;
          LODWORD(a3[0]) = (int)v127;
          v43 = SLODWORD(a3[0]) >> 0xC;
          v44 = sub_447740((TESWorldSpace **)TESDataHandler, i, SLODWORD(a3[0]) >> 0xC, (TESWorldSpace *)v121, 0);
          LODWORD(a3[0]) = v44;
          if ( !v44 || !TESObjectCELL_GetNiNode_((TESObjectCELL *)v44) )
          {
            if ( TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef) )
            {
              v110 = (TESObjectREFR *)TESDataHandler_g_PlayerRef;
              ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
              sub_4CECD0(ParentCell, v110);
            }
            sub_445A10((unsigned int)TES, (int)v12, a7, a8, a9, a10, st0_0, a6, a4, a5, v125);
            LODWORD(a3[0]) = sub_447740((TESWorldSpace **)TESDataHandler, i, v43, (TESWorldSpace *)v121, 1);
          }
          v46 = (TESObjectCELL *)LODWORD(a3[0]);
          if ( LODWORD(a3[0]) )
          {
            ecx0->flags |= 0x80000u;
            sub_66EAF0(
              (int *)TESDataHandler_g_PlayerRef,
              a10,
              a7,
              a8,
              a9,
              st0_0,
              a6,
              a4,
              a5,
              (void (__thiscall *)(NiAVObject *, NiMatrix33 *, NiPoint3 *, bool))LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[0]),
              (NiAVObject *(__thiscall *)(NiAVObject *, const char *))LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[1]),
              (void *(__thiscall *)(NiAVObject *))LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[2]),
              LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.x),
              LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.y),
              LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.rot.z),
              v46,
              0);
            ecx0->flags &= ~0x80000u;
          }
          else
          {
            LOBYTE(a11) = 0;
          }
          goto LABEL_60;
        }
      }
    }
    LOBYTE(a11) = 0;
  }
LABEL_62:
  v47 = strtol(Str, 0, 0x10);
  v48 = TESForm_LookupByFormID(v47);
  CellAtCellCoord = OblivionDynamicCast(
                      v48,
                      0,
                      (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                      &TESObjectCELL `RTTI Type Descriptor',
                      0);
  if ( CellAtCellCoord
    || (v50 = TESForm_LookupByFormID(0x3Cu),
        v51 = (TESWorldSpace *)OblivionDynamicCast(
                                 v50,
                                 0,
                                 (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                 &TESWorldSpace `RTTI Type Descriptor',
                                 0),
        (v52 = v51) != 0)
    && ((CellAtCellCoord = (void *)TESWorldSpace::GetCellAtCellCoord(v51, 0, 0)) != 0
     || (CellAtCellCoord = sub_4F1630(v52, a8, a9, a10, 0, 0)) != 0
     || (CellAtCellCoord = sub_4471D0(0, 0, 0, (int **)v52)) != 0) )
  {
    sub_66FD90((int)TESDataHandler_g_PlayerRef, i, st0_0, a6, a7, a8, a9, a10, 0, (int)CellAtCellCoord);
  }
LABEL_68:
  sub_45F970((int)ecx0, a8, a9, a10, (int)v12);
  ecx0->flags |= 0x10u;
  sub_443300(TES, a8, a9);
  ecx0->flags &= ~0x10u;
  v53 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v53(v12, &v114, 2, a3, 1);
  v54 = v114;
  if ( v114 )
  {
    v55 = (_DWORD *)ecx0->unk030[4];
    if ( v55 )
    {
      sub_4531B0(v55, 1, v114, "TES Class");
      v54 = v114;
    }
    v56 = j_MemoryHeap_Alloc(&FormHeap, 1, v54 | 0x100000000LL, v111);
    ecx0->unk000[5] = (UInt32)v56;
    if ( !v56 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v57 = (void *)ecx0->unk000[5];
    v58 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1];
    LODWORD(a3[0]) = 1;
    v58(v12, v57, v114, a3, 1);
    sub_441280((int *)TES);
    MemoryHeap_Free_checked(v57);
    ecx0->unk000[5] = 0;
  }
  sub_677280((int *)&ActorProcessManager_ptr);
  sub_67AE90((int *)&ActorProcessManager_ptr);
  v59 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v59(v12, &v114, 2, a3, 1);
  v60 = v114;
  if ( v114 )
  {
    v61 = (_DWORD *)ecx0->unk030[4];
    if ( v61 )
    {
      sub_4531B0(v61, 1, v114, "Process Lists Class");
      v60 = v114;
    }
    v62 = j_MemoryHeap_Alloc(&FormHeap, 1, v60 | 0x100000000LL, v111);
    ecx0->unk000[5] = (UInt32)v62;
    if ( !v62 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v63 = (void *)ecx0->unk000[5];
    v64 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1];
    LODWORD(a3[0]) = 1;
    v64(v12, v63, v114, a3, 1);
    sub_6770F0((char *)&ActorProcessManager_ptr);
    MemoryHeap_Free_checked(v63);
    ecx0->unk000[5] = 0;
  }
  v65 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v65(v12, &v114, 2, a3, 1);
  v66 = v114;
  if ( v114 )
  {
    v67 = (_DWORD *)ecx0->unk030[4];
    if ( v67 )
    {
      sub_4531B0(v67, 1, v114, "Spectator Events");
      v66 = v114;
    }
    v68 = j_MemoryHeap_Alloc(&FormHeap, 1, v66 | 0x100000000LL, v111);
    ecx0->unk000[5] = (UInt32)v68;
    if ( !v68 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v69 = (void *)ecx0->unk000[5];
    v70 = (double (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1];
    LODWORD(a3[0]) = 1;
    a10 = v70(v12, v69, v114, a3, 1);
    sub_67D040((char ***)&dword_B3BDB0, a10);
    MemoryHeap_Free_checked(v69);
    ecx0->unk000[5] = 0;
  }
  v71 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, float *, int))v12[1];
  LODWORD(a3[0]) = 1;
  v71(v12, &v114, 2, a3, 1);
  v72 = v114;
  if ( v114 )
  {
    v73 = (_DWORD *)ecx0->unk030[4];
    if ( v73 )
    {
      sub_4531B0(v73, 1, v114, "Sky/Weather");
      v72 = v114;
    }
    v74 = j_MemoryHeap_Alloc(&FormHeap, 1, v72 | 0x100000000LL, v111);
    ecx0->unk000[5] = (UInt32)v74;
    if ( !v74 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v75 = (void *)ecx0->unk000[5];
    v76 = (void (__cdecl *)(_DWORD *, void *, _DWORD, float *, int))v12[1];
    LODWORD(a3[0]) = 1;
    v76(v12, v75, v114, a3, 1);
    if ( (_BYTE)a11 )
    {
      GlobalObject = Sky_CreateOrGetGlobalObject();
      sub_5437C0(GlobalObject, a9, (int)v75, a10);
    }
    MemoryHeap_Free_checked(v75);
    ecx0->unk000[5] = 0;
  }
  v78 = (void (__cdecl *)(_DWORD *, int *, int, int *, int))v12[1];
  v79 = dword_B3B90C;
  a11 = 1;
  v78(v12, &v120, 4, &a11, 1);
  v80 = v120 == 0;
  dword_B3B90C = v120;
  if ( v80 )
  {
    if ( v79 )
    {
      sound = (const char *)OSGlobals->sound;
      if ( sound )
      {
        SoundManager_OpenMusicFile(sound, 0xFFFF, 0, 0);
        SoundManager_OpenMusicFile(sound, 0, 0, 0);
        SoundManager_PlayMusic((int)sound, (int)v12);
      }
    }
  }
  else if ( !v79 )
  {
    v81 = OSGlobals->sound;
    if ( v81 )
    {
      a10 = 1.0;
      sub_6ACD10(v81, 4u, 0, COERCE_INT(1.0));
    }
  }
  SaveLoad_LoadCreatedObjects(ecx0, a8, a9, a10, v12);
  v83 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1];
  a11 = 1;
  v83(v12, &v114, 2, &a11, 1);
  v84 = v114;
  if ( v114 )
  {
    v85 = (_DWORD *)ecx0->unk030[4];
    if ( v85 )
    {
      sub_4531B0(v85, 1, v114, "Quick Keys");
      v84 = v114;
    }
    v86 = j_MemoryHeap_Alloc(&FormHeap, 1, v84 | 0x100000000LL, v111);
    ecx0->unk000[5] = (UInt32)v86;
    if ( !v86 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v87 = (void *)ecx0->unk000[5];
    v88 = (double (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1];
    a11 = 1;
    v89 = v88(v12, v87, v114, &a11, 1);
    sub_5C1420(1, v89);
    MemoryHeap_Free_checked(v87);
    ecx0->unk000[5] = 0;
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x21u )
  {
    v90 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1];
    a11 = 1;
    v90(v12, &v114, 2, &a11, 1);
    v91 = v114;
    if ( v114 )
    {
      v92 = (_DWORD *)ecx0->unk030[4];
      if ( v92 )
      {
        sub_4531B0(v92, 1, v114, "HUD Reticle");
        v91 = v114;
      }
      v93 = j_MemoryHeap_Alloc(&FormHeap, 1, v91 | 0x100000000LL, v111);
      ecx0->unk000[5] = (UInt32)v93;
      if ( !v93 )
        sub_404EC0("Could not create save buffer, out of memory.");
      v94 = (void *)ecx0->unk000[5];
      v95 = (void (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1];
      a11 = 1;
      v95(v12, v94, v114, &a11, 1);
      sub_5A8B60(v112);
      MemoryHeap_Free_checked(v94);
      ecx0->unk000[5] = 0;
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x21u )
    sub_5A8BA0();
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x53u )
  {
    v96 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1];
    a11 = 1;
    v96(v12, &v114, 2, &a11, 1);
    v97 = v114;
    if ( v114 )
    {
      v98 = (_DWORD *)ecx0->unk030[4];
      if ( v98 )
      {
        sub_4531B0(v98, 1, v114, "Interface");
        v97 = v114;
      }
      v99 = j_MemoryHeap_Alloc(&FormHeap, 1, v97 | 0x100000000LL, v111);
      ecx0->unk000[5] = (UInt32)v99;
      if ( !v99 )
        sub_404EC0("Could not create save buffer, out of memory.");
      v100 = (void *)ecx0->unk000[5];
      v101 = (double (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1];
      a11 = 1;
      v102 = v101(v12, v100, v114, &a11, 1);
      sub_57C000(1, a8, a9, v102);
      MemoryHeap_Free_checked(v100);
      ecx0->unk000[5] = 0;
    }
  }
  v103 = SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x79u )
  {
    v104 = (void (__cdecl *)(_DWORD *, unsigned __int16 *, int, int *, int))v12[1];
    a11 = 1;
    v104(v12, &v114, 2, &a11, 1);
    LOWORD(v103) = v114;
    if ( v114 )
    {
      v105 = (_DWORD *)ecx0->unk030[4];
      if ( v105 )
      {
        sub_4531B0(v105, 1, v114, "Regions");
        LOWORD(v103) = v114;
      }
      v106 = j_MemoryHeap_Alloc(&FormHeap, 1, (unsigned __int16)v103 | 0x100000000LL, v111);
      ecx0->unk000[5] = (UInt32)v106;
      if ( !v106 )
        sub_404EC0("Could not create save buffer, out of memory.");
      v107 = (void *)ecx0->unk000[5];
      v108 = (void (__cdecl *)(_DWORD *, void *, _DWORD, int *, int))v12[1];
      a11 = 1;
      v108(v12, v107, v114, &a11, 1);
      sub_4A3100();
      LOWORD(v103) = MemoryHeap_Free_checked(v107);
      ecx0->unk000[5] = 0;
    }
  }
  ecx0->flags &= ~0x4000u;
  return (unsigned __int16)v103;
}
