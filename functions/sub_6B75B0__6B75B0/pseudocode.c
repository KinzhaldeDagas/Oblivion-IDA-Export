unsigned __int16 __fastcall sub_6B75B0(const char ****this)
{
  __int16 v3; // di
  __int16 v4; // ax
  UInt32 *v5; // esi
  TESForm *v6; // eax
  const char *v7; // eax
  int v9; // [esp-Ch] [ebp-18h]
  int v10; // [esp-8h] [ebp-14h]
  const char *v11; // [esp-4h] [ebp-10h]
  __int16 i; // [esp+8h] [ebp-4h]
  unsigned __int16 v13; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  for ( i = v3 + 2; this; i += v4 )
  {
    if ( !*(this + 1) && !*this )
      break;
    v4 = sub_6B7CF0(*this);
    this = (const char ****)*(this + 1);
  }
  v13 = i + 2;
  if ( !Global_DebugSaveBuffer )
    return v13;
  v5 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v5 )
  {
    v6 = TESForm_LookupByFormID(*v5);
    v7 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v6->vtbl->GetEditorName)(
                         v6,
                         *(UInt32 *)((char *)v5 + 5),
                         0xBE,
                         ".\\Dialogue\\Conversation.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v13,
      *v5,
      v7,
      v9,
      v10,
      v11);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v13, 0xBE, ".\\Dialogue\\Conversation.cpp");
  }
  return v13;
}
