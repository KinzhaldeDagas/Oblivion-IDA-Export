// positive sp value has been detected, the output may be wrong!
unsigned __int16 __usercall ActiveEffect_Base_GetAEListSaveSize__::Done_@<ax>(unsigned __int16 a1@<bp>)
{
  UInt32 *v1; // esi
  TESForm *v2; // eax
  const char *v3; // eax
  int v5; // [esp-20h] [ebp-20h]
  int v6; // [esp-1Ch] [ebp-1Ch]
  const char *v7; // [esp-18h] [ebp-18h]

  if ( !Global_DebugSaveBuffer )
    return ActiveEffect_Base_GetAEListSaveSize__::Done();
  v1 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v1 )
  {
    v2 = TESForm_LookupByFormID(*v1);
    v3 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v2->vtbl->GetEditorName)(
                         v2,
                         *(UInt32 *)((char *)v1 + 5),
                         0x353,
                         ".\\Magic\\ActiveEffect.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      a1,
      *v1,
      v3,
      v5,
      v6,
      v7);
    return a1;
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", a1, 0x353, ".\\Magic\\ActiveEffect.cpp");
    return ActiveEffect_Base_GetAEListSaveSize__::Done();
  }
}
