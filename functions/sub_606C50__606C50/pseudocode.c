void __usercall sub_606C50(_DWORD *this@<ecx>, int a2@<ebp>)
{
  bool v4; // zf
  TESSaveLoad *v5; // ecx
  UInt32 v6; // eax
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  TESSaveLoad *v9; // ecx
  _WORD *v10; // ebp
  int *i; // esi
  int v12; // edi
  TESSaveLoad *v13; // ecx
  unsigned __int16 v14; // ax
  TESSaveLoad *v15; // ecx
  UInt32 *v16; // edi
  UInt32 v17; // esi
  TESForm *v18; // eax
  const char *v19; // eax
  _WORD *v20; // edi
  unsigned int v21; // esi
  int v22; // [esp-Ch] [ebp-2Ch]
  size_t v23; // [esp-8h] [ebp-28h]
  size_t v24; // [esp-8h] [ebp-28h]
  size_t v25; // [esp-8h] [ebp-28h]
  int v26; // [esp-8h] [ebp-28h]
  size_t v27; // [esp-4h] [ebp-24h]
  size_t v28; // [esp-4h] [ebp-24h]
  const char *v29; // [esp-4h] [ebp-24h]
  char v30; // [esp+Bh] [ebp-15h] BYREF
  int v31; // [esp+Ch] [ebp-14h] BYREF
  UInt32 v32; // [esp+10h] [ebp-10h]
  UInt32 v33; // [esp+14h] [ebp-Ch]
  int Src; // [esp+18h] [ebp-8h] BYREF
  int v35; // [esp+1Ch] [ebp-4h] BYREF

  sub_567E00(this);
  v4 = Global_DebugSaveBuffer == 0;
  v5 = SaveLoad_CurrentSavegame;
  v35 = 0;
  v6 = v5->unk000[5];
  v33 = 0;
  v32 = v6;
  if ( !v4 )
    v32 = v6;
  if ( sub_45A170() )
  {
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v27) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v7, &Src, v27);
    v8 = SaveLoad_CurrentSavegame;
    LODWORD(v28) = 2;
    v33 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v8, &v35, v28);
  }
  v9 = SaveLoad_CurrentSavegame;
  HIDWORD(v23) = a2;
  LODWORD(v23) = 2;
  v31 = 0;
  v10 = (_WORD *)v9->unk000[5];
  SaveLoad_SaveData((int)v9, &v31, v23);
  for ( i = (int *)*(this + 0xF); i; i = (int *)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    v12 = *i;
    LODWORD(v24) = 1;
    v13 = SaveLoad_CurrentSavegame;
    v30 = *(_BYTE *)(*i + 4);
    SaveLoad_SaveData((int)v13, &v30, v24);
    v14 = sub_675CC0(&ActorProcessManager_ptr, v30, v12);
    LODWORD(v25) = 2;
    v15 = SaveLoad_CurrentSavegame;
    Src = v14;
    SaveLoad_SaveData((int)v15, &Src, v25);
    ++v31;
  }
  *v10 = v31;
  if ( Global_DebugSaveBuffer )
  {
    v16 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v17 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v16 )
    {
      v18 = TESForm_LookupByFormID(*v16);
      v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v18->vtbl->GetEditorName)(
                            v18,
                            *(UInt32 *)((char *)v16 + 5),
                            0x216,
                            ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v17 - v32,
        *v16,
        v19,
        v22,
        v26,
        v29);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v17 - v32, 0x216, ".\\AI\\AlarmPackage.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v20 = (_WORD *)v33;
    v21 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v21 > v33 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\AlarmPackage.cpp",
        0x216);
    *v20 = v21 - (_WORD)v20;
  }
}
