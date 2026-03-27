unsigned __int16 __thiscall sub_647060(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v5; // si
  unsigned __int16 v6; // bp
  TESSaveLoad *v7; // ecx
  unsigned __int8 next; // al
  __int16 v9; // si
  unsigned __int16 v10; // si
  __int16 SaveSize; // ax
  unsigned __int16 v12; // di
  unsigned __int8 v13; // al
  UInt32 *v14; // esi
  TESForm *v15; // eax
  const char *v16; // eax
  int v18; // [esp-Ch] [ebp-1Ch]
  int v19; // [esp-8h] [ebp-18h]
  const char *v20; // [esp-4h] [ebp-14h]

  v5 = sub_60D0E0(this, a2, a3);
  v6 = v5;
  if ( sub_45A170() )
    v5 += 6;
  v7 = SaveLoad_CurrentSavegame;
  next = (unsigned __int8)SaveLoad_CurrentSavegame[1].createdObjectList.next;
  v9 = v5 + 0xB;
  if ( next >= 0x34u )
    ++v9;
  if ( next >= 0x37u )
    ++v9;
  if ( next >= 0x4Bu )
    v9 += 4;
  if ( next >= 0x4Fu )
    v9 += 8;
  if ( next >= 0x56u )
    v9 += 4;
  v10 = v9 + 8;
  if ( (a2 & 0x400000) != 0 )
  {
    SaveSize = AVCollection_GetSaveSize(this + 0x1C);
    v7 = SaveLoad_CurrentSavegame;
    v12 = SaveSize + v10;
    v10 += SaveSize;
  }
  else
  {
    v12 = v10;
  }
  v13 = (unsigned __int8)v7[1].createdObjectList.next;
  if ( v13 >= 0x74u )
  {
    v10 += 4;
    v12 = v10;
  }
  if ( v13 >= 0x76u )
    v12 = v10 + 1;
  if ( Global_DebugSaveBuffer )
  {
    v14 = (UInt32 *)v7[1].unk030[1];
    if ( v14 )
    {
      v15 = TESForm_LookupByFormID(*v14);
      v16 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v15->vtbl->GetEditorName)(
                            v15,
                            *(UInt32 *)((char *)v14 + 5),
                            0xED8,
                            ".\\AI\\LowProcess.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - v6,
        *v14,
        v16,
        v18,
        v19,
        v20);
      return v12;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v12 - v6, 0xED8, ".\\AI\\LowProcess.cpp");
  }
  return v12;
}
