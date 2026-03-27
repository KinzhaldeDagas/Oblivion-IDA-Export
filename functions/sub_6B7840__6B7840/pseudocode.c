void __thiscall sub_6B7840(unsigned int ***this)
{
  UInt32 *v3; // esi
  TESForm *v4; // eax
  const char *v5; // eax
  TESSaveLoad *v6; // ecx
  _DWORD *v7; // eax
  unsigned int **v8; // edi
  unsigned int ***v9; // eax
  unsigned int ***v10; // esi
  bool v11; // zf
  unsigned int ***v12; // eax
  int v13; // eax
  unsigned int ***v14; // ecx
  unsigned int **v15; // edx
  TESSaveLoad *v16; // ecx
  UInt32 *v17; // edi
  UInt32 v18; // esi
  TESForm *v19; // eax
  UInt32 v20; // ebx
  TESForm *v21; // ecx
  UInt32 v22; // eax
  const char *v23; // eax
  const char *v24; // eax
  UInt32 v25; // edx
  int v26; // [esp-8h] [ebp-44h]
  int v27; // [esp-8h] [ebp-44h]
  int v28; // [esp-8h] [ebp-44h]
  size_t v29; // [esp-4h] [ebp-40h]
  size_t v30; // [esp-4h] [ebp-40h]
  int v31; // [esp-4h] [ebp-40h]
  size_t v32; // [esp-4h] [ebp-40h]
  int v33; // [esp-4h] [ebp-40h]
  int v34; // [esp-4h] [ebp-40h]
  unsigned __int16 v35; // [esp+14h] [ebp-28h] BYREF
  int v36; // [esp+18h] [ebp-24h] BYREF
  UInt32 v37; // [esp+1Ch] [ebp-20h]
  unsigned int i; // [esp+20h] [ebp-1Ch]
  int Dst; // [esp+24h] [ebp-18h] BYREF
  _DWORD v40[2]; // [esp+28h] [ebp-14h] BYREF
  unsigned int v41; // [esp+38h] [ebp-4h]

  v36 = 0;
  v37 = 0;
  if ( sub_45A170() )
  {
    LODWORD(v29) = 4;
    SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &Dst, v29);
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
          ".\\Dialogue\\Conversation.cpp",
          0xE5,
          *v3,
          v5,
          v26,
          v31);
      }
      else
      {
        PrintError(
          "LoadGame Buffer error: Block Header is incorrect in file %s on line %i.  Current version is %i",
          ".\\Dialogue\\Conversation.cpp",
          0xE5,
          LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next));
      }
    }
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v30) = 2;
    v37 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_LoadData((int)v6, &v36, v30);
  }
  LODWORD(v29) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, &v35, v29);
  for ( i = 0; i < v35; ++i )
  {
    v7 = (_DWORD *)FormHeapAlloc(0x1Cu);
    v40[1] = v7;
    v41 = 0;
    if ( v7 )
      v8 = (unsigned int **)sub_6B7BE0(v7);
    else
      v8 = 0;
    v41 = 0xFFFFFFFF;
    sub_6B7E50(v8);
    if ( v8 )
    {
      v9 = this + 1;
      v10 = this;
      if ( *(this + 1) )
      {
        do
        {
          v10 = (unsigned int ***)*v9;
          v11 = (*v9)[1] == 0;
          v9 = (unsigned int ***)(*v9 + 1);
        }
        while ( !v11 );
      }
      if ( *v10 )
      {
        v12 = (unsigned int ***)FormHeapAlloc(8u);
        if ( v12 )
        {
          *v12 = v8;
          v12[1] = 0;
          v10[1] = (unsigned int **)v12;
        }
        else
        {
          v10[1] = 0;
        }
      }
      else
      {
        *v10 = v8;
      }
    }
  }
  LODWORD(v32) = 2;
  SaveLoad_LoadData((int)SaveLoad_CurrentSavegame, v40, v32);
  if ( LOWORD(v40[0]) == 0xFFFF )
  {
    *(this + 2) = 0;
  }
  else
  {
    v13 = sub_6B7560(this, v40[0]);
    v14 = this;
    if ( this )
    {
      do
      {
        v15 = v14[1];
        if ( !v15 && !*v14 )
          break;
        if ( (unsigned int **)v13 == *v14 )
        {
          *(this + 2) = (unsigned int **)v14;
          break;
        }
        v14 = (unsigned int ***)v14[1];
      }
      while ( v15 );
    }
  }
  if ( sub_45A170() )
  {
    v16 = SaveLoad_CurrentSavegame;
    v17 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[0];
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v17 )
    {
      v19 = TESForm_LookupByFormID(*v17);
      v20 = v37;
      v21 = v19;
      v22 = (unsigned __int16)v36 + v37;
      if ( v18 <= v22 )
      {
        if ( v18 < v22 )
        {
          v24 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)(
                                v21,
                                *((unsigned __int8 *)v17 + 9),
                                *(UInt32 *)((char *)v17 + 5));
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version "
            "%i and flags %08X",
            v20 + (unsigned __int16)v36 - v18,
            ".\\Dialogue\\Conversation.cpp",
            0xFB,
            *v17,
            v24,
            v28,
            v34);
        }
      }
      else
      {
        v23 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, _DWORD))v21->vtbl->GetEditorName)(
                              v21,
                              *((unsigned __int8 *)v17 + 9),
                              *(UInt32 *)((char *)v17 + 5));
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Currently loading form is %08X %s with version %i and flags %08X",
          v18 - (unsigned __int16)v36 - v20,
          ".\\Dialogue\\Conversation.cpp",
          0xFB,
          *v17,
          v23,
          v27,
          v33);
      }
    }
    else
    {
      v25 = (unsigned __int16)v36 + v37;
      if ( v18 <= v25 )
      {
        if ( v18 < v25 )
          PrintError(
            "LoadGame Buffer underrun of %i bytes in file %s on line %i.  Current version is %i",
            v37 + (unsigned __int16)v36 - v18,
            ".\\Dialogue\\Conversation.cpp",
            0xFB,
            LOBYTE(v16[1].createdObjectList.next));
      }
      else
      {
        PrintError(
          "LoadGame Buffer overrun of %i bytes in file %s on line %i.  Current version is %i",
          v18 - (unsigned __int16)v36 - v37,
          ".\\Dialogue\\Conversation.cpp",
          0xFB,
          LOBYTE(v16[1].createdObjectList.next));
      }
    }
  }
}
