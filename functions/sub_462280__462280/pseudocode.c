int __userpurge sub_462280@<eax>(int *this@<ecx>, double st5_0@<st2>, double a3@<st1>, double a4@<st0>, int a5)
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
  _DWORD *WorldSpace; // ebp
  TESObjectCELL *ParentCell; // eax
  TESObjectCELL *v18; // ebx
  PlayerCharacter *v19; // eax
  void (__cdecl *v20)(int, UInt32 *, int, int *, int); // eax
  void (__cdecl *v21)(int, _DWORD *, int, int *, int); // ecx
  unsigned __int16 v22; // ax
  void (__cdecl *v23)(int, int *, int, int *, int); // edx
  _DWORD *v24; // ecx
  FreeEntry *v25; // eax
  void (__cdecl *v26)(int, _DWORD *, _DWORD, int *, int); // eax
  unsigned __int16 v27; // ax
  void (__cdecl *v28)(int, int *, int, int *, int); // ecx
  _DWORD *v29; // ecx
  FreeEntry *v30; // eax
  void (__cdecl *v31)(int, _DWORD *, _DWORD, int *, int); // eax
  unsigned __int16 v32; // ax
  void (__cdecl *v33)(int, int *, int, int *, int); // ecx
  _DWORD *v34; // ecx
  FreeEntry *v35; // eax
  void (__cdecl *v36)(int, _DWORD *, _DWORD, int *, int); // eax
  unsigned __int16 v37; // ax
  void (__cdecl *v38)(int, int *, int, int *, int); // ecx
  _DWORD *v39; // ecx
  FreeEntry *v40; // eax
  Sky *GlobalObject; // eax
  void (__cdecl *v42)(int, _DWORD *, _DWORD, int *, int); // eax
  void (__cdecl *v43)(int, int *, int, int *, int); // edx
  unsigned __int16 v44; // ax
  void (__cdecl *v45)(int, int *, int, int *, int); // ecx
  _DWORD *v46; // ecx
  FreeEntry *v47; // eax
  void (__cdecl *v48)(int, _DWORD *, _DWORD, int *, int); // eax
  unsigned __int16 v49; // ax
  void (__cdecl *v50)(int, int *, int, int *, int); // ecx
  _DWORD *v51; // ecx
  FreeEntry *v52; // eax
  void (__cdecl *v53)(int, _DWORD *, _DWORD, int *, int); // eax
  unsigned __int16 v54; // ax
  void (__cdecl *v55)(int, int *, int, int *, int); // ecx
  _DWORD *v56; // ecx
  FreeEntry *v57; // eax
  void (__cdecl *v58)(int, _DWORD *, _DWORD, int *, int); // eax
  int result; // eax
  void (__cdecl *v60)(int, int *, int, int *, int); // ecx
  _DWORD *v61; // ecx
  FreeEntry *v62; // eax
  void *v63; // ebp
  void (__cdecl *v64)(int, void *, _DWORD, int *, int); // eax
  int v65; // [esp+0h] [ebp-38h]
  int v66; // [esp+0h] [ebp-38h]
  int v67; // [esp+4h] [ebp-34h]
  int v68; // [esp+8h] [ebp-30h]
  int v69; // [esp+Ch] [ebp-2Ch]
  UInt32 v70; // [esp+10h] [ebp-28h] BYREF
  int v71; // [esp+14h] [ebp-24h] BYREF
  int v72; // [esp+18h] [ebp-20h] BYREF
  UInt32 refID; // [esp+1Ch] [ebp-1Ch] BYREF
  int extXCoord; // [esp+20h] [ebp-18h] BYREF
  int extYCoord; // [esp+24h] [ebp-14h] BYREF
  int v76; // [esp+28h] [ebp-10h] BYREF
  _DWORD v77[3]; // [esp+2Ch] [ebp-Ch] BYREF

  v6 = (unsigned int)*(this + 6) >> 9;
  v7 = a5;
  v72 = *(_DWORD *)(TESDataHandler + 0x8C0);
  if ( (v6 & 1) != 0 )
  {
    *(this + 0x24) += 4;
  }
  else
  {
    v8 = *(void (__cdecl **)(int, int *, int, int *, int))(a5 + 8);
    v71 = 1;
    v8(a5, &v72, 4, &v71, 1);
  }
  CurrentWorldspace = TES::GetCurrentWorldspace(TES);
  v10 = (*(this + 6) & 0x200) == 0;
  refID = CurrentWorldspace->super.refID;
  if ( v10 )
  {
    v11 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v7 + 8);
    v71 = 1;
    v11(v7, &refID, 4, &v71, 1);
  }
  else
  {
    *(this + 0x24) += 4;
  }
  v12 = TES;
  v13 = *(this + 6);
  extXCoord = TES->extXCoord;
  extYCoord = v12->extYCoord;
  if ( (v13 & 0x200) != 0 )
  {
    *(this + 0x24) += 4;
  }
  else
  {
    v14 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v14(v7, &extXCoord, 4, &v71, 1);
  }
  if ( (*(this + 6) & 0x200) != 0 )
  {
    *(this + 0x24) += 4;
  }
  else
  {
    v15 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v15(v7, &extYCoord, 4, &v71, 1);
  }
  WorldSpace = (_DWORD *)TESObjectREFR_GetWorldSpace((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  ParentCell = TESObjectREFR_GetParentCell((TESObjectREFR *)TESDataHandler_g_PlayerRef);
  v18 = ParentCell;
  if ( !WorldSpace && !ParentCell )
    sub_404EC0("Player has no worldspace or parent cell, cannot save.");
  v70 = 0;
  if ( WorldSpace )
  {
    v70 = WorldSpace[3];
  }
  else if ( v18 )
  {
    v70 = v18->members.super.refID;
  }
  v19 = TESDataHandler_g_PlayerRef;
  v77[0] = LODWORD(TESDataHandler_g_PlayerRef->super.super.super.super.pos[0]);
  v77[1] = LODWORD(v19->super.super.super.super.pos[1]);
  v10 = (*(this + 6) & 0x200) == 0;
  v77[2] = LODWORD(v19->super.super.super.super.pos[2]);
  if ( v10 )
  {
    v20 = *(void (__cdecl **)(int, UInt32 *, int, int *, int))(v7 + 8);
    v71 = 1;
    v20(v7, &v70, 4, &v71, 1);
  }
  else
  {
    *(this + 0x24) += 4;
  }
  if ( (*(this + 6) & 0x200) != 0 )
  {
    *(this + 0x24) += 0xC;
  }
  else
  {
    v21 = *(void (__cdecl **)(int, _DWORD *, int, int *, int))(v7 + 8);
    v71 = 1;
    v21(v7, v77, 0xC, &v71, 1);
  }
  sub_45F820(this, v7);
  v22 = sub_441000((char *)TES);
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v22;
  if ( v10 )
  {
    v23 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v23(v7, &a5, 2, &v71, 1);
    v22 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v22 )
  {
    v24 = (_DWORD *)*(this + 0x10);
    if ( v24 )
    {
      sub_4531B0(v24, (char)WorldSpace, v22, "TES Class");
      v22 = a5;
    }
    v25 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v22 | 0x100000000LL, v65);
    *(this + 5) = (int)v25;
    if ( !v25 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    sub_4410D0((char *)TES);
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v26 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v26(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  v27 = sub_677010((int *)&ActorProcessManager_ptr, a4);
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v27;
  if ( v10 )
  {
    v28 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v28(v7, &a5, 2, &v71, 1);
    v27 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v27 )
  {
    v29 = (_DWORD *)*(this + 0x10);
    if ( v29 )
    {
      sub_4531B0(v29, (char)WorldSpace, v27, "Process Lists Class");
      v27 = a5;
    }
    v30 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v27 | 0x100000000LL, v65);
    *(this + 5) = (int)v30;
    if ( !v30 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    sub_677060((char *)&ActorProcessManager_ptr, a4);
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v31 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v31(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  v32 = sub_67C000(&dword_B3BDB0, a4);
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v32;
  if ( v10 )
  {
    v33 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v33(v7, &a5, 2, &v71, 1);
    v32 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v32 )
  {
    v34 = (_DWORD *)*(this + 0x10);
    if ( v34 )
    {
      sub_4531B0(v34, (char)WorldSpace, v32, "Spectator Events");
      v32 = a5;
    }
    v35 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v32 | 0x100000000LL, v65);
    *(this + 5) = (int)v35;
    if ( !v35 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    sub_67C0D0(&dword_B3BDB0, a4);
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v36 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v36(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  Sky_CreateOrGetGlobalObject();
  v37 = sub_5406F0();
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v37;
  if ( v10 )
  {
    v38 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v38(v7, &a5, 2, &v71, 1);
    v37 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v37 )
  {
    v39 = (_DWORD *)*(this + 0x10);
    if ( v39 )
    {
      sub_4531B0(v39, (char)WorldSpace, v37, "Sky/Weather");
      v37 = a5;
    }
    v40 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v37 | 0x100000000LL, v65);
    *(this + 5) = (int)v40;
    if ( !v40 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    GlobalObject = Sky_CreateOrGetGlobalObject();
    sub_540720(GlobalObject);
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v42 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v42(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  v10 = (*(this + 6) & 0x200) == 0;
  v76 = dword_B3B90C;
  if ( v10 )
  {
    v43 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v43(v7, &v76, 4, &v71, 1);
  }
  else
  {
    *(this + 0x24) += 4;
  }
  SaveLoad_SaveCreatedObjects(this, v7, v65, v67, v68, v69);
  v44 = sub_5C0D60();
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v44;
  if ( v10 )
  {
    v45 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v45(v7, &a5, 2, &v71, 1);
    v44 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v44 )
  {
    v46 = (_DWORD *)*(this + 0x10);
    if ( v46 )
    {
      sub_4531B0(v46, (char)WorldSpace, v44, "Quick Keys");
      v44 = a5;
    }
    v47 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v44 | 0x100000000LL, v66);
    *(this + 5) = (int)v47;
    if ( !v47 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    sub_5C0E30();
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v48 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v48(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  v49 = sub_5A8250();
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v49;
  if ( v10 )
  {
    v50 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v50(v7, &a5, 2, &v71, 1);
    v49 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v49 )
  {
    v51 = (_DWORD *)*(this + 0x10);
    if ( v51 )
    {
      sub_4531B0(v51, (char)WorldSpace, v49, "HUD Reticle");
      v49 = a5;
    }
    v52 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v49 | 0x100000000LL, v66);
    *(this + 5) = (int)v52;
    if ( !v52 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    sub_5A8B20();
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v53 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v53(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  v54 = sub_57BE10();
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = v54;
  if ( v10 )
  {
    v55 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v55(v7, &a5, 2, &v71, 1);
    v54 = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( v54 )
  {
    v56 = (_DWORD *)*(this + 0x10);
    if ( v56 )
    {
      sub_4531B0(v56, (char)WorldSpace, v54, "Interface");
      v54 = a5;
    }
    v57 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, v54 | 0x100000000LL, v66);
    *(this + 5) = (int)v57;
    if ( !v57 )
      sub_404EC0("Could not create save buffer, out of memory.");
    WorldSpace = (_DWORD *)*(this + 5);
    sub_57BE30((char)WorldSpace, st5_0, a3, a4);
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v58 = *(void (__cdecl **)(int, _DWORD *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v58(v7, WorldSpace, (unsigned __int16)a5, &v71, 1);
    }
    MemoryHeap_Free_checked(WorldSpace);
    *(this + 5) = 0;
  }
  result = (unsigned __int16)sub_4A2FF0();
  v10 = (*(this + 6) & 0x200) == 0;
  a5 = (unsigned __int16)result;
  if ( v10 )
  {
    v60 = *(void (__cdecl **)(int, int *, int, int *, int))(v7 + 8);
    v71 = 1;
    v60(v7, &a5, 2, &v71, 1);
    result = a5;
  }
  else
  {
    *(this + 0x24) += 2;
  }
  if ( (_WORD)result )
  {
    v61 = (_DWORD *)*(this + 0x10);
    if ( v61 )
    {
      sub_4531B0(v61, (char)WorldSpace, (unsigned __int16)result, "Regions");
      LOWORD(result) = a5;
    }
    v62 = j_MemoryHeap_Alloc(&FormHeap, (char)WorldSpace, (unsigned __int16)result | 0x100000000LL, v66);
    *(this + 5) = (int)v62;
    if ( !v62 )
      sub_404EC0("Could not create save buffer, out of memory.");
    v63 = (void *)*(this + 5);
    sub_4A3020();
    if ( (*(this + 6) & 0x200) != 0 )
    {
      *(this + 0x24) += (unsigned __int16)a5;
    }
    else
    {
      v64 = *(void (__cdecl **)(int, void *, _DWORD, int *, int))(v7 + 8);
      v71 = 1;
      v64(v7, v63, (unsigned __int16)a5, &v71, 1);
    }
    result = MemoryHeap_Free_checked(v63);
    *(this + 5) = 0;
  }
  return result;
}
