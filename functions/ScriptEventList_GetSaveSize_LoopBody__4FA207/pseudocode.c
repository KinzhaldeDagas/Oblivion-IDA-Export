// positive sp value has been detected, the output may be wrong!
unsigned __int16 __usercall ScriptEventList_GetSaveSize__::LoopBody@<ax>(
        _DWORD *a1@<ebx>,
        int a2@<edi>,
        int *a3@<esi>,
        double a4@<st0>)
{
  int v4; // edx
  _DWORD *v5; // eax
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-18h] [ebp-18h]
  int v12; // [esp-14h] [ebp-14h]
  const char *v13; // [esp-10h] [ebp-10h]

  do /*0x4fa23e*/
  {
    v4 = *a3; /*0x4fa207*/
    if ( *a3 && a4 != *(double *)(v4 + 8) ) /*0x4fa215*/
    {
      if ( *a1 ) /*0x4fa217*/
      {
        v5 = (_DWORD *)(*a1 + 0x40); /*0x4fa21d*/
        if ( *a1 != 0xFFFFFFC0 ) /*0x4fa220*/
        {
          while ( *v5 ) /*0x4fa226*/
          {
            if ( *(_DWORD *)(*v5 + 0xC) == *(_DWORD *)v4 ) /*0x4fa22d*/
            {
              a2 += 8; /*0x4fa2a8*/
              goto LABEL_9; /*0x4fa2ab*/
            }
            v5 = (_DWORD *)v5[1]; /*0x4fa22f*/
            if ( !v5 ) /*0x4fa234*/
              break; /*0x4fa234*/
          }
        }
      }
      a2 += 0xC; /*0x4fa236*/
    }
LABEL_9:
    a3 = (int *)a3[1]; /*0x4fa239*/
  }
  while ( a3 ); /*0x4fa23e*/
  v6 = a2 + 1; /*0x4fa242*/
  if ( a1[4] ) /*0x4fa245*/
    v6 += 8; /*0x4fa24b*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4fa25d*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4fa26a*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x4fa28a*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x25E,
                           "..\\TES Shared\\TESScript.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x4fa2a7*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x25E, "..\\TES Shared\\TESScript.cpp");
  }
  return v6; /*0x4fa2a7*/
}
