unsigned __int16 __thiscall sub_6176C0(TESPackage *this)
{
  unsigned __int16 SaveSize; // si
  unsigned __int16 v4; // bx
  unsigned __int8 currentVersion; // dl
  _DWORD *v6; // eax
  __int16 j; // cx
  __int16 v8; // si
  _DWORD *v9; // eax
  __int16 i; // cx
  unsigned __int16 v11; // si
  __int16 v12; // si
  __int16 v13; // si
  __int16 v14; // si
  int v15; // eax
  int *v16; // ecx
  __int16 v17; // dx
  int v18; // eax
  __int16 v19; // si
  int *v20; // eax
  __int16 v21; // cx
  int v22; // eax
  __int16 v23; // si
  int *v24; // eax
  __int16 v25; // cx
  int v26; // eax
  __int16 v27; // si
  int *v28; // eax
  __int16 v29; // cx
  int v30; // eax
  unsigned __int16 v31; // si
  int *v32; // eax
  __int16 v33; // cx
  unsigned __int16 v34; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v36; // eax
  const char *v37; // eax
  int v39; // [esp-Ch] [ebp-1Ch]
  int v40; // [esp-8h] [ebp-18h]
  const char *v41; // [esp-4h] [ebp-14h]
  unsigned __int16 v42; // [esp+Ch] [ebp-4h]

  SaveSize = TESPackage_GetSaveSize(this); /*0x6176d1*/
  v4 = SaveSize; /*0x6176d8*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6176db*/
    SaveSize += 6; /*0x6176e4*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x6176ec*/
  if ( currentVersion < 0x29u ) /*0x6176f2*/
  {
    v9 = *((_DWORD **)this + 0x10); /*0x61771f*/
    for ( i = 0; v9; v9 = (_DWORD *)v9[1] ) /*0x617726*/
    {
      if ( *v9 ) /*0x617728*/
        ++i; /*0x61772d*/
    }
    v8 = i + SaveSize + 8 * i + 2; /*0x61773a*/
  }
  else
  {
    v6 = *((_DWORD **)this + 0x10); /*0x6176f4*/
    for ( j = 0; v6; v6 = (_DWORD *)v6[1] ) /*0x6176fb*/
    {
      if ( *v6 ) /*0x617700*/
        ++j; /*0x617705*/
    }
    v8 = SaveSize + 0x10 * j + j + 2; /*0x617719*/
  }
  v11 = v8 + 0x7F; /*0x61773e*/
  v42 = v11; /*0x617744*/
  if ( currentVersion >= 0x3Au ) /*0x617748*/
  {
    v11 += 4; /*0x61774a*/
    v42 = v11; /*0x61774d*/
  }
  if ( currentVersion >= 0x3Du ) /*0x617754*/
    v42 = v11 + 1; /*0x617759*/
  if ( currentVersion >= 0x5Fu ) /*0x617760*/
  {
    v12 = sub_614BE0(*((int **)this + 0x17)) + v42; /*0x61777c*/
    v13 = sub_614BE0(*((int **)this + 0x18)) + v12; /*0x617784*/
    v14 = sub_614BE0(*((int **)this + 0x19)) + 0x15 + v13; /*0x617796*/
    v15 = *((_DWORD *)this + 0x24); /*0x617799*/
    if ( v15 ) /*0x6177a6*/
    {
      v16 = *(int **)(v15 + 4); /*0x6177a8*/
      v17 = 1; /*0x6177ad*/
      if ( v16 ) /*0x6177b2*/
        v17 = sub_485660(v16) + 1; /*0x6177bd*/
      v14 += v17 + 4; /*0x6177c4*/
    }
    v18 = *((_DWORD *)this + 0x25); /*0x6177ce*/
    v19 = v14 + 1; /*0x6177d4*/
    if ( v18 ) /*0x6177d9*/
    {
      v20 = *(int **)(v18 + 4); /*0x6177db*/
      v21 = 1; /*0x6177e0*/
      if ( v20 ) /*0x6177e5*/
        v21 = sub_485660(v20) + 1; /*0x6177f2*/
      v19 += v21 + 4; /*0x6177f5*/
    }
    v22 = *((_DWORD *)this + 0x26); /*0x6177f9*/
    v23 = v19 + 1; /*0x6177ff*/
    if ( v22 ) /*0x617804*/
    {
      v24 = *(int **)(v22 + 4); /*0x617806*/
      v25 = 1; /*0x61780b*/
      if ( v24 ) /*0x617810*/
        v25 = sub_485660(v24) + 1; /*0x61781d*/
      v23 += v25 + 4; /*0x617820*/
    }
    v26 = *((_DWORD *)this + 0x27); /*0x617824*/
    v27 = v23 + 1; /*0x61782a*/
    if ( v26 ) /*0x61782f*/
    {
      v28 = *(int **)(v26 + 4); /*0x617831*/
      v29 = 1; /*0x617836*/
      if ( v28 ) /*0x61783b*/
        v29 = sub_485660(v28) + 1; /*0x617848*/
      v27 += v29 + 4; /*0x61784b*/
    }
    v30 = *((_DWORD *)this + 0x28); /*0x61784f*/
    v31 = v27 + 1; /*0x617855*/
    v42 = v31; /*0x61785a*/
    if ( v30 ) /*0x61785e*/
    {
      v32 = *(int **)(v30 + 4); /*0x617860*/
      v33 = 1; /*0x617865*/
      if ( v32 ) /*0x61786a*/
        v33 = sub_485660(v32) + 1; /*0x617877*/
      v42 = v31 + v33 + 4; /*0x61787e*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion < 0x66u ) /*0x61788b*/
    v34 = v42; /*0x6178a2*/
  else
    v34 = sub_614BE0(*((int **)this + 0x1A)) + v42; /*0x61789d*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x6178b6*/
    if ( currentlySavingFormHeader )
    {
      v36 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x6178c3*/
      v37 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v36->vtbl->GetEditorName)( /*0x6178e3*/
                            v36,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x2844,
                            ".\\AI\\CombatController.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v34 - v4,
        *currentlySavingFormHeader,
        v37,
        v39,
        v40,
        v41);
      return v34; /*0x617906*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v34 - v4, 0x2844, ".\\AI\\CombatController.cpp");
  }
  return v34; /*0x617902*/
}
