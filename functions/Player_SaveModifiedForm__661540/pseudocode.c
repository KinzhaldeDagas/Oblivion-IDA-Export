// Serializes PlayerCharacter modified-form state. The skill block persists progress and advancement accounting separately from the class record; requiredSkillExp is not serialized.
void __userpurge Player_SaveModifiedForm(int ecx0@<ecx>, TESForm a1)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebx
  TESFormVtbl *vtbl; // ebp
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  UInt32 *currentlySavingFormHeader; // ebp
  unsigned __int8 *v9; // edi
  TESForm *v10; // eax
  const char *v11; // eax
  unsigned __int8 *v12; // edi
  TESFormVtbl *v13; // ebx
  bool v14; // zf
  TESSaveLoadGame_SerializationView *v15; // ecx
  unsigned __int8 *v16; // eax
  TESSaveLoadGame_SerializationView *v17; // ecx
  TESSaveLoadGame_SerializationView *v18; // ecx
  unsigned __int8 currentVersion; // al
  int v20; // eax
  int v21; // eax
  TESChildCELL *v22; // eax
  void *v23; // eax
  void *v24; // eax
  void *v25; // ecx
  _DWORD *v26; // ecx
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // eax
  int v31; // eax
  TESSaveLoadGame_SerializationView *v32; // eax
  unsigned __int8 v33; // cl
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  unsigned __int8 *v39; // ebp
  int *i; // edi
  int v41; // eax
  int v42; // eax
  int v43; // eax
  unsigned int v44; // ecx
  unsigned int v45; // eax
  _DWORD *v46; // edx
  unsigned int v47; // eax
  unsigned __int8 *v48; // ebx
  float *v49; // edi
  int v50; // eax
  _DWORD *v51; // eax
  TESFormVtbl *v52; // ecx
  int v53; // edi
  const void *v54; // eax
  const void **v55; // eax
  const void *v56; // edi
  _DWORD *v57; // eax
  int v58; // eax
  TESSaveLoadGame_SerializationView *v59; // eax
  unsigned __int8 *v60; // ebx
  _DWORD *v61; // edi
  TESSaveLoadGame_SerializationView *v62; // eax
  _DWORD *v63; // ebp
  int v64; // ebx
  int v65; // eax
  unsigned int *v66; // edi
  TESForm *v67; // eax
  char *Name; // edi
  TESForm::ModReferenceList *next; // edi
  TESForm::ModReferenceList *v70; // ebx
  int v71; // eax
  UInt32 *v72; // edi
  unsigned __int8 *v73; // esi
  TESForm *v74; // eax
  const char *v75; // eax
  _WORD *v76; // edi
  unsigned __int8 *v77; // esi
  int v78; // [esp-Ch] [ebp-60h]
  int v79; // [esp-Ch] [ebp-60h]
  int v80; // [esp-8h] [ebp-5Ch]
  int v81; // [esp-8h] [ebp-5Ch]
  const char *v82; // [esp-4h] [ebp-58h]
  const char *v83; // [esp-4h] [ebp-58h]
  int v84; // [esp+0h] [ebp-54h]
  int v85; // [esp+4h] [ebp-50h]
  int v86; // [esp+8h] [ebp-4Ch]
  int v87; // [esp+Ch] [ebp-48h]
  TESForm v88; // [esp+10h] [ebp-44h] BYREF
  unsigned int ParentFormID; // [esp+28h] [ebp-2Ch] BYREF
  unsigned int v90; // [esp+2Ch] [ebp-28h] BYREF
  unsigned int v91; // [esp+30h] [ebp-24h] BYREF
  unsigned int v92; // [esp+34h] [ebp-20h] BYREF
  unsigned int v93; // [esp+38h] [ebp-1Ch] BYREF
  unsigned int v94; // [esp+3Ch] [ebp-18h] BYREF
  unsigned int v95; // [esp+40h] [ebp-14h] BYREF
  unsigned int source; // [esp+44h] [ebp-10h] BYREF
  int Src; // [esp+48h] [ebp-Ch] BYREF
  int v98; // [esp+4Ch] [ebp-8h] BYREF
  unsigned int v99; // [esp+50h] [ebp-4h] BYREF

  v3 = g_TESSaveLoadGame; /*0x661549*/
  source = 0; /*0x661551*/
  bufferCursor = v3->bufferCursor; /*0x661555*/
  vtbl = 0; /*0x661558*/
  v88.vtbl = 0; /*0x66155a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x66155e*/
  {
    v6 = g_TESSaveLoadGame; /*0x661567*/
    Src = 0x4B4F4C42; /*0x661574*/
    SaveLoad_SaveData(v6, &Src, 4u); /*0x66157c*/
    v7 = g_TESSaveLoadGame; /*0x661581*/
    vtbl = (TESFormVtbl *)g_TESSaveLoadGame->bufferCursor; /*0x661587*/
    v88.vtbl = vtbl; /*0x661591*/
    SaveLoad_SaveData(v7, &source, 2u); /*0x661595*/
  }
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x204), 0x120u); /*0x6615a8*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x324), 0x120u); /*0x6615bb*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x31u ) /*0x6615ca*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x450), 0x120u); /*0x6615da*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x444), 4u); /*0x6615ea*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x448), 4u); /*0x6615fa*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x44C), 4u); /*0x66160a*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x66161d*/
    v9 = g_TESSaveLoadGame->bufferCursor; /*0x661625*/
    if ( currentlySavingFormHeader )
    {
      v10 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x66162e*/
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)( /*0x66164e*/
                            v10,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x234D,
                            ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v9 - bufferCursor,
        *currentlySavingFormHeader,
        v11,
        v78,
        v80,
        v82);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v9 - bufferCursor,
        0x234D,
        ".\\AI\\PlayerCharacter.cpp");
    }
    vtbl = v88.vtbl; /*0x661681*/
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x66168d*/
  {
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x66169c*/
    if ( v12 > (unsigned __int8 *)&vtbl[0x129].Unk_30 + 3 ) /*0x6616a7*/
      PrintError( /*0x6616b8*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\PlayerCharacter.cpp",
        0x234D);
    LOWORD(vtbl->super.InitializeComponent) = (_WORD)v12 - (_WORD)vtbl; /*0x6616c2*/
  }
  v13 = a1.vtbl; /*0x6616c8*/
  j_Actor_Save_((unsigned int)a1.vtbl); /*0x6616cf*/
  v14 = Global_DebugSaveBuffer == 0; /*0x6616d4*/
  v15 = g_TESSaveLoadGame; /*0x6616db*/
  v98 = 0; /*0x6616e1*/
  v16 = v15->bufferCursor; /*0x6616e5*/
  Src = 0; /*0x6616e8*/
  *(_DWORD *)&v88.member.type = v16; /*0x6616ec*/
  if ( !v14 ) /*0x6616f0*/
    *(_DWORD *)&v88.member.type = v16; /*0x6616f2*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6616f6*/
  {
    v17 = g_TESSaveLoadGame; /*0x661706*/
    a1.vtbl = (TESFormVtbl *)0x4B4F4C42; /*0x66170c*/
    SaveLoad_SaveData(v17, &a1, 4u); /*0x661714*/
    v18 = g_TESSaveLoadGame; /*0x661719*/
    Src = (int)g_TESSaveLoadGame->bufferCursor; /*0x661729*/
    SaveLoad_SaveData(v18, &v98, 2u); /*0x66172d*/
  }
  if ( ((unsigned int)v13 & 0x2000000) != 0 ) /*0x661738*/
    Actor_SaveAnimationState(ecx0, *(_DWORD **)(ecx0 + 0x5CC)); /*0x661742*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x588), 1u); /*0x661755*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x589), 1u); /*0x661765*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x58B), 1u); /*0x661775*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x58C), 1u); /*0x661785*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x590), 4u); /*0x661795*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x59C), 4u); /*0x6617a5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5A0), 4u); /*0x6617b5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5A4), 4u); /*0x6617c5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5A8), 1u); /*0x6617d5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x600), 1u); /*0x6617e5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x604), 4u); /*0x6617f5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x608), 4u); /*0x661805*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x60C), 4u); /*0x661815*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x610), 1u); /*0x661825*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x611), 1u); /*0x661835*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x614), 4u); /*0x661845*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x620), 1u); /*0x661855*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x61C), 4u); /*0x661865*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x62C), 0xCu); /*0x661875*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5D4), 4u); /*0x661885*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x640), 4u); /*0x661895*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5BC), 4u); /*0x6618a5*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x648), 4u); /*0x6618b5*/
  SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(ecx0 + 0x64C), 4u); /*0x6618c9*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x594), 1u); /*0x6618d9*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x598), 4u); /*0x6618e9*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6E4), 1u); /*0x6618f9*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6E5), 1u); /*0x661909*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6E6), 1u); /*0x661919*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6F4), 4u); /*0x661929*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6F8), 4u); /*0x661939*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6FC), 4u); /*0x661949*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x714), 4u); /*0x661959*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5C0), 1u); /*0x661969*/
  currentVersion = g_TESSaveLoadGame->currentVersion; /*0x661973*/
  if ( currentVersion >= 0x28u && currentVersion < 0x2Du ) /*0x66197c*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x720), 0xCu); /*0x661989*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x720), 0xCu); /*0x661993*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x39u ) /*0x6619a4*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x658), 0x70u); /*0x6619b1*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x6C8), 0x18u); /*0x6619c1*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x3Fu ) /*0x6619d0*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x738), 1u); /*0x6619dd*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x40u ) /*0x6619ed*/
  {
    SaveLoad_SaveData(g_TESSaveLoadGame, (const void *)(ecx0 + 0x57C), 4u); /*0x6619f8*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x580), 4u); /*0x661a08*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x584), 4u); /*0x661a18*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x49u ) /*0x661a26*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x110), 4u); /*0x661a33*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x200), 1u); /*0x661a43*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x63u ) /*0x661a51*/
  {
    v14 = *(_DWORD *)(ecx0 + 0x5B0) == 0; /*0x661a53*/
    LOBYTE(a1.vtbl) = 0; /*0x661a59*/
    if ( !v14 ) /*0x661a5e*/
      LOBYTE(a1.vtbl) = 0x15; /*0x661a60*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 1u); /*0x661a6e*/
    if ( LOBYTE(a1.vtbl) ) /*0x661a79*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, *(const void **)(ecx0 + 0x5B0), 4 * LOBYTE(a1.vtbl)); /*0x661a8c*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x71u ) /*0x661a9b*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x58A), 1u); /*0x661aa8*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5A9), 1u); /*0x661ab8*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x718), 4u); /*0x661ac8*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)(ecx0 + 0x760), 4u); /*0x661ad8*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x78u ) /*0x661ae6*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &unk_B3BAEA, 1u); /*0x661af1*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &unk_B3BAFC, 4u); /*0x661aff*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x7Au ) /*0x661b0e*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &unk_B3BB24, 4u); /*0x661b19*/
  v20 = *(_DWORD *)(ecx0 + 0x118); /*0x661b1e*/
  v88.vtbl = 0; /*0x661b26*/
  if ( v20 ) /*0x661b2a*/
    v88.vtbl = *(TESFormVtbl **)(v20 + 0xC); /*0x661b2f*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&v88, 4u); /*0x661b3c*/
  v21 = *(_DWORD *)(ecx0 + 0x644); /*0x661b41*/
  v88.member.flags = 0; /*0x661b49*/
  if ( v21 ) /*0x661b4d*/
    v88.member.flags = *(_DWORD *)(v21 + 0xC); /*0x661b52*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&v88.member.flags, 4u); /*0x661b5f*/
  v22 = MEMORY[0xB3BAD0]; /*0x661b64*/
  v14 = MEMORY[0xB3BAD0] == 0; /*0x661b69*/
  v88.member.refID = 0; /*0x661b6b*/
  if ( !v14 ) /*0x661b6f*/
    v88.member.refID = (UInt32)v22[3].vtbl; /*0x661b74*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v88.member.refID, 4u); /*0x661b81*/
  v23 = *(void **)(ecx0 + 0x624); /*0x661b86*/
  v88.member.modlist.data = 0; /*0x661b8e*/
  if ( v23 ) /*0x661b92*/
  {
    v24 = OblivionDynamicCast( /*0x661ba1*/
            v23,
            0,
            (struct _s_RTTICompleteObjectLocator *)&MagicItem `RTTI Type Descriptor',
            &SpellItem `RTTI Type Descriptor',
            0);
    if ( v24 ) /*0x661bab*/
      v88.member.modlist.data = *((Data **)v24 + 3); /*0x661bb0*/
  }
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&v88.member.modlist, 4u); /*0x661bbd*/
  v25 = *(void **)(ecx0 + 0x1E8); /*0x661bc2*/
  v88.member.modlist.next = 0; /*0x661bca*/
  if ( v25 ) /*0x661bce*/
    v88.member.modlist.next = (TESForm::ModReferenceList *)MagicItem_GetFormID(v25); /*0x661bd5*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&v88.member.modlist.next, 4u); /*0x661be2*/
  v26 = *(_DWORD **)(ecx0 + 0x1EC); /*0x661be7*/
  ParentFormID = 0; /*0x661bef*/
  if ( v26 ) /*0x661bf3*/
    ParentFormID = MagicTarget_GetParentFormID(v26); /*0x661bfa*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &ParentFormID, 4u); /*0x661c07*/
  v27 = *(_DWORD *)(ecx0 + 0x1E0); /*0x661c0c*/
  v90 = 0; /*0x661c14*/
  if ( v27 ) /*0x661c18*/
    v90 = *(_DWORD *)(v27 + 0xC); /*0x661c1d*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v90, 4u); /*0x661c2a*/
  v28 = *(_DWORD *)(ecx0 + 0x6E8); /*0x661c2f*/
  v91 = 0; /*0x661c37*/
  if ( v28 ) /*0x661c3b*/
    v91 = *(_DWORD *)(v28 + 0xC); /*0x661c40*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v91, 4u); /*0x661c4d*/
  v29 = *(_DWORD *)(ecx0 + 0x628); /*0x661c52*/
  v92 = 0; /*0x661c5a*/
  if ( v29 ) /*0x661c5e*/
    v92 = *(_DWORD *)(v29 + 0xC); /*0x661c63*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v92, 4u); /*0x661c70*/
  v30 = *(_DWORD *)(ecx0 + 0x650); /*0x661c75*/
  v93 = 0; /*0x661c7d*/
  if ( v30 ) /*0x661c81*/
    v93 = *(_DWORD *)(v30 + 0xC); /*0x661c86*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v93, 4u); /*0x661c93*/
  v31 = *(_DWORD *)(ecx0 + 0x6E0); /*0x661c98*/
  v94 = 0; /*0x661ca0*/
  if ( v31 ) /*0x661ca4*/
    v94 = *(_DWORD *)(v31 + 0xC); /*0x661ca9*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v94, 4u); /*0x661cb6*/
  v32 = g_TESSaveLoadGame; /*0x661cbb*/
  v33 = g_TESSaveLoadGame->currentVersion; /*0x661cc0*/
  if ( v33 >= 0x28u && v33 < 0x2Du ) /*0x661ccb*/
  {
    v34 = *(_DWORD *)(ecx0 + 0x72C); /*0x661ccd*/
    a1.vtbl = 0; /*0x661cd5*/
    if ( v34 ) /*0x661cd9*/
      a1.vtbl = *(TESFormVtbl **)(v34 + 0xC); /*0x661cde*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x661ceb*/
    v32 = g_TESSaveLoadGame; /*0x661cf0*/
  }
  if ( v32->currentVersion >= 0x40u ) /*0x661cf8*/
  {
    v35 = *(_DWORD *)(ecx0 + 0x578); /*0x661cfa*/
    a1.vtbl = 0; /*0x661d02*/
    if ( v35 ) /*0x661d06*/
      a1.vtbl = *(TESFormVtbl **)(v35 + 0xC); /*0x661d0b*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x661d18*/
    v32 = g_TESSaveLoadGame; /*0x661d1d*/
  }
  if ( v32->currentVersion >= 0x42u ) /*0x661d26*/
  {
    v36 = MEMORY[0xB3BAD4]; /*0x661d28*/
    v14 = MEMORY[0xB3BAD4] == 0; /*0x661d2d*/
    a1.vtbl = 0; /*0x661d2f*/
    if ( !v14 ) /*0x661d33*/
      a1.vtbl = *(TESFormVtbl **)(v36 + 0xC); /*0x661d38*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x661d45*/
    v32 = g_TESSaveLoadGame; /*0x661d4a*/
  }
  if ( v32->currentVersion >= 0x57u ) /*0x661d53*/
  {
    v37 = *(_DWORD *)(ecx0 + 0x570); /*0x661d55*/
    a1.vtbl = 0; /*0x661d5d*/
    if ( v37 ) /*0x661d61*/
      a1.vtbl = *(TESFormVtbl **)(v37 + 0xC); /*0x661d66*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x661d73*/
    v32 = g_TESSaveLoadGame; /*0x661d78*/
  }
  if ( v32->currentVersion >= 0x60u ) /*0x661d81*/
  {
    v38 = *(_DWORD *)(ecx0 + 0x638); /*0x661d83*/
    a1.vtbl = 0; /*0x661d8b*/
    if ( v38 ) /*0x661d8f*/
      a1.vtbl = *(TESFormVtbl **)(v38 + 0xC); /*0x661d94*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x661da1*/
    v32 = g_TESSaveLoadGame; /*0x661da6*/
  }
  if ( v32->currentVersion >= 0x63u ) /*0x661daf*/
  {
    a1.vtbl = 0; /*0x661db9*/
    v39 = v32->bufferCursor; /*0x661dbd*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 2u); /*0x661dc3*/
    for ( i = *(int **)(ecx0 + 0x5AC); i; i = (int *)i[1] ) /*0x661dd0*/
    {
      if ( !i[1] && !*i ) /*0x661dd7*/
        break; /*0x661dd9*/
      v41 = *i; /*0x661ddb*/
      v14 = *i == 0; /*0x661ddd*/
      v95 = 0; /*0x661ddf*/
      if ( !v14 ) /*0x661de3*/
        v95 = *(_DWORD *)(v41 + 0xC); /*0x661de8*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v95, 4u); /*0x661df5*/
      ++a1.vtbl; /*0x661dfa*/
    }
    *(_WORD *)v39 = a1.vtbl; /*0x661e0b*/
    v32 = g_TESSaveLoadGame; /*0x661e0f*/
  }
  if ( v32->currentVersion >= 0x6Cu ) /*0x661e1a*/
  {
    v42 = *(_DWORD *)(ecx0 + 0x6E8); /*0x661e1c*/
    a1.vtbl = 0; /*0x661e24*/
    if ( v42 ) /*0x661e28*/
    {
      v43 = *(_DWORD *)(v42 + 0x24); /*0x661e2a*/
      if ( v43 ) /*0x661e2f*/
        a1.vtbl = *(TESFormVtbl **)(v43 + 0xC); /*0x661e34*/
    }
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x661e41*/
    v32 = g_TESSaveLoadGame; /*0x661e46*/
  }
  if ( v32->currentVersion >= 0x6Fu ) /*0x661e4f*/
  {
    v99 = *(unsigned __int16 *)(ecx0 + 0x794); /*0x661e65*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &v99, 2u); /*0x661e69*/
    v44 = *(_DWORD *)(ecx0 + 0x78C); /*0x661e6e*/
    v45 = 0; /*0x661e7c*/
    if ( v44 ) /*0x661e80*/
    {
      v46 = *(_DWORD **)(ecx0 + 0x790); /*0x661e85*/
      while ( !*v46 ) /*0x661e89*/
      {
        ++v45; /*0x661e8b*/
        ++v46; /*0x661e8e*/
        if ( v45 >= v44 ) /*0x661e93*/
          goto LABEL_104; /*0x661e93*/
      }
      v47 = *(_DWORD *)(*(_DWORD *)(ecx0 + 0x790) + 4 * v45); /*0x661ee8*/
    }
    else
    {
LABEL_104:
      v47 = 0; /*0x661e95*/
    }
    source = v47; /*0x661e99*/
    while ( source ) /*0x661e9d*/
    {
      v95 = 0; /*0x661eb1*/
      LOBYTE(a1.vtbl) = 0; /*0x661eb5*/
      sub_65DDC0((unsigned int *)(ecx0 + 0x788), &source, &v95, &a1); /*0x661eba*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v95, 4u); /*0x661ec8*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 1u); /*0x661ed6*/
    }
    v32 = g_TESSaveLoadGame; /*0x661ee1*/
  }
  if ( v32->currentVersion >= 0x73u ) /*0x661ef3*/
  {
    a1.vtbl = 0; /*0x661ef5*/
    v48 = v32->bufferCursor; /*0x661ef9*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 2u); /*0x661f05*/
    v49 = &qword_B3BB2C[6]; /*0x661f0a*/
    do /*0x661f42*/
    {
      if ( !*((_DWORD *)v49 + 1) && !*(_DWORD *)v49 ) /*0x661f15*/
        break; /*0x661f17*/
      v50 = *(_DWORD *)v49; /*0x661f19*/
      v14 = *(_DWORD *)v49 == 0; /*0x661f1b*/
      source = 0; /*0x661f1d*/
      if ( !v14 ) /*0x661f21*/
        source = *(_DWORD *)(v50 + 0xC); /*0x661f26*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &source, 4u); /*0x661f33*/
      ++a1.vtbl; /*0x661f38*/
      v49 = *((float **)v49 + 1); /*0x661f3d*/
    }
    while ( v49 ); /*0x661f42*/
    *(_WORD *)v48 = a1.vtbl; /*0x661f49*/
  }
  ActiveEffect_Base_SaveAEList( /*0x661f54*/
    *(_DWORD *)(ecx0 + 0x1E4),
    ecx0,
    v84,
    v85,
    v86,
    v87,
    (int)v88.vtbl,
    *(int *)&v88.member.type,
    v88.member.flags,
    v88.member.refID);
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x130), 0x54u);// Save PlayerCharacter::skillExp as exactly 0x54 bytes: 21 native skill-progress floats in AV group-2 order. /*0x661f67*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x58u )// Save versions >=0x58 serialize the complete attribute-bonus bucket queue as count + count*8 bytes. /*0x661f76*/
  {
    v51 = *(_DWORD **)(ecx0 + 0x5B4); /*0x661f78*/
    if ( v51 ) /*0x661f80*/
    {
      v52 = 0; /*0x661f82*/
      do /*0x661f90*/
      {
        if ( *v51 ) /*0x661f84*/
          v52 = (TESFormVtbl *)((char *)v52 + 1); /*0x661f88*/
        v51 = (_DWORD *)v51[1]; /*0x661f8b*/
      }
      while ( v51 ); /*0x661f90*/
      a1.vtbl = v52; /*0x661f92*/
    }
    else
    {
      a1.vtbl = 0; /*0x661f98*/
    }
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 4u); /*0x661fa5*/
    if ( (int)a1.vtbl > 0 ) /*0x661fae*/
    {
      v53 = *(_DWORD *)(ecx0 + 0x5B4); /*0x661fb0*/
      if ( v53 ) /*0x661fb8*/
      {
        while ( 1 ) /*0x661fc3*/
        {
          v54 = *(const void **)v53; /*0x661fc3*/
          if ( !*(_DWORD *)(v53 + 4) ) /*0x661fc0*/
            break; /*0x661fc0*/
          if ( v54 ) /*0x661fcf*/
            goto LABEL_131; /*0x661fcf*/
LABEL_132:
          v53 = *(_DWORD *)(v53 + 4); /*0x661fdb*/
          if ( !v53 ) /*0x661fe0*/
            goto LABEL_133; /*0x661fe0*/
        }
        if ( !v54 ) /*0x661fc9*/
          goto LABEL_133; /*0x661fc9*/
LABEL_131:
        TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, v54, 8u); /*0x661fd1*/
        goto LABEL_132;                         // Serialize one eight-byte attribute-bonus bucket. Each byte corresponds to one Oblivion attribute AV 0..7. /*0x661fd6*/
      }
    }
  }
LABEL_133:
  if ( g_TESSaveLoadGame->currentVersion < 0x58u )// Legacy save versions below 0x58 serialize only one eight-byte attribute-bonus bucket. /*0x661feb*/
  {
    v55 = *(const void ***)(ecx0 + 0x5B4); /*0x661fed*/
    if ( v55 ) /*0x661ff5*/
    {
      v56 = *v55; /*0x661ff7*/
    }
    else
    {
      v57 = (_DWORD *)FormHeapAlloc(8u); /*0x661ffd*/
      if ( v57 ) /*0x662007*/
      {
        *v57 = 0; /*0x66200b*/
        v57[1] = 0; /*0x66200d*/
      }
      else
      {
        v57 = 0; /*0x662012*/
      }
      v56 = v57; /*0x662014*/
    }
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, v56, 8u); /*0x66201b*/
    if ( !*(_DWORD *)(ecx0 + 0x5B4) ) /*0x662020*/
      FormHeapFree((unsigned int)v56); /*0x662029*/
  }
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x5B8), 3u);// Save the three Combat/Magic/Stealth specialization advance counters at PlayerCharacter+0x5B8. /*0x66203c*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x188), 0x54u);// Save PlayerCharacter::skillAdv as exactly 0x54 bytes: 21 UInt32 per-skill advance counters. /*0x66204c*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x184), 4u);// Save the four-byte majorSkillAdvances counter. Only TESClass major-skill increases contribute to this value. /*0x66205c*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x1DC), 1u);// Save the one-byte bCanLevelUp readiness flag. /*0x66206c*/
  v58 = *(_DWORD *)(ecx0 + 0x5F4); /*0x662071*/
  a1.vtbl = 0; /*0x662079*/
  if ( v58 ) /*0x66207d*/
    a1.vtbl = *(TESFormVtbl **)(v58 + 0xC); /*0x662082*/
  TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x66208f*/
  v59 = g_TESSaveLoadGame; /*0x662094*/
  a1.vtbl = 0; /*0x6620a0*/
  v60 = v59->bufferCursor; /*0x6620a4*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 2u); /*0x6620a9*/
  v61 = (_DWORD *)(ecx0 + 0x5E4); /*0x6620ae*/
  if ( ecx0 != 0xFFFFFA1C ) /*0x6620b6*/
  {
    do /*0x6620e2*/
    {
      if ( !v61[1] && !*v61 ) /*0x6620bd*/
        break; /*0x6620bf*/
      v99 = *(_DWORD *)(*v61 + 0xC); /*0x6620cf*/
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v99, 4u); /*0x6620d3*/
      ++a1.vtbl; /*0x6620d8*/
      v61 = (_DWORD *)v61[1]; /*0x6620dd*/
    }
    while ( v61 ); /*0x6620e2*/
  }
  *(_WORD *)v60 = a1.vtbl; /*0x6620e9*/
  v62 = g_TESSaveLoadGame; /*0x6620ec*/
  v88.vtbl = 0; /*0x6620f1*/
  v94 = (unsigned int)v62->bufferCursor; /*0x662102*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &v88, 2u); /*0x662109*/
  v63 = (_DWORD *)(ecx0 + 0x5EC); /*0x66210e*/
  if ( ecx0 != 0xFFFFFA14 ) /*0x662116*/
  {
    do /*0x6621b6*/
    {
      if ( !v63[1] && !*v63 ) /*0x662126*/
        break; /*0x66212a*/
      v64 = *v63; /*0x662130*/
      v65 = *(_DWORD *)(*v63 + 0x68); /*0x662133*/
      v95 = *(_DWORD *)(v65 + 0xC); /*0x662139*/
      LOBYTE(a1.vtbl) = 0; /*0x66213d*/
      v66 = (unsigned int *)(v65 + 0x40); /*0x662145*/
      LOBYTE(source) = *(_BYTE *)(v64 + 0x60); /*0x66214a*/
      if ( v65 != 0xFFFFFFC0 ) /*0x66214e*/
      {
        while ( v66[1] || *v66 ) /*0x662159*/
        {
          v99 = *v66; /*0x662162*/
          if ( v64 == sub_52AC30((int *)v99, source) ) /*0x66216d*/
          {
            LOBYTE(a1.vtbl) = *(_BYTE *)v99; /*0x66217e*/
            break; /*0x66217e*/
          }
          v66 = (unsigned int *)v66[1]; /*0x66216f*/
          if ( !v66 ) /*0x662174*/
            break; /*0x662174*/
        }
      }
      TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, &v95, 4u); /*0x66218b*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 1u); /*0x662199*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &source, 1u); /*0x6621a7*/
      ++v88.vtbl; /*0x6621ac*/
      v63 = (_DWORD *)v63[1]; /*0x6621b1*/
    }
    while ( v63 ); /*0x6621b6*/
  }
  *(_WORD *)v94 = v88.vtbl; /*0x6621c5*/
  sub_416BA0(); /*0x6621c8*/
  v67 = (TESForm *)(*(int (__thiscall **)(int))(*(_DWORD *)ecx0 + 0x170))(ecx0); /*0x6621d7*/
  sub_526230(v67, ecx0); /*0x6621dc*/
  Name = TESObjectREFR_GetName((TESObjectREFR *)ecx0); /*0x6621e8*/
  LOBYTE(a1.vtbl) = strlen(Name) + 1; /*0x662206*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, &a1, 1u); /*0x66220a*/
  TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, Name, LOBYTE(a1.vtbl)); /*0x662218*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x2Cu ) /*0x662226*/
  {
    next = Actor_GetActorBaseForm((Actor *)ecx0, 0)[0xA].member.modlist.next;// Save the player's current base-class FormID. /*0x662237*/
    v70 = (TESForm::ModReferenceList *)TESDataHandler_LookupTESClassByFormID((void *)LODWORD(MEMORY[0xB37A58][0x8C])); /*0x66224b*/
    a1.vtbl = 0; /*0x66224d*/
    if ( next ) /*0x662255*/
      a1.vtbl = (TESFormVtbl *)next[1].next; /*0x66225a*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x662267*/
    if ( next ) /*0x66226e*/
    {
      if ( next == v70 ) /*0x662272*/
        TESClass_SaveGame((TESClass *)next);    // If the base class is the distinguished custom-class form, embed its TESClass payload, including specialization, attributes, and exactly seven major skill AVs. /*0x662276*/
    }
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x45u ) /*0x662285*/
  {
    v71 = *(_DWORD *)(ecx0 + 0x654); /*0x662287*/
    a1.vtbl = 0; /*0x66228f*/
    if ( v71 ) /*0x662297*/
      a1.vtbl = *(TESFormVtbl **)(v71 + 0xC); /*0x66229c*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)ecx0, (const unsigned int *)&a1, 4u); /*0x6622a9*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x7Eu ) /*0x6622b8*/
  {
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x116), 1u); /*0x6622c5*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)ecx0, (const void *)(ecx0 + 0x700), 4u); /*0x6622d5*/
  }
  if ( Global_DebugSaveBuffer )
  {
    v72 = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x6622e8*/
    v73 = g_TESSaveLoadGame->bufferCursor; /*0x6622f0*/
    if ( v72 )
    {
      v74 = TESForm_LookupByFormID(*v72); /*0x6622f8*/
      v75 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v74->vtbl->GetEditorName)( /*0x662318*/
                            v74,
                            *(UInt32 *)((char *)v72 + 5),
                            0x251A,
                            ".\\AI\\PlayerCharacter.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        &v73[-*(_DWORD *)&v88.member.type],
        *v72,
        v75,
        v79,
        v81,
        v83);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        &v73[-*(_DWORD *)&v88.member.type],
        0x251A,
        ".\\AI\\PlayerCharacter.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x662354*/
  {
    v76 = (_WORD *)Src; /*0x662363*/
    v77 = g_TESSaveLoadGame->bufferCursor; /*0x662367*/
    if ( (unsigned int)v77 > Src + 0xFFFF ) /*0x662372*/
      PrintError( /*0x662383*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        ".\\AI\\PlayerCharacter.cpp",
        0x251A);
    *v76 = (_WORD)v77 - (_WORD)v76; /*0x66238d*/
  }
}
