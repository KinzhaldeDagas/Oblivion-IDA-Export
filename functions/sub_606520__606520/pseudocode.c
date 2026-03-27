void __thiscall sub_606520(_DWORD *this)
{
  UInt32 v3; // ebx
  TESSaveLoad *v4; // ecx
  UInt32 *v5; // edi
  TESForm *v6; // eax
  const char *v7; // eax
  TESSaveLoad *v8; // ecx
  TESSaveLoad *v9; // ecx
  TESSaveLoad *v10; // ecx
  TESSaveLoad *v11; // ecx
  TESSaveLoad *v12; // ecx
  int v13; // edi
  _DWORD *v14; // eax
  TESSaveLoad *v15; // ecx
  UInt32 *v16; // edi
  UInt32 v17; // esi
  TESForm *v18; // ecx
  UInt32 v19; // eax
  const char *v20; // eax
  const char *v21; // eax
  UInt32 v22; // edx
  int v23; // [esp-18h] [ebp-64h]
  int v24; // [esp-18h] [ebp-64h]
  int v25; // [esp-14h] [ebp-60h]
  int v26; // [esp-14h] [ebp-60h]
  size_t v27; // [esp-Ch] [ebp-58h]
  size_t v28; // [esp-Ch] [ebp-58h]
  size_t v29; // [esp-4h] [ebp-50h]
  int v30; // [esp-4h] [ebp-50h]
  int v31; // [esp+0h] [ebp-4Ch]
  size_t v32; // [esp+4h] [ebp-48h] BYREF
  size_t v33; // [esp+Ch] [ebp-40h]
  size_t v34; // [esp+14h] [ebp-38h]
  int v35; // [esp+1Ch] [ebp-30h]
  int v36; // [esp+20h] [ebp-2Ch]
  int v37; // [esp+24h] [ebp-28h]
  int v38; // [esp+28h] [ebp-24h] BYREF
  int v39; // [esp+2Ch] [ebp-20h] BYREF
  int v40; // [esp+30h] [ebp-1Ch] BYREF
  int Dst; // [esp+34h] [ebp-18h] BYREF
  _BYTE v42[20]; // [esp+38h] [ebp-14h] BYREF

  v39 = 0;
  v3 = 0;
  if ( sub_45A170() )
  {
    v4 = SaveLoad_CurrentSavegame;
    LODWORD(v34) = 4;
    SaveLoad_LoadData((int)v4, &Dst, v34);
    if ( Dst != 0x4B4F4C42 )
    {
      v5 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
      if ( v5 )
      {
        v6 = TESForm_LookupByFormID(*v5);
        v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v6->vtbl->GetEditorName)(
                             v6,
                             *((unsigned __int8 *)v5 + 9),
                             *(UInt32 *)((char *)v5 + 5));
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Currently loading form is %08X %s wit"
          "h version %i and flags %08X",
          ".\\AI\\AlarmPackage.cpp",
          0x138,
          *v5,
          v7,
          HIDWORD(v33),
          (_DWORD)v34);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\AI\\AlarmPackage.cpp",
          0x138,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v8 = SaveLoad_CurrentSavegame;
    v3 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v34) = 2;
    SaveLoad_LoadData((int)v8, &v39, v34);
  }
  LODWORD(v34) = 1;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 4, v34);
  v9 = SaveLoad_CurrentSavegame;
  LODWORD(v34) = 1;
  SaveLoad_LoadData((int)v9, (char *)this + 0x11, v34);
  v10 = SaveLoad_CurrentSavegame;
  LODWORD(v34) = 1;
  SaveLoad_LoadData((int)v10, this + 0xB, v34);
  LODWORD(v34) = 4;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, this + 1, v34);
  v11 = SaveLoad_CurrentSavegame;
  LODWORD(v34) = 4;
  SaveLoad_LoadData((int)v11, this + 6, v34);
  v12 = SaveLoad_CurrentSavegame;
  LODWORD(v34) = 4;
  SaveLoad_LoadData((int)v12, this + 0xA, v34);
  LODWORD(v34) = 4;
  SaveLoad_LoadFormID(v42, v34, v35, v36, v37);
  LODWORD(v33) = 4;
  *(this + 2) = v40;
  SaveLoad_LoadFormID(&Dst, v33, v34, SHIDWORD(v34), v35);
  LODWORD(v32) = 4;
  *(this + 3) = v39;
  SaveLoad_LoadFormID(&v40, v32, v33, SHIDWORD(v33), v34);
  LODWORD(v29) = 4;
  *(this + 5) = v38;
  SaveLoad_LoadFormID(&v39, v29, v32, SHIDWORD(v32), v33);
  LODWORD(v27) = 2;
  *(this + 9) = v37;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, (char *)&v32 + 4, v27);
  HIDWORD(v33) = 0;
  if ( WORD2(v32) )
  {
    do
    {
      LODWORD(v28) = 4;
      SaveLoad_LoadFormID(&v38, v28, v30, v31, v32);
      v13 = v36;
      if ( v36 )
      {
        if ( *(this + 7) )
        {
          v14 = (_DWORD *)FormHeapAlloc(8u);
          if ( v14 )
          {
            *v14 = *(this + 7);
            v14[1] = 0;
            v14[1] = *(this + 8);
            *(this + 8) = v14;
          }
          else
          {
            *(_DWORD *)4 = *(this + 8);
            *(this + 8) = 0;
          }
          *(this + 7) = v13;
        }
        else
        {
          *(this + 7) = v36;
        }
      }
      ++HIDWORD(v32);
    }
    while ( SHIDWORD(v32) < (unsigned __int16)v31 );
  }
  if ( sub_45A170() )
  {
    v15 = SaveLoad_CurrentSavegame;
    v16 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v16 )
    {
      v18 = TESForm_LookupByFormID(*v16);
      v19 = (unsigned __int16)v32 + v3;
      if ( v17 <= v19 )
      {
        if ( v17 < v19 )
        {
          v21 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)(
                                v18,
                                *((unsigned __int8 *)v16 + 9),
                                *(UInt32 *)((char *)v16 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v3 + (unsigned __int16)v32 - v17,
            ".\\AI\\AlarmPackage.cpp",
            0x161,
            *v16,
            v21,
            v24,
            v26);
        }
      }
      else
      {
        v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v18->vtbl->GetEditorName)(
                              v18,
                              *((unsigned __int8 *)v16 + 9),
                              *(UInt32 *)((char *)v16 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v17 - (unsigned __int16)v32 - v3,
          ".\\AI\\AlarmPackage.cpp",
          0x161,
          *v16,
          v20,
          v23,
          v25);
      }
    }
    else
    {
      v22 = (unsigned __int16)v32 + v3;
      if ( v17 <= v22 )
      {
        if ( v17 < v22 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v3 + (unsigned __int16)v32 - v17,
            ".\\AI\\AlarmPackage.cpp",
            0x161,
            LOBYTE(v15[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v17 - (unsigned __int16)v32 - v3,
          ".\\AI\\AlarmPackage.cpp",
          0x161,
          LOBYTE(v15[1].createdObjectList.next));
      }
    }
  }
}
