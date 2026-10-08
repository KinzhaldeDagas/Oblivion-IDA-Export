unsigned __int16 __userpurge sub_632370@<ax>(char *this@<ecx>, double st7_0@<st0>, int a3, void *a4)
{
  unsigned __int16 v7; // si
  unsigned __int8 currentVersion; // al
  __int16 v9; // si
  __int16 v10; // si
  _DWORD *v11; // eax
  __int16 v12; // si
  __int16 i; // cx
  __int16 v14; // si
  unsigned __int8 v15; // al
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v17; // eax
  const char *v18; // eax
  int v20; // [esp-Ch] [ebp-1Ch]
  int v21; // [esp-8h] [ebp-18h]
  const char *v22; // [esp-4h] [ebp-14h]
  unsigned __int16 v23; // [esp+14h] [ebp+4h]
  __int16 v24; // [esp+18h] [ebp+8h]
  unsigned __int16 v25; // [esp+18h] [ebp+8h]

  v7 = sub_650F50(this, st7_0, a3, a4); /*0x63238b*/
  v23 = v7; /*0x632395*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x632399*/
    v7 += 6; /*0x6323a2*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x6323ab*/
  v9 = v7 + 0x36; /*0x6323ae*/
  if ( currentVersion >= 0x32u ) /*0x6323b3*/
    v9 += 4; /*0x6323b5*/
  v10 = v9 + 0x2D; /*0x6323b8*/
  if ( currentVersion >= 0x3Fu ) /*0x6323bd*/
    v10 += 5; /*0x6323bf*/
  if ( currentVersion >= 0x42u ) /*0x6323c4*/
    v10 += 5; /*0x6323c6*/
  v11 = *((_DWORD **)this + 0x63); /*0x6323c9*/
  v12 = v10 + 0xE; /*0x6323cf*/
  for ( i = 0; v11; v11 = (_DWORD *)v11[1] ) /*0x6323d6*/
  {
    if ( *v11 ) /*0x6323d8*/
      ++i; /*0x6323dd*/
  }
  v14 = 0xD * i + v12; /*0x6323ea*/
  v24 = v14; /*0x6323f2*/
  if ( (a3 & 0x2000000) != 0 ) /*0x6323f6*/
    v24 = v14 + 1; /*0x6323fb*/
  v25 = sub_651AD0(this, (int)a4) + 2 + v24; /*0x632411*/
  v15 = g_TESSaveLoadGame->currentVersion; /*0x632416*/
  if ( v15 >= 0x5Au ) /*0x63241b*/
    v25 += 0x1E; /*0x63241d*/
  if ( v15 >= 0x5Du ) /*0x632424*/
    v25 += 8; /*0x632426*/
  if ( v15 >= 0x6Au ) /*0x63242d*/
    v25 += 4; /*0x63242f*/
  if ( v15 >= 0x71u ) /*0x632436*/
    v25 += 0x18; /*0x632438*/
  if ( !Global_DebugSaveBuffer ) /*0x63243d*/
    return v25; /*0x6324d5*/
  currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x63244a*/
  if ( currentlySavingFormHeader )
  {
    v17 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x632457*/
    v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v17->vtbl->GetEditorName)( /*0x632477*/
                          v17,
                          *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                          0x2AEE,
                          ".\\AI\\HighProcess.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v25 - v23,
      *currentlySavingFormHeader,
      v18,
      v20,
      v21,
      v22);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v25 - v23, 0x2AEE, ".\\AI\\HighProcess.cpp");
  }
  return v25; /*0x63249a*/
}
