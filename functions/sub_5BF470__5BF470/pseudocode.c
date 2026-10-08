void __usercall sub_5BF470(int a1@<ecx>, int edi0@<edi>, double st5_0@<st2>, double a4@<st1>, int a5@<ebx>)
{
  ExtraDataList *v6; // edi
  char v7; // al
  int (__stdcall *v8)(int, float); // edx
  int v9; // edi
  unsigned __int16 v10; // ax
  int *v11; // ecx
  char *v12; // eax
  signed int v13; // ebp
  int v14; // edi
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // ecx
  PlayerCharacter *v20; // edx
  int v21; // edi
  void (__thiscall *v22)(int, PlayerCharacter *); // eax
  float *ContainerChanges; // eax
  TESForm *v24; // eax
  TESTopic *v25; // eax
  Unk1C *DialogueInfo; // eax
  Unk1C *v27; // edi
  const char **v28; // ebp
  const char *v29; // ebp
  UInt32 v30; // eax
  int v31; // ecx
  int (__thiscall *v32)(int, PlayerCharacter *); // edx
  int v33; // eax
  char *m_data; // edi
  int Level; // [esp+24h] [ebp-4Ch]
  float GameHour; // [esp+34h] [ebp-3Ch]
  int v37; // [esp+34h] [ebp-3Ch]
  PlayerCharacter *v38; // [esp+34h] [ebp-3Ch]
  char v39; // [esp+38h] [ebp-38h]
  BSExtraDataVtbl *a2; // [esp+3Ch] [ebp-34h]
  _DWORD *a2a; // [esp+3Ch] [ebp-34h]
  _DWORD *a2b; // [esp+3Ch] [ebp-34h]
  float a2c; // [esp+3Ch] [ebp-34h]
  PlayerCharacter *a2d; // [esp+3Ch] [ebp-34h]
  int a3; // [esp+40h] [ebp-30h]
  float v46; // [esp+54h] [ebp-1Ch]
  float v47; // [esp+58h] [ebp-18h]
  BSStringT v48; // [esp+5Ch] [ebp-14h] BYREF
  int v49; // [esp+64h] [ebp-Ch]
  int v50; // [esp+6Ch] [ebp-4h]

  if ( sub_5BE870(edi0, a1, a5) ) /*0x5bf499*/
  {
    v6 = (ExtraDataList *)(*(_DWORD *)(a1 + 0xD8) + 0x44); /*0x5bf4b3*/
    a2 = (BSExtraDataVtbl *)TimeGlobals_GetGameMonth(&MEMORY[0xB332E0]); /*0x5bf4bb*/
    TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x5bf4c1*/
    v39 = v7; /*0x5bf4cb*/
    GameHour = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]); /*0x5bf4d4*/
    ExtraDataList_SetPersuasionPercentData(v6, COERCE_BSEXTRADATAVTBL_(0.0), GameHour, v39, a2); /*0x5bf4df*/
    v46 = MEMORY[0xB38E40]; /*0x5bf4f0*/
    v8 = *(int (__stdcall **)(int, float))(**(_DWORD **)(a1 + 0xD8) + 0x284); /*0x5bf4fc*/
    v47 = MEMORY[0xB38E48]; /*0x5bf502*/
    v9 = MEMORY[0xB38E50]; /*0x5bf50c*/
    *(float *)&v48.m_data = MEMORY[0xB38E38]; /*0x5bf512*/
    a2a = (_DWORD *)((int (__stdcall *)(_DWORD, _DWORD))v8)(0x20, unk_B38E88); /*0x5bf52a*/
    v37 = ((int (__thiscall *)(PlayerCharacter *))reference->vtbl->super.GetActorValue)(reference); /*0x5bf53b*/
    Level = (unsigned __int16)Actor_GetLevel(*(Actor **)(a1 + 0xD8)); /*0x5bf55d*/
    v10 = Actor_GetLevel((Actor *)reference); /*0x5bf55e*/
    sub_547B00(*(float *)&v48.m_data, v10, Level, v47, v9, v46, v37, 0x20, *(float *)&a2a); /*0x5bf56f*/
    v11 = (int *)reference; /*0x5bf574*/
    v13 = (signed int)v12; /*0x5bf57d*/
    v48.m_data = v12; /*0x5bf581*/
    if ( Actor_GetSkillMasteryLevel(v11, 0, v9, 0x20) == 4 ) /*0x5bf58d*/
      v13 = Double_To_SInt32((double)(int)v48.m_data * dbl_A2FAA0); /*0x5bf59e*/
    v14 = *(_DWORD *)(a1 + 0xD8); /*0x5bf5ac*/
    *(float *)&v48.m_data = MEMORY[0xB38E30]; /*0x5bf5ae*/
    v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x284))(v14, 0x20); /*0x5bf5be*/
    v16 = ((int (__thiscall *)(PlayerCharacter *, int, int))reference->vtbl->super.GetActorValue)(reference, 0x20, v15); /*0x5bf5d1*/
    a2b = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x284))(v14, 0x24, v16); /*0x5bf5e6*/
    v38 = reference; /*0x5bf5f9*/
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x224))(v14); /*0x5bf5fc*/
    v18 = sub_547B40(v17, *(float *)&v38, v49, (int)a2b, a3); /*0x5bf5ff*/
    v19 = *(_DWORD *)(a1 + 0xD8); /*0x5bf604*/
    v20 = reference; /*0x5bf60a*/
    v21 = v18; /*0x5bf610*/
    v22 = *(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v19 + 0x374); /*0x5bf614*/
    *(_DWORD *)&v48.m_dataLen = v21; /*0x5bf61a*/
    v22(v19, v20); /*0x5bf629*/
    *(_DWORD *)(a1 + 0xF8) += v21; /*0x5bf62b*/
    *(_DWORD *)(a1 + 0xF4) = v21; /*0x5bf631*/
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&reference->super.super.super.super.baseExtraList); /*0x5bf640*/
    sub_491700(ContainerChanges, st5_0, a4, (double)v21, (TESObjectREFR *)reference, v13, 0); /*0x5bf650*/
    v24 = TESDataHandler_LookupFormByID((TESForm *)0xF); /*0x5bf65d*/
    (*(void (__thiscall **)(_DWORD, TESForm *, _DWORD, signed int))(**(_DWORD **)(a1 + 0xD8) + 0x114))( /*0x5bf673*/
      *(_DWORD *)(a1 + 0xD8),
      v24,
      0,
      v13);
    v25 = (TESTopic *)TESTopic::GetTopic(3, 0x24); /*0x5bf679*/
    DialogueInfo = TESTopic::CreateDialogueItem(v25, *(Actor **)(a1 + 0xD8), (TESObjectREFR *)reference, 0, 0); /*0x5bf693*/
    v27 = DialogueInfo; /*0x5bf698*/
    if ( DialogueInfo ) /*0x5bf69c*/
    {
      DialogueItem::FirstResponse(DialogueInfo); /*0x5bf6a4*/
      v28 = (const char **)DialogueListCursor::GetCurrent(v27); /*0x5bf6b0*/
      if ( v28 ) /*0x5bf6b4*/
      {
        *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 0; /*0x5bf6c1*/
        *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7; /*0x5bf6cd*/
        (*(void (__stdcall **)(_DWORD, const char **))(**(_DWORD **)(a1 + 0xD8) + 0x304))( /*0x5bf6ed*/
          *(float *)&MEMORY[0xB33E90][0xC],
          v28);
        if ( byte_B13200 ) /*0x5bf6ef*/
        {
          v29 = *v28; /*0x5bf70e*/
          a2c = kTerrainLODQuadRayDirectionZ; /*0x5bf712*/
          v30 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0xD8) + 0x58) + 0x33C))(0); /*0x5bf717*/
          GameUI_QueueMessage(v29, v30, 0, a2c); /*0x5bf71b*/
        }
      }
      DialogueItem::Destroy((BSSimpleList_VoidPtr *)v27); /*0x5bf725*/
      FormHeapFree((unsigned int)v27); /*0x5bf72b*/
    }
    sub_5BF170(a4, 1); /*0x5bf735*/
    sub_57DE50(0x23); /*0x5bf73c*/
  }
  v48.m_data = 0; /*0x5bf744*/
  *(_DWORD *)&v48.m_dataLen = 0; /*0x5bf748*/
  v31 = *(_DWORD *)(a1 + 0xD8); /*0x5bf752*/
  v32 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v31 + 0x224); /*0x5bf75f*/
  a2d = reference; /*0x5bf765*/
  v50 = 0; /*0x5bf766*/
  v33 = v32(v31, a2d); /*0x5bf76a*/
  BSStringT_Static_Format(&v48, "%i", v33); /*0x5bf777*/
  m_data = v48.m_data; /*0x5bf77c*/
  Tile_SetString(*(_DWORD **)(a1 + 0xCC), (_DWORD *)0xFDE, v48.m_data); /*0x5bf78f*/
  if ( !sub_5BE870((int)m_data, a1, 0) ) /*0x5bf794*/
    Tile_SetFloat(*(Tile **)(a1 + 0xB8), (_DWORD *)0xFAF, 1.0); /*0x5bf7ae*/
  FormHeapFree((unsigned int)m_data); /*0x5bf7b4*/
}
