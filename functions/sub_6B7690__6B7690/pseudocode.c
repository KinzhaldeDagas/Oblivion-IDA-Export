void __thiscall sub_6B7690(const char ****this)
{
  bool v2; // zf
  TESSaveLoad *v4; // ecx
  UInt32 v5; // eax
  TESSaveLoad *v6; // ecx
  TESSaveLoad *v7; // ecx
  TESSaveLoad *v8; // ecx
  _WORD *v9; // ebp
  int v10; // edx
  const char ****i; // esi
  int *v12; // eax
  UInt32 *v13; // edi
  UInt32 v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  _WORD *v17; // edi
  unsigned int v18; // esi
  int v19; // [esp-Ch] [ebp-30h]
  int v20; // [esp-8h] [ebp-2Ch]
  size_t v21; // [esp-4h] [ebp-28h]
  size_t v22; // [esp-4h] [ebp-28h]
  size_t v23; // [esp-4h] [ebp-28h]
  const char *v24; // [esp-4h] [ebp-28h]
  int v25; // [esp+Ch] [ebp-18h] BYREF
  UInt32 v26; // [esp+10h] [ebp-14h]
  unsigned int v27; // [esp+14h] [ebp-10h] BYREF
  UInt32 v28; // [esp+18h] [ebp-Ch]
  int Src; // [esp+1Ch] [ebp-8h] BYREF
  int v30; // [esp+20h] [ebp-4h] BYREF

  v2 = Global_DebugSaveBuffer == 0;
  v4 = SaveLoad_CurrentSavegame;
  v30 = 0;
  v5 = v4->unk000[5];
  v28 = 0;
  v26 = v5;
  if ( !v2 )
    v26 = v5;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    LODWORD(v21) = 4;
    Src = 0x4B4F4C42;
    SaveLoad_SaveData((int)v6, &Src, v21);
    v7 = SaveLoad_CurrentSavegame;
    LODWORD(v22) = 2;
    v28 = SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)v7, &v30, v22);
  }
  v8 = SaveLoad_CurrentSavegame;
  LODWORD(v21) = 2;
  v25 = 0;
  v9 = (_WORD *)v8->unk000[5];
  SaveLoad_SaveData((int)v8, &v25, v21);
  for ( i = this; i; i = (const char ****)i[1] )
  {
    if ( !i[1] && !*i )
      break;
    sub_6B7D30(*i);
    ++v25;
  }
  *v9 = v25;
  v12 = (int *)*(this + 2);
  v27 = 0xFFFFFFFF;
  if ( v12 )
    v27 = (unsigned __int16)sub_6B7520(this, v10, *v12);
  LODWORD(v23) = 2;
  SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v27, v23);
  if ( Global_DebugSaveBuffer )
  {
    v13 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v14 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v13 )
    {
      v15 = TESForm_LookupByFormID(*v13);
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)(
                            v15,
                            *(UInt32 *)((char *)v13 + 5),
                            0xDF,
                            ".\\Dialogue\\Conversation.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14 - v26,
        *v13,
        v16,
        v19,
        v20,
        v24);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v14 - v26, 0xDF, ".\\Dialogue\\Conversation.cpp");
    }
  }
  if ( sub_45A170() )
  {
    v17 = (_WORD *)v28;
    v18 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v18 > v28 + 0xFFFF )
      PrintError(
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\Dialogue\\Conversation.cpp",
        0xDF);
    *v17 = v18 - (_WORD)v17;
  }
}
