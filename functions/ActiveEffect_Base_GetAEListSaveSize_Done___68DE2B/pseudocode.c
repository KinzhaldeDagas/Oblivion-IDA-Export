// positive sp value has been detected, the output may be wrong!
__int16 __usercall ActiveEffect_Base_GetAEListSaveSize__::Done_@<ax>(__int16 a1@<bp>)
{
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v2; // eax
  const char *v3; // eax
  int v5; // [esp-20h] [ebp-20h]
  int v6; // [esp-1Ch] [ebp-1Ch]
  const char *v7; // [esp-18h] [ebp-18h]

  if ( !Global_DebugSaveBuffer ) /*0x68de2b*/
    return ActiveEffect_Base_GetAEListSaveSize__::Done(a1); /*0x68de32*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x68de3a*/
  if ( currentlySavingFormHeader )
  {
    v2 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x68de47*/
    v3 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v2->vtbl->GetEditorName)( /*0x68de67*/
                         v2,
                         *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                         0x353,
                         ".\\Magic\\ActiveEffect.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      (unsigned __int16)a1,
      *currentlySavingFormHeader,
      v3,
      v5,
      v6,
      v7);
    return a1; /*0x68de80*/
  }
  else
  {
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)a1,
      0x353,
      ".\\Magic\\ActiveEffect.cpp");
    return ActiveEffect_Base_GetAEListSaveSize__::Done(a1); /*0x68dea0*/
  }
}
