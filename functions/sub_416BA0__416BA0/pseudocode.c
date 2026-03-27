char __usercall sub_416BA0@<al>(int a1@<edi>)
{
  UInt32 v1; // eax
  UInt32 v2; // edx
  int v3; // edx
  unsigned int v4; // ecx
  int v5; // ebp
  int v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // esi
  int v9; // edi
  int v10; // eax
  unsigned int v11; // eax
  UInt32 *v12; // edi
  UInt32 v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  char result; // al
  _WORD *v17; // edi
  unsigned int v18; // esi
  int v19; // [esp-18h] [ebp-30h]
  int v20; // [esp-14h] [ebp-2Ch]
  size_t v21; // [esp-10h] [ebp-28h]
  const char *v22; // [esp-10h] [ebp-28h]
  size_t v23; // [esp+0h] [ebp-18h] BYREF
  UInt32 v24; // [esp+8h] [ebp-10h]
  int Src; // [esp+Ch] [ebp-Ch] BYREF
  _WORD *v26; // [esp+10h] [ebp-8h]
  int v27; // [esp+14h] [ebp-4h] BYREF

  v27 = 0;
  v1 = SaveLoad_CurrentSavegame->unk000[5];
  v26 = 0;
  v24 = v1;
  if ( Global_DebugSaveBuffer )
    v24 = v1;
  if ( sub_45A170() )
  {
    LODWORD(v23) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData(&Src, v23);
    v2 = SaveLoad_CurrentSavegame->unk000[5];
    LODWORD(v23) = 2;
    v26 = (_WORD *)v2;
    SaveLoad_SaveData(&v27, v23);
  }
  v3 = dword_B33510;
  v4 = dword_B3350C;
  v5 = 0;
  HIDWORD(v21) = a1;
  HIDWORD(v23) = 0;
  do
  {
    v6 = 0;
    if ( v4 )
    {
      while ( !*(_DWORD *)(v3 + 4 * v6) )
      {
        if ( ++v6 >= v4 )
          goto LABEL_9;
      }
      v7 = *(_DWORD **)(v3 + 4 * v6);
    }
    else
    {
LABEL_9:
      v7 = 0;
    }
    v8 = v7;
    while ( v8 )
    {
      Src = 0xFFFFFFFF;
      Src = v8[1];
      v9 = v8[2];
      if ( *v8 )
      {
        v8 = (_DWORD *)*v8;
      }
      else
      {
        v10 = (*(int (__thiscall **)(int *, _DWORD))(EffectSettingCollection + 4))(&EffectSettingCollection, v8[1]);
        v4 = dword_B3350C;
        v3 = dword_B33510;
        v11 = v10 + 1;
        if ( v11 >= dword_B3350C )
        {
LABEL_17:
          v8 = 0;
        }
        else
        {
          while ( 1 )
          {
            v8 = *(_DWORD **)(dword_B33510 + 4 * v11);
            if ( v8 )
              break;
            if ( ++v11 >= dword_B3350C )
              goto LABEL_17;
          }
        }
      }
      if ( v9 )
      {
        if ( (*(_DWORD *)(v9 + 0x58) & 0x200000) != 0 )
        {
          if ( v5 )
          {
            LODWORD(v21) = 4;
            SaveLoad_SaveData(&Src, v21);
            v3 = dword_B33510;
            v4 = dword_B3350C;
          }
          else
          {
            ++HIDWORD(v23);
          }
        }
      }
    }
    if ( !v5 )
    {
      LODWORD(v21) = 4;
      SaveLoad_SaveData((char *)&v23 + 4, v21);
      if ( !HIDWORD(v23) )
        break;
      v3 = dword_B33510;
      v4 = dword_B3350C;
    }
    ++v5;
  }
  while ( v5 < 2 );
  if ( Global_DebugSaveBuffer )
  {
    v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v13 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v12 )
    {
      v14 = TESForm_LookupByFormID(*v12);
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)(
                            v14,
                            *(UInt32 *)((char *)v12 + 5),
                            0x9D,
                            "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v24,
        *v12,
        v15,
        v19,
        v20,
        v22);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v13 - v24,
        0x9D,
        "..\\TES Shared\\Magic\\EffectSettingCollection.cpp");
    }
  }
  result = sub_45A170();
  if ( result )
  {
    v17 = v26;
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    result = (_BYTE)v26 - 1;
    if ( v18 > (unsigned int)v26 + 0xFFFF )
      result = PrintError(
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 "..\\TES Shared\\Magic\\EffectSettingCollection.cpp",
                 0x9D);
    *v17 = v18 - (_WORD)v17;
  }
  return result;
}
