int __userpurge sub_462280@<eax>(UInt32 *this@<ecx>, double a2@<st0>, int a3)
{
  unsigned int v6; // edx
  int v7; // edi
  void (__cdecl *v8)(int, int *, int, int *, int); // edx
  TESWorldSpace *CurrentWorldspace; // eax
  bool v10; // zf
  void (__cdecl *v11)(int, UInt32 *, int, int *, int); // ecx
  TES *v12; // eax
  int v13; // ecx
  void (__cdecl *v14)(int, int *, int, int *, int); // ecx
  void (__cdecl *v15)(int, int *, int, int *, int); // edx
  TESWorldSpace *WorldSpace; // ebp
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v18; // ebx
  PlayerCharacter *v19; // eax
  void (__cdecl *v20)(int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v21)(int, int *, int, int *, int); // ecx
  unsigned __int16 v22; // ax
  void (__cdecl *v23)(int, int *, int, int *, int); // edx
  _DWORD *v24; // ecx
  FreeEntry *v25; // eax
  void (__cdecl *v26)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  unsigned __int16 v27; // ax
  void (__cdecl *v28)(int, int *, int, int *, int); // ecx
  _DWORD *v29; // ecx
  FreeEntry *v30; // eax
  void (__cdecl *v31)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  unsigned __int16 v32; // ax
  void (__cdecl *v33)(int, int *, int, int *, int); // ecx
  _DWORD *v34; // ecx
  FreeEntry *v35; // eax
  void (__cdecl *v36)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  unsigned __int16 v37; // ax
  void (__cdecl *v38)(int, int *, int, int *, int); // ecx
  _DWORD *v39; // ecx
  FreeEntry *v40; // eax
  Sky *GlobalObject; // eax
  void (__cdecl *v42)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  void (__cdecl *v43)(int, int *, int, int *, int); // edx
  unsigned __int16 v44; // ax
  void (__cdecl *v45)(int, int *, int, int *, int); // ecx
  _DWORD *v46; // ecx
  FreeEntry *v47; // eax
  void (__cdecl *v48)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  unsigned __int16 v49; // ax
  void (__cdecl *v50)(int, int *, int, int *, int); // ecx
  _DWORD *v51; // ecx
  FreeEntry *v52; // eax
  int v53; // ecx
  void (__cdecl *v54)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  unsigned __int16 v55; // ax
  void (__cdecl *v56)(int, int *, int, int *, int); // ecx
  _DWORD *v57; // ecx
  FreeEntry *v58; // eax
  void (__cdecl *v59)(int, TESWorldSpace *, _DWORD, int *, int); // eax
  int result; // eax
  void (__cdecl *v61)(int, int *, int, int *, int); // ecx
  _DWORD *v62; // ecx
  FreeEntry *v63; // eax
  void *v64; // ebp
  void (__cdecl *v65)(int, void *, _DWORD, int *, int); // eax
  int v66; // [esp+0h] [ebp-38h]
  int v67; // [esp+0h] [ebp-38h]
  int v68; // [esp+4h] [ebp-34h]
  int v69; // [esp+8h] [ebp-30h]
  int v70; // [esp+Ch] [ebp-2Ch]
  UInt32 v71; // [esp+10h] [ebp-28h] BYREF
  int v72; // [esp+14h] [ebp-24h] BYREF
  int v73; // [esp+18h] [ebp-20h] BYREF
  UInt32 refID; // [esp+1Ch] [ebp-1Ch] BYREF
  int extXCoord; // [esp+20h] [ebp-18h] BYREF
  int extYCoord; // [esp+24h] [ebp-14h] BYREF
  int v77; // [esp+28h] [ebp-10h] BYREF
  int v78; // [esp+2Ch] [ebp-Ch] BYREF
  int v79; // [esp+30h] [ebp-8h]
  float v80; // [esp+34h] [ebp-4h]

  v6 = *(this + 6) >> 9; /*0x462296*/
  v7 = a3; /*0x46229d*/
  v73 = *(_DWORD *)(g_TESDataHandler + 0x8C0); /*0x4622a1*/
  if ( (v6 & 1) != 0 ) /*0x4622af*/
  {
    *(this + 0x24) += 4; /*0x4622b1*/
  }
  else
  {
    v8 = *(void (__cdecl **)(int, int *, int, int *, int))(a3 + 8); /*0x4622b9*/
    v72 = 1; /*0x4622c9*/
    v8(a3, &v73, 4, &v72, 1); /*0x4622cd*/
  }
  CurrentWorldspace = TES::GetCurrentWorldspace(MEMORY[0xB333A0]); /*0x4622d8*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x4622e6*/
  refID = CurrentWorldspace->super.refID; /*0x4622e9*/
  if ( v10 ) /*0x4622ed*/
  {
    v11 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v7 + 8); /*0x4622f7*/
    v72 = 1; /*0x462307*/
    v11(v7, &refID, 4, &v72, 1); /*0x46230b*/
  }
  else
  {
    *(this + 0x24) += 4; /*0x4622ef*/
  }
  v12 = MEMORY[0xB333A0]; /*0x462310*/
  v13 = *(this + 6); /*0x462318*/
  extXCoord = MEMORY[0xB333A0]->extXCoord; /*0x46231b*/
  extYCoord = v12->extYCoord; /*0x462328*/
  if ( (v13 & 0x200) != 0 ) /*0x46232c*/
  {
    *(this + 0x24) += 4; /*0x46232e*/
  }
  else
  {
    v14 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x462336*/
    v72 = 1; /*0x462346*/
    v14(v7, &extXCoord, 4, &v72, 1); /*0x46234a*/
  }
  if ( (*(this + 6) & 0x200) != 0 ) /*0x462358*/
  {
    *(this + 0x24) += 4; /*0x46235a*/
  }
  else
  {
    v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x462362*/
    v72 = 1; /*0x462372*/
    v15(v7, &extYCoord, 4, &v72, 1); /*0x462376*/
  }
  WorldSpace = TESObjectREFR_GetWorldSpace((TESObjectREFR *)reference); /*0x46238c*/
  ParentCell = Shared_GetDwordAtOffset40((TESObjectREFR *)reference); /*0x46238e*/
  v18 = ParentCell; /*0x462395*/
  if ( !WorldSpace && !ParentCell ) /*0x46239b*/
    sub_404EC0("Player has no worldspace or parent cell, cannot save."); /*0x4623a2*/
  v71 = 0; /*0x4623ac*/
  if ( WorldSpace ) /*0x4623b4*/
  {
    v71 = WorldSpace->super.refID; /*0x4623b9*/
  }
  else if ( v18 ) /*0x4623c1*/
  {
    v71 = v18->members.super.refID; /*0x4623c6*/
  }
  v19 = reference; /*0x4623ca*/
  v78 = LODWORD(reference->super.super.super.super.pos[0]); /*0x4623d2*/
  v79 = LODWORD(v19->super.super.super.super.pos[1]); /*0x4623d9*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x4623e6*/
  v80 = v19->super.super.super.super.pos[2]; /*0x4623e8*/
  if ( v10 ) /*0x4623ec*/
  {
    v20 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v7 + 8); /*0x4623f7*/
    v72 = 1; /*0x462409*/
    v20(v7, &v71, 4, &v72, 1); /*0x462411*/
  }
  else
  {
    *(this + 0x24) += 4; /*0x4623ee*/
  }
  if ( (*(this + 6) & 0x200) != 0 ) /*0x462423*/
  {
    *(this + 0x24) += 0xC; /*0x462425*/
  }
  else
  {
    v21 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x46242e*/
    v72 = 1; /*0x46243f*/
    v21(v7, &v78, 0xC, &v72, 1); /*0x462443*/
  }
  sub_45F820(this, v7); /*0x46244b*/
  v22 = sub_441000((char *)MEMORY[0xB333A0]); /*0x462456*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x462464*/
  a3 = v22; /*0x462467*/
  if ( v10 ) /*0x46246b*/
  {
    v23 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x462476*/
    v72 = 1; /*0x462487*/
    v23(v7, &a3, 2, &v72, 1); /*0x46248b*/
    v22 = a3; /*0x46248d*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x46246d*/
  }
  if ( v22 ) /*0x462497*/
  {
    v24 = (_DWORD *)*(this + 0x10); /*0x46249d*/
    if ( v24 ) /*0x4624a2*/
    {
      sub_4531B0(v24, (char)WorldSpace, v22, "TES Class"); /*0x4624ad*/
      v22 = a3; /*0x4624b2*/
    }
    v25 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v22 | 0x100000000LL, v66); /*0x4624c0*/
    *(this + 5) = (UInt32)v25; /*0x4624c7*/
    if ( !v25 ) /*0x4624ca*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x4624d1*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x4624df*/
    sub_4410D0((char *)MEMORY[0xB333A0]); /*0x4624e2*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x4624f5*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x4624f7*/
    }
    else
    {
      v26 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x462506*/
      v72 = 1; /*0x46250b*/
      v26(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x46250f*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x46251a*/
    *(this + 5) = 0; /*0x46251f*/
  }
  v27 = ActorProcessManager_GetCrimeSaveSize((int *)&qword_B3BB2C[0x75]); /*0x46252b*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x462539*/
  a3 = v27; /*0x46253c*/
  if ( v10 ) /*0x462540*/
  {
    v28 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x46254b*/
    v72 = 1; /*0x46255c*/
    v28(v7, &a3, 2, &v72, 1); /*0x462560*/
    v27 = a3; /*0x462562*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x462542*/
  }
  if ( v27 ) /*0x46256c*/
  {
    v29 = (_DWORD *)*(this + 0x10); /*0x462572*/
    if ( v29 ) /*0x462577*/
    {
      sub_4531B0(v29, (char)WorldSpace, v27, "Process Lists Class"); /*0x462582*/
      v27 = a3; /*0x462587*/
    }
    v30 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v27 | 0x100000000LL, v66); /*0x462595*/
    *(this + 5) = (UInt32)v30; /*0x46259c*/
    if ( !v30 ) /*0x46259f*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x4625a6*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x4625ae*/
    ActorProcessManager_SaveCrimes((char *)&qword_B3BB2C[0x75]); /*0x4625b6*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x4625c9*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x4625cb*/
    }
    else
    {
      v31 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x4625da*/
      v72 = 1; /*0x4625df*/
      v31(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x4625e3*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x4625ee*/
    *(this + 5) = 0; /*0x4625f3*/
  }
  v32 = sub_67C000((int *)&qword_B3BB2C[0xA1]); /*0x4625ff*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x46260d*/
  a3 = v32; /*0x462610*/
  if ( v10 ) /*0x462614*/
  {
    v33 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x46261f*/
    v72 = 1; /*0x462630*/
    v33(v7, &a3, 2, &v72, 1); /*0x462634*/
    v32 = a3; /*0x462636*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x462616*/
  }
  if ( v32 ) /*0x462640*/
  {
    v34 = (_DWORD *)*(this + 0x10); /*0x462646*/
    if ( v34 ) /*0x46264b*/
    {
      sub_4531B0(v34, (char)WorldSpace, v32, "Spectator Events"); /*0x462656*/
      v32 = a3; /*0x46265b*/
    }
    v35 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v32 | 0x100000000LL, v66); /*0x462669*/
    *(this + 5) = (UInt32)v35; /*0x462670*/
    if ( !v35 ) /*0x462673*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x46267a*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x462682*/
    sub_67C0D0((int *)&qword_B3BB2C[0xA1]); /*0x46268a*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x46269d*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x46269f*/
    }
    else
    {
      v36 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x4626ae*/
      v72 = 1; /*0x4626b3*/
      v36(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x4626b7*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x4626c2*/
    *(this + 5) = 0; /*0x4626c7*/
  }
  Sky_CreateOrGetGlobalObject(); /*0x4626ce*/
  v37 = sub_5406F0(); /*0x4626d5*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x4626e3*/
  a3 = v37; /*0x4626e6*/
  if ( v10 ) /*0x4626ea*/
  {
    v38 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x4626f5*/
    v72 = 1; /*0x462706*/
    v38(v7, &a3, 2, &v72, 1); /*0x46270a*/
    v37 = a3; /*0x46270c*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x4626ec*/
  }
  if ( v37 ) /*0x462716*/
  {
    v39 = (_DWORD *)*(this + 0x10); /*0x46271c*/
    if ( v39 ) /*0x462721*/
    {
      sub_4531B0(v39, (char)WorldSpace, v37, "Sky/Weather"); /*0x46272c*/
      v37 = a3; /*0x462731*/
    }
    v40 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v37 | 0x100000000LL, v66); /*0x46273f*/
    *(this + 5) = (UInt32)v40; /*0x462746*/
    if ( !v40 ) /*0x462749*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x462750*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x462758*/
    GlobalObject = Sky_CreateOrGetGlobalObject(); /*0x46275b*/
    sub_540720(GlobalObject); /*0x462762*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x462775*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x462777*/
    }
    else
    {
      v42 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x462786*/
      v72 = 1; /*0x46278b*/
      v42(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x46278f*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x46279a*/
    *(this + 5) = 0; /*0x46279f*/
  }
  v10 = (*(this + 6) & 0x200) == 0; /*0x4627b2*/
  v77 = unk_B3B90C; /*0x4627b5*/
  if ( v10 ) /*0x4627b9*/
  {
    v43 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x4627c4*/
    v72 = 1; /*0x4627d5*/
    v43(v7, &v77, 4, &v72, 1); /*0x4627d9*/
  }
  else
  {
    *(this + 0x24) += 4; /*0x4627bb*/
  }
  SaveLoad_SaveCreatedObjects(this, v7, v66, v68, v69, v70, v71, v72, v73, refID, extXCoord, extYCoord, v77, v78, v79); /*0x4627e1*/
  v44 = sub_5C0D60(); /*0x4627e6*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x4627f4*/
  a3 = v44; /*0x4627f7*/
  if ( v10 ) /*0x4627fb*/
  {
    v45 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x462806*/
    v72 = 1; /*0x462817*/
    v45(v7, &a3, 2, &v72, 1); /*0x46281b*/
    v44 = a3; /*0x46281d*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x4627fd*/
  }
  if ( v44 ) /*0x462827*/
  {
    v46 = (_DWORD *)*(this + 0x10); /*0x46282d*/
    if ( v46 ) /*0x462832*/
    {
      sub_4531B0(v46, (char)WorldSpace, v44, "Quick Keys"); /*0x46283d*/
      v44 = a3; /*0x462842*/
    }
    v47 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v44 | 0x100000000LL, v67); /*0x462850*/
    *(this + 5) = (UInt32)v47; /*0x462857*/
    if ( !v47 ) /*0x46285a*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x462861*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x462869*/
    sub_5C0E30((int)WorldSpace); /*0x46286c*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x46287f*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x462881*/
    }
    else
    {
      v48 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x462890*/
      v72 = 1; /*0x462895*/
      v48(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x462899*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x4628a4*/
    *(this + 5) = 0; /*0x4628a9*/
  }
  v49 = sub_5A8250(); /*0x4628b0*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x4628be*/
  a3 = v49; /*0x4628c1*/
  if ( v10 ) /*0x4628c5*/
  {
    v50 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x4628d0*/
    v72 = 1; /*0x4628e1*/
    v50(v7, &a3, 2, &v72, 1); /*0x4628e5*/
    v49 = a3; /*0x4628e7*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x4628c7*/
  }
  if ( v49 ) /*0x4628f1*/
  {
    v51 = (_DWORD *)*(this + 0x10); /*0x4628f7*/
    if ( v51 ) /*0x4628fc*/
    {
      sub_4531B0(v51, (char)WorldSpace, v49, "HUD Reticle"); /*0x462907*/
      v49 = a3; /*0x46290c*/
    }
    v52 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v49 | 0x100000000LL, v67); /*0x46291a*/
    *(this + 5) = (UInt32)v52; /*0x462921*/
    if ( !v52 ) /*0x462924*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x46292b*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x462933*/
    sub_5A8B20(v53); /*0x462936*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x462949*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x46294b*/
    }
    else
    {
      v54 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x46295a*/
      v72 = 1; /*0x46295f*/
      v54(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x462963*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x46296e*/
    *(this + 5) = 0; /*0x462973*/
  }
  v55 = sub_57BE10(); /*0x46297a*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x462988*/
  a3 = v55; /*0x46298b*/
  if ( v10 ) /*0x46298f*/
  {
    v56 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x46299a*/
    v72 = 1; /*0x4629ab*/
    v56(v7, &a3, 2, &v72, 1); /*0x4629af*/
    v55 = a3; /*0x4629b1*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x462991*/
  }
  if ( v55 ) /*0x4629bb*/
  {
    v57 = (_DWORD *)*(this + 0x10); /*0x4629c1*/
    if ( v57 ) /*0x4629c6*/
    {
      sub_4531B0(v57, (char)WorldSpace, v55, "Interface"); /*0x4629d1*/
      v55 = a3; /*0x4629d6*/
    }
    v58 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v55 | 0x100000000LL, v67); /*0x4629e4*/
    *(this + 5) = (UInt32)v58; /*0x4629eb*/
    if ( !v58 ) /*0x4629ee*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x4629f5*/
    WorldSpace = (TESWorldSpace *)*(this + 5); /*0x4629fd*/
    sub_57BE30(a2); /*0x462a00*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x462a13*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x462a15*/
    }
    else
    {
      v59 = *(void (__cdecl **)(int, TESWorldSpace *, _DWORD, int *, int))(v7 + 8); /*0x462a24*/
      v72 = 1; /*0x462a29*/
      v59(v7, WorldSpace, (unsigned __int16)a3, &v72, 1); /*0x462a2d*/
    }
    MemoryHeap_Free_checked(WorldSpace); /*0x462a38*/
    *(this + 5) = 0; /*0x462a3d*/
  }
  result = (unsigned __int16)sub_4A2FF0(); /*0x462a4c*/
  v10 = (*(this + 6) & 0x200) == 0; /*0x462a52*/
  a3 = (unsigned __int16)result; /*0x462a55*/
  if ( v10 ) /*0x462a59*/
  {
    v61 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8); /*0x462a64*/
    v72 = 1; /*0x462a75*/
    v61(v7, &a3, 2, &v72, 1); /*0x462a79*/
    result = a3; /*0x462a7b*/
  }
  else
  {
    *(this + 0x24) += 2; /*0x462a5b*/
  }
  if ( (_WORD)result ) /*0x462a85*/
  {
    v62 = (_DWORD *)*(this + 0x10); /*0x462a8b*/
    if ( v62 ) /*0x462a90*/
    {
      sub_4531B0(v62, (char)WorldSpace, (unsigned __int16)result, "Regions"); /*0x462a9b*/
      LOWORD(result) = a3; /*0x462aa0*/
    }
    v63 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, (unsigned __int16)result | 0x100000000LL, v67); /*0x462aae*/
    *(this + 5) = (UInt32)v63; /*0x462ab5*/
    if ( !v63 ) /*0x462ab8*/
      sub_404EC0("Could not create save buffer, out of memory."); /*0x462abf*/
    v64 = (void *)*(this + 5); /*0x462ac7*/
    sub_4A3020((int)this); /*0x462aca*/
    if ( (*(this + 6) & 0x200) != 0 ) /*0x462add*/
    {
      *(this + 0x24) += (unsigned __int16)a3; /*0x462adf*/
    }
    else
    {
      v65 = *(void (__cdecl **)(int, void *, _DWORD, int *, int))(v7 + 8); /*0x462aee*/
      v72 = 1; /*0x462af3*/
      v65(v7, v64, (unsigned __int16)a3, &v72, 1); /*0x462af7*/
    }
    result = MemoryHeap_Free_checked(v64); /*0x462b02*/
    *(this + 5) = 0; /*0x462b07*/
  }
  return result; /*0x462b0e*/
}
