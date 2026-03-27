char __userpurge sub_60D3C0@<al>(TESForm **ecx0@<ecx>, int a2@<ebx>, int *a3, int a4, int a5)
{
  UInt32 v6; // ebp
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  char v10; // al
  TESPackage *v11; // ecx
  UInt32 v12; // eax
  int *v13; // ebx
  int v14; // esi
  void *v15; // esi
  TESPackage *v16; // esi
  TESForm *v17; // eax
  TESPackage *v18; // eax
  _DWORD *v19; // esi
  int v20; // eax
  int v21; // edx
  const char *v22; // eax
  const char *v23; // eax
  UInt32 v24; // eax
  TESSaveLoad *v25; // ecx
  UInt32 *v26; // edi
  UInt32 v27; // esi
  TESForm *v28; // ecx
  const char *v29; // eax
  const char *v30; // eax
  UInt32 v31; // edx
  int v33; // [esp-18h] [ebp-34h]
  size_t v34; // [esp-14h] [ebp-30h]
  size_t v35; // [esp-14h] [ebp-30h]
  int v36; // [esp-14h] [ebp-30h]
  int v37; // [esp-14h] [ebp-30h]
  size_t v38; // [esp-14h] [ebp-30h]
  int v39; // [esp-14h] [ebp-30h]
  int v40; // [esp-14h] [ebp-30h]
  size_t v41; // [esp-10h] [ebp-2Ch]
  int v42; // [esp-10h] [ebp-2Ch]
  int v43; // [esp-10h] [ebp-2Ch]
  int v44; // [esp-8h] [ebp-24h]
  size_t v45; // [esp-4h] [ebp-20h]
  size_t v46; // [esp-4h] [ebp-20h]
  int v47; // [esp-4h] [ebp-20h]
  char v48; // [esp+2h] [ebp-1Ah]
  int v49; // [esp+4h] [ebp-18h]
  int v50; // [esp+4h] [ebp-18h]
  int a1; // [esp+8h] [ebp-14h]
  int a1a; // [esp+8h] [ebp-14h]
  int v53; // [esp+Ch] [ebp-10h]
  int v54; // [esp+10h] [ebp-Ch] BYREF
  int v55; // [esp+14h] [ebp-8h] BYREF
  int Dst; // [esp+18h] [ebp-4h] BYREF
  _UNKNOWN *retaddr; // [esp+1Ch] [ebp+0h]

  v6 = 0;
  v55 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v45) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v45);
    if ( Dst != 0x4B4F4C42 )
    {
      v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v7 )
      {
        v8 = TESForm_LookupByFormID(*v7);
        v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v8->vtbl->GetEditorName)(
                             v8,
                             *((unsigned __int8 *)v7 + 9),
                             *(UInt32 *)((char *)v7 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\BaseProcess.cpp",
          0x12D,
          *v7,
          v9,
          v44,
          v47);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\BaseProcess.cpp",
          0x12D,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v46) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v55, v46);
  }
  LODWORD(v45) = 4;
  v10 = SaveLoad_LoadFormID(&v54, v45, v49, a1, v53);
  v11 = (TESPackage *)ecx0[2];
  HIBYTE(v50) = v10;
  if ( v11 )
  {
    if ( sub_5660A0(v11) )
      sub_45C7A0((char *)SaveLoad_CurrentSavegame, ecx0[2]);
  }
  v12 = a1a;
  HIDWORD(v41) = a2;
  v13 = a3;
  ecx0[2] = 0;
  BYTE2(v50) = 0;
  if ( a1a )
  {
    v14 = Dst;
    if ( (Dst & 0x20000) != 0 )
    {
      if ( TESDataHandler_IsFormIDCreated_(a1a) )
      {
        LODWORD(v41) = 1;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &a3, v41);
        if ( (v14 & 0x10000) != 0 )
        {
          ecx0[2] = (TESForm *)a1a;
        }
        else
        {
          v15 = OblivionDynamicCast(
                  v13,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&MobileObject `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
          if ( !v15 )
          {
            HIDWORD(v35) = "Package being created on non-actor!";
            (*(void (__thiscall **)(int))(*(_DWORD *)dword_B34D90 + 0x18))(dword_B34D90);
          }
          v16 = (TESPackage *)sub_463EC0((char *)SaveLoad_CurrentSavegame, v50, (int)v15, (char)retaddr);
          ((void (__thiscall *)(TESPackage *))v16->__vftable[1].super.super.CopyFromBase)(v16);
          ecx0[2] = (TESForm *)v16;
          if ( v16->members.procedureArrayIndex == 0xFFFFFFFF )
            sub_5672A0(v16);
        }
        goto LABEL_23;
      }
      v12 = a1a;
    }
    v17 = TESForm_LookupByFormID(v12);
    v18 = (TESPackage *)OblivionDynamicCast(
                          v17,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESPackage `RTTI Type Descriptor',
                          0);
    ecx0[2] = (TESForm *)v18;
    if ( v18 )
      sub_5672A0(v18);
    else
      BYTE2(v50) = 1;
LABEL_23:
    LODWORD(v35) = 4;
    v19 = ecx0 + 1;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 1, v35);
    if ( !v48 )
      goto LABEL_30;
    goto LABEL_24;
  }
  if ( !HIBYTE(v50) )
    goto LABEL_30;
  SaveLoad_AdvanceBufferOffset(SaveLoad_CurrentSavegame, 4);
  v19 = ecx0 + 1;
  ecx0[1] = 0;
LABEL_24:
  v20 = v13[3];
  v21 = *v13;
  if ( v50 )
  {
    v22 = (const char *)(*(int (__thiscall **)(int *, int, int))(v21 + 0xD4))(v13, v20, v50);
    PrintError("%s %08X couldn't find package %08X while loading and will try to choose a new one.", v22, v33, v36);
  }
  else
  {
    v23 = (const char *)(*(int (__thiscall **)(int *, int))(v21 + 0xD4))(v13, v20);
    PrintError("%s %08X couldn't find a plugin package while loading and will try to choose a new one.", v23, v37);
  }
  *v19 = 0xFFFFFFFF;
LABEL_30:
  LODWORD(v34) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 3, v34);
  LODWORD(v38) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, ecx0 + 4, v38);
  LOBYTE(v24) = sub_45A170();
  if ( (_BYTE)v24 )
  {
    v25 = SaveLoad_CurrentSavegame;
    v26 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v27 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v26 )
    {
      v28 = TESForm_LookupByFormID(*v26);
      v24 = v6 + (unsigned __int16)a1a;
      if ( v27 <= v24 )
      {
        if ( v27 < v24 )
        {
          v30 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v28->vtbl->GetEditorName)(
                                v28,
                                *((unsigned __int8 *)v26 + 9),
                                *(UInt32 *)((char *)v26 + 5));
          LOBYTE(v24) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s"
                          " with version %i and flags %08X",
                          v6 + (unsigned __int16)a1a - v27,
                          ".\\AI\\BaseProcess.cpp",
                          0x17B,
                          *v26,
                          v30,
                          v40,
                          v43);
        }
      }
      else
      {
        v29 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v28->vtbl->GetEditorName)(
                              v28,
                              *((unsigned __int8 *)v26 + 9),
                              *(UInt32 *)((char *)v26 + 5));
        LOBYTE(v24) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s wi"
                        "th version %i and flags %08X",
                        v27 - (unsigned __int16)a1a - v6,
                        ".\\AI\\BaseProcess.cpp",
                        0x17B,
                        *v26,
                        v29,
                        v39,
                        v42);
      }
    }
    else
    {
      LOBYTE(v24) = a1a;
      v31 = (unsigned __int16)a1a + v6;
      if ( v27 <= v31 )
      {
        if ( v27 < v31 )
          LOBYTE(v24) = PrintError(
                          "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
                          v6 + (unsigned __int16)a1a - v27,
                          ".\\AI\\BaseProcess.cpp",
                          0x17B,
                          LOBYTE(v25[1].createdObjectList.next));
      }
      else
      {
        LOBYTE(v24) = PrintError(
                        "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
                        v27 - (unsigned __int16)a1a - v6,
                        ".\\AI\\BaseProcess.cpp",
                        0x17B,
                        LOBYTE(v25[1].createdObjectList.next));
      }
    }
  }
  return v24;
}
