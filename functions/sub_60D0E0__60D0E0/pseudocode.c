unsigned __int16 __thiscall sub_60D0E0(_DWORD *this, int a2, int a3)
{
  __int16 v5; // si
  int v6; // eax
  __int16 v7; // si
  int v8; // eax
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  int v13; // [esp-Ch] [ebp-14h]
  int v14; // [esp-8h] [ebp-10h]
  const char *v15; // [esp-4h] [ebp-Ch]
  unsigned __int16 v16; // [esp+Ch] [ebp+4h]

  v5 = 0;
  if ( sub_45A170() )
    v5 = 6;
  v6 = *(this + 2);
  v7 = v5 + 4;
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 0xC);
    if ( (a2 & 0x20000) != 0 && TESDataHandler_IsFormIDCreated_(v8) )
    {
      ++v7;
      if ( (a2 & 0x10000) == 0 )
        v7 += (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xDC))(*(this + 2));
    }
    v7 += 4;
  }
  v16 = v7 + 8;
  if ( !Global_DebugSaveBuffer )
    return v7 + 8;
  v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v9 )
  {
    v10 = TESForm_LookupByFormID(*v9);
    v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)(
                          v10,
                          *(UInt32 *)((char *)v9 + 5),
                          0xFE,
                          ".\\AI\\BaseProcess.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v16,
      *v9,
      v11,
      v13,
      v14,
      v15);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v16, 0xFE, ".\\AI\\BaseProcess.cpp");
  }
  return v16;
}
