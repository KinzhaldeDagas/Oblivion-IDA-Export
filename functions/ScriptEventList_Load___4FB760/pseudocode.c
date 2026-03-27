void __usercall ScriptEventList_Load_(int *a1@<ecx>, double a2@<st0>)
{
  UInt32 v3; // ebp
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  int v7; // esi
  TESSaveLoad *v8; // ecx
  void *v9; // eax
  TESSaveLoad *v10; // ecx
  UInt32 *v11; // edi
  UInt32 v12; // esi
  TESForm *v13; // ecx
  UInt32 v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  UInt32 v17; // edx
  double v18; // [esp+0h] [ebp-50h]
  int v19; // [esp+0h] [ebp-50h]
  int v20; // [esp+0h] [ebp-50h]
  size_t v21; // [esp+4h] [ebp-4Ch]
  size_t v22; // [esp+4h] [ebp-4Ch]
  size_t v23; // [esp+4h] [ebp-4Ch]
  int v24; // [esp+4h] [ebp-4Ch]
  int v25; // [esp+4h] [ebp-4Ch]
  int v26; // [esp+8h] [ebp-48h]
  size_t v27; // [esp+Ch] [ebp-44h]
  size_t v28; // [esp+Ch] [ebp-44h]
  int v29; // [esp+Ch] [ebp-44h]
  size_t v30; // [esp+Ch] [ebp-44h]
  size_t v31; // [esp+Ch] [ebp-44h]
  int v32; // [esp+14h] [ebp-3Ch]
  int v33; // [esp+18h] [ebp-38h]
  int v34; // [esp+1Ch] [ebp-34h]
  char v35; // [esp+2Bh] [ebp-25h] BYREF
  unsigned __int16 v36; // [esp+2Ch] [ebp-24h]
  char v37[4]; // [esp+30h] [ebp-20h] BYREF
  unsigned __int16 v38; // [esp+34h] [ebp-1Ch] BYREF
  char ArgList[4]; // [esp+38h] [ebp-18h] BYREF
  int v40; // [esp+3Ch] [ebp-14h] BYREF
  __int64 Dst; // [esp+40h] [ebp-10h] BYREF
  double v42; // [esp+48h] [ebp-8h] BYREF

  v40 = 0;
  v3 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v27) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v27);
    if ( (_DWORD)Dst != 0x4B4F4C42 )
    {
      v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v4 )
      {
        v5 = TESForm_LookupByFormID(*v4);
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)(
                             v5,
                             *((unsigned __int8 *)v4 + 9),
                             *(UInt32 *)((char *)v4 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          "..\\TES Shared\\TESScript.cpp",
          0x29C,
          *v4,
          v6,
          v26,
          v29);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          "..\\TES Shared\\TESScript.cpp",
          0x29C,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v3 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v28) = 2;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v40, v28);
  }
  LODWORD(v27) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v38, v27);
  v7 = 0;
  if ( v38 )
  {
    do
    {
      __asm { fldz }
      v8 = SaveLoad_CurrentSavegame;
      __asm { fstp    [esp+40h+var_8] }
      *(_DWORD *)ArgList = 0;
      if ( LOBYTE(v8[1].createdObjectList.next) < 0x75u )
        goto LABEL_13;
      LODWORD(v30) = 4;
      SaveLoad_LoadData((int)v8, ArgList, v30);
      if ( (*(_DWORD *)ArgList & 0xF0000000) != 0 )
      {
        *(_DWORD *)ArgList &= 0xFFFFFFFu;
        LODWORD(v31) = 4;
        SaveLoad_LoadFormID((char *)&Dst + 4, v31, v32, v33, v34);
        LODWORD(Dst) = v40;
      }
      else
      {
        LODWORD(v31) = 8;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v42, v31);
      }
      v8 = SaveLoad_CurrentSavegame;
      if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x75u )
      {
LABEL_13:
        LODWORD(v21) = 4;
        SaveLoad_LoadData((int)v8, v37, v21);
        LODWORD(v22) = 8;
        SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v22);
      }
      __asm { fld     qword ptr [esp+48h+Dst] }
      __asm { fstp    [esp+50h+var_50]; double }
      sub_4FB630(a1, *(int *)v37, v18);
      ++v7;
    }
    while ( v7 < v36 );
  }
  LODWORD(v21) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v35, v21);
  if ( v35 )
  {
    v9 = (void *)FormHeapAlloc(8u);
    LODWORD(v23) = 8;
    a1[4] = (int)v9;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v9, v23);
  }
  if ( sub_45A170() )
  {
    v10 = SaveLoad_CurrentSavegame;
    v11 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v12 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v11 )
    {
      v13 = TESForm_LookupByFormID(*v11);
      v14 = v3 + v38;
      if ( v12 <= v14 )
      {
        if ( v12 < v14 )
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)(
                                v13,
                                *((unsigned __int8 *)v11 + 9),
                                *(UInt32 *)((char *)v11 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v3 + v38 - v12,
            "..\\TES Shared\\TESScript.cpp",
            0x2CB,
            *v11,
            v16,
            v20,
            v25);
        }
      }
      else
      {
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)(
                              v13,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v12 - v38 - v3,
          "..\\TES Shared\\TESScript.cpp",
          0x2CB,
          *v11,
          v15,
          v19,
          v24);
      }
    }
    else
    {
      v17 = v38 + v3;
      if ( v12 <= v17 )
      {
        if ( v12 < v17 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + v38 - v12,
            "..\\TES Shared\\TESScript.cpp",
            0x2CB,
            LOBYTE(v10[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v12 - v38 - v3,
          "..\\TES Shared\\TESScript.cpp",
          0x2CB,
          LOBYTE(v10[1].createdObjectList.next));
      }
    }
  }
}
