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
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-18h] [ebp-18h]
  int v12; // [esp-14h] [ebp-14h]
  const char *v13; // [esp-10h] [ebp-10h]

  do
  {
    v4 = *a3;
    if ( *a3 && a4 != *(double *)(v4 + 8) )
    {
      if ( *a1 )
      {
        v5 = (_DWORD *)(*a1 + 0x40);
        if ( *a1 != 0xFFFFFFC0 )
        {
          while ( *v5 )
          {
            if ( *(_DWORD *)(*v5 + 0xC) == *(_DWORD *)v4 )
            {
              a2 += 8;
              goto LABEL_9;
            }
            v5 = (_DWORD *)v5[1];
            if ( !v5 )
              break;
          }
        }
      }
      a2 += 0xC;
    }
LABEL_9:
    a3 = (int *)a3[1];
  }
  while ( a3 );
  v6 = a2 + 1;
  if ( a1[4] )
    v6 += 8;
  if ( Global_DebugSaveBuffer )
  {
    v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v7 )
    {
      v8 = TESForm_LookupByFormID(*v7);
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)(
                           v8,
                           *(UInt32 *)((char *)v7 + 5),
                           0x25E,
                           "..\\TES Shared\\TESScript.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *v7,
        v9,
        v11,
        v12,
        v13);
      return v6;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x25E, "..\\TES Shared\\TESScript.cpp");
  }
  return v6;
}
