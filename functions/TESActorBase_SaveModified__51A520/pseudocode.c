char __userpurge TESActorBase_SaveModified@<al>(TESForm *this@<ecx>, int ebx0@<ebx>, TESForm a2)
{
  TESSaveLoad *v4; // ecx
  UInt32 v5; // ebp
  TESSaveLoad *v6; // ecx
  int vtbl; // ebx
  char *v8; // edi
  UInt32 *v9; // edi
  UInt32 v10; // esi
  TESForm *v11; // eax
  const char *v12; // eax
  char result; // al
  unsigned int v14; // esi
  int v15; // [esp-Ch] [ebp-24h]
  _BYTE v16[12]; // [esp-8h] [ebp-20h]
  int v17; // [esp-8h] [ebp-20h]
  size_t v18; // [esp-4h] [ebp-1Ch]
  size_t v19; // [esp-4h] [ebp-1Ch]
  const char *v20; // [esp-4h] [ebp-1Ch]
  int v21; // [esp+4h] [ebp-14h]
  int v22; // [esp+8h] [ebp-10h]
  _WORD *v23; // [esp+Ch] [ebp-Ch]
  float Src; // [esp+10h] [ebp-8h] BYREF
  int v25; // [esp+14h] [ebp-4h] BYREF

  v4 = SaveLoad_CurrentSavegame;
  v25 = 0;
  v5 = v4->unk000[5];
  v23 = 0;
  if ( sub_45A170() )
  {
    v6 = SaveLoad_CurrentSavegame;
    *(_DWORD *)&v16[4] = 4;
    Src = 13585474.0;
    SaveLoad_SaveData((int)v6, &Src, *(size_t *)&v16[4]);
    LODWORD(v18) = 2;
    v23 = (_WORD *)SaveLoad_CurrentSavegame->unk000[5];
    SaveLoad_SaveData((int)SaveLoad_CurrentSavegame, &v25, v18);
  }
  *(_DWORD *)&v16[4] = ebx0;
  vtbl = (int)a2.vtbl;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Du )
    TESForm_SaveModifiedForm(this, (char)a2.vtbl);
  TESAttributes_SaveModified((int)this + 0x88, vtbl);
  TESActorBaseData_SaveModifiedComponent((char *)this + 0x24, vtbl, vtbl);
  TESSpellList_SaveModifiedComponent((char *)this + 0x54, (int)this, vtbl);
  TESAIForm_SaveModifiedComponent((int)this + 0x68, vtbl);
  if ( (vtbl & 4) != 0 )
  {
    *(_DWORD *)v16 = 4;
    a2.vtbl = *((TESFormVtbl **)this + 0x21);
    TESForm_SaveDataToCurrentSaveGame(&a2, *(size_t *)v16);
  }
  if ( (vtbl & 0x10000000) != 0 )
    AVCollection_Save((char *)this + 0xD0, *(int *)&v16[4], *(int *)&v16[8], v21, v22, (int)v23, Src);
  if ( (char)vtbl < 0 )
  {
    v8 = *((char **)this + 0x29);
    if ( !v8 )
      v8 = EmptyString;
    *(_DWORD *)&v16[4] = 1;
    LOBYTE(a2.vtbl) = strlen(v8);
    TESForm_SaveDataToCurrentSaveGame(&a2, *(size_t *)&v16[4]);
    if ( LOBYTE(a2.vtbl) )
    {
      LODWORD(v19) = LOBYTE(a2.vtbl);
      TESForm_SaveDataToCurrentSaveGame((TESForm *)v8, v19);
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    v10 = SaveLoad_CurrentSavegame->unk000[5];
    if ( v9 )
    {
      v11 = TESForm_LookupByFormID(*v9);
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)(
                            v11,
                            *(UInt32 *)((char *)v9 + 5),
                            0x231,
                            "..\\TES Shared\\TESActorBase.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v10 - v5,
        *v9,
        v12,
        v15,
        v17,
        v20);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v10 - v5, 0x231, "..\\TES Shared\\TESActorBase.cpp");
    }
  }
  result = sub_45A170();
  if ( result )
  {
    v14 = SaveLoad_CurrentSavegame->unk000[5];
    result = (_BYTE)v23 - 1;
    if ( v14 > (unsigned int)v23 + 0xFFFF )
      result = PrintError(
                 "Save Game Block in file %s on line %i is greater than maximum short size",
                 "..\\TES Shared\\TESActorBase.cpp",
                 0x231);
    *v23 = v14 - (_WORD)v23;
  }
  return result;
}
