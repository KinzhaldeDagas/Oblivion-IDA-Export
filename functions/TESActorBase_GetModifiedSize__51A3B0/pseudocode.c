unsigned __int16 __thiscall TESActorBase_GetModifiedSize(char *this, int a2)
{
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  __int16 v7; // si
  unsigned __int16 v8; // si
  const char *v9; // eax
  UInt32 *v10; // edi
  TESForm *v11; // eax
  const char *v12; // eax
  int v14; // [esp-Ch] [ebp-1Ch]
  int v15; // [esp-8h] [ebp-18h]
  const char *v16; // [esp-4h] [ebp-14h]
  __int16 v17; // [esp+Ch] [ebp-4h]
  unsigned __int16 v18; // [esp+Ch] [ebp-4h]
  __int16 v19; // [esp+Ch] [ebp-4h]

  v17 = 0;
  if ( sub_45A170() )
    v17 = 6;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x6Du )
    v4 = v17;
  else
    v4 = TESForm_ModifiedFormSize(a2) + v17;
  v5 = TESAttributes_ModifiedSize(a2) + v4;
  v6 = TESActorBaseData_ModifiedComponentSize(this + 0x24, a2) + v5;
  v7 = TESSpellList_ModifiedComponentSize(this + 0x54, a2) + v6;
  v8 = TESAIForm_GetModifiedSize(a2) + v7;
  v18 = v8;
  if ( (a2 & 4) != 0 )
  {
    v18 = v8 + 4;
    v8 += 4;
  }
  if ( (a2 & 0x10000000) != 0 )
  {
    v8 += AVCollection_GetSaveSize((_DWORD *)this + 0x34);
    v18 = v8;
  }
  if ( (char)a2 < 0 )
  {
    v19 = v18 + 1;
    v9 = *((const char **)this + 0x29);
    if ( !v9 )
      v9 = EmptyString;
    v8 = strlen(v9) + v19;
  }
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v10 )
    {
      v11 = TESForm_LookupByFormID(*v10);
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)(
                            v11,
                            *(UInt32 *)((char *)v10 + 5),
                            0x207,
                            "..\\TES Shared\\TESActorBase.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v8,
        *v10,
        v12,
        v14,
        v15,
        v16);
      return v8;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v8, 0x207, "..\\TES Shared\\TESActorBase.cpp");
  }
  return v8;
}
