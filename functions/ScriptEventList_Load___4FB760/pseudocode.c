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

  v40 = 0; /*0x4fb775*/
  v3 = 0; /*0x4fb77d*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() )
  {
    LODWORD(v27) = 4; /*0x4fb792*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v27); /*0x4fb799*/
    if ( (_DWORD)Dst != 0x4B4F4C42 )
    {
      v4 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x4fb7ad*/
      if ( v4 )
      {
        v5 = TESForm_LookupByFormID(*v4); /*0x4fb7ba*/
        v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v5->vtbl->GetEditorName)( /*0x4fb7d5*/
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
          LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next));
      }
    }
    v3 = g_TESSaveLoadGame->unk000[5]; /*0x4fb816*/
    LODWORD(v28) = 2; /*0x4fb819*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, &v40, v28); /*0x4fb820*/
  }
  LODWORD(v27) = 2; /*0x4fb825*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v38, v27); /*0x4fb832*/
  v7 = 0; /*0x4fb837*/
  if ( v38 ) /*0x4fb83e*/
  {
    do /*0x4fb8ee*/
    {
      __asm { fldz } /*0x4fb846*/
      v8 = g_TESSaveLoadGame; /*0x4fb848*/
      __asm { fstp    [esp+40h+var_8] } /*0x4fb84e*/
      *(_DWORD *)ArgList = 0; /*0x4fb852*/
      if ( LOBYTE(v8[1].createdObjectList.next) < 0x75u ) /*0x4fb85d*/
        goto LABEL_13; /*0x4fb85d*/
      LODWORD(v30) = 4; /*0x4fb85f*/
      SaveLoad_LoadData((int)v8, ArgList, v30); /*0x4fb866*/
      if ( (*(_DWORD *)ArgList & 0xF0000000) != 0 ) /*0x4fb879*/
      {
        *(_DWORD *)ArgList &= 0xFFFFFFFu; /*0x4fb87b*/
        LODWORD(v31) = 4; /*0x4fb883*/
        SaveLoad_LoadFormID((char *)&Dst + 4, v31, v32, v33, v34); /*0x4fb88a*/
        LODWORD(Dst) = v40; /*0x4fb893*/
      }
      else
      {
        LODWORD(v31) = 8; /*0x4fb899*/
        SaveLoad_LoadData((int)g_TESSaveLoadGame, &v42, v31); /*0x4fb8a0*/
      }
      v8 = g_TESSaveLoadGame; /*0x4fb8a5*/
      if ( LOBYTE(g_TESSaveLoadGame[1].createdObjectList.next) < 0x75u ) /*0x4fb8ae*/
      {
LABEL_13:
        LODWORD(v21) = 4; /*0x4fb8b0*/
        SaveLoad_LoadData((int)v8, v37, v21); /*0x4fb8b7*/
        LODWORD(v22) = 8; /*0x4fb8bc*/
        SaveLoad_LoadData((int)g_TESSaveLoadGame, &Dst, v22); /*0x4fb8c9*/
      }
      __asm { fld     qword ptr [esp+48h+Dst] } /*0x4fb8ce*/
      __asm { fstp    [esp+50h+var_50]; double }
      sub_4FB630(a1, *(int *)v37, v18); /*0x4fb8df*/
      ++v7; /*0x4fb8e9*/
    }
    while ( v7 < v36 ); /*0x4fb8ee*/
  }
  LODWORD(v21) = 1; /*0x4fb8f4*/
  SaveLoad_LoadData((int)g_TESSaveLoadGame, &v35, v21); /*0x4fb901*/
  if ( v35 ) /*0x4fb90b*/
  {
    v9 = (void *)FormHeapAlloc(8u); /*0x4fb90f*/
    LODWORD(v23) = 8;                           // MEF v38 verified optional ScriptEventList data OOM fix: success stores allocation and replays size push; failure leaves +0x10 null and consumes exactly 8 serialized bytes into stack scratch via SaveLoad_LoadData before continuing at 0x4FB928. /*0x4fb917*/
    a1[4] = (int)v9; /*0x4fb919*/
    SaveLoad_LoadData((int)g_TESSaveLoadGame, v9, v23); /*0x4fb923*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() )    // MEF v38 continuation after optional 8-byte payload has been consumed, whether retained in the allocated field or discarded into stack scratch on OOM. /*0x4fb92e*/
  {
    v10 = g_TESSaveLoadGame; /*0x4fb93b*/
    v11 = (UInt32 *)g_TESSaveLoadGame[1].unk030[0]; /*0x4fb941*/
    v12 = g_TESSaveLoadGame->unk000[5]; /*0x4fb949*/
    if ( v11 ) /*0x4fb94c*/
    {
      v13 = TESForm_LookupByFormID(*v11); /*0x4fb95a*/
      v14 = v3 + v38; /*0x4fb961*/
      if ( v12 <= v14 ) /*0x4fb968*/
      {
        if ( v12 < v14 ) /*0x4fb9aa*/
        {
          v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x4fb9c1*/
                                v13,
                                *((unsigned __int8 *)v11 + 9),
                                *(UInt32 *)((char *)v11 + 5));
          PrintError( /*0x4fb9e0*/
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
        v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v13->vtbl->GetEditorName)( /*0x4fb97b*/
                              v13,
                              *((unsigned __int8 *)v11 + 9),
                              *(UInt32 *)((char *)v11 + 5));
        PrintError( /*0x4fb99a*/
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
      v17 = v38 + v3; /*0x4fb9f5*/
      if ( v12 <= v17 ) /*0x4fb9fa*/
      {
        if ( v12 < v17 ) /*0x4fba25*/
          PrintError( /*0x4fba40*/
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + v38 - v12,
            "..\\TES Shared\\TESScript.cpp",
            0x2CB,
            LOBYTE(v10[1].createdObjectList.next));
      }
      else
      {
        PrintError( /*0x4fba15*/
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v12 - v38 - v3,
          "..\\TES Shared\\TESScript.cpp",
          0x2CB,
          LOBYTE(v10[1].createdObjectList.next));
      }
    }
  }
}
