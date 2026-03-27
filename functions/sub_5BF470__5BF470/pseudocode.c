void __usercall sub_5BF470(int a1@<ecx>, int edi0@<edi>, double st5_0@<st2>, double a4@<st1>)
{
  ExtraDataList *v6; // edi
  char v7; // al
  int (__stdcall *v8)(int, float); // edx
  int v9; // edi
  unsigned __int16 Level; // ax
  unsigned __int16 v11; // ax
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
  int v35; // [esp+24h] [ebp-4Ch]
  float v36; // [esp+28h] [ebp-48h]
  float GameHour; // [esp+34h] [ebp-3Ch]
  int v38; // [esp+34h] [ebp-3Ch]
  PlayerCharacter *v39; // [esp+34h] [ebp-3Ch]
  char v40; // [esp+38h] [ebp-38h]
  BSExtraDataVtbl *a2; // [esp+3Ch] [ebp-34h]
  _DWORD *a2a; // [esp+3Ch] [ebp-34h]
  _DWORD *a2b; // [esp+3Ch] [ebp-34h]
  float a2c; // [esp+3Ch] [ebp-34h]
  PlayerCharacter *a2d; // [esp+3Ch] [ebp-34h]
  int a3; // [esp+40h] [ebp-30h]
  float v47; // [esp+54h] [ebp-1Ch]
  int v48; // [esp+58h] [ebp-18h]
  BSStringT v49; // [esp+5Ch] [ebp-14h] BYREF
  int v50; // [esp+64h] [ebp-Ch]
  int v51; // [esp+6Ch] [ebp-4h]

  if ( sub_5BE870(edi0, a1) )
  {
    v6 = (ExtraDataList *)(*(_DWORD *)(a1 + 0xD8) + 0x44);
    a2 = (BSExtraDataVtbl *)TimeGlobals_GetGameMonth(&TimeGlobals);
    TimeGlobals_GetGameDay(&TimeGlobals);
    v40 = v7;
    GameHour = TimeGlobals_GetGameHour(&TimeGlobals);
    sub_420F20(v6, COERCE_BSEXTRADATAVTBL_(0.0), GameHour, v40, a2);
    v47 = fBribeCostCurve;
    v8 = *(int (__stdcall **)(int, float))(**(_DWORD **)(a1 + 0xD8) + 0x284);
    *(float *)&v48 = fBribeNPCLevelMult;
    v9 = iBribeAmountMax;
    *(float *)&v49.m_data = fBribeScale;
    a2a = (_DWORD *)((int (__stdcall *)(_DWORD, _DWORD))v8)(0x20, flt_B38E88);
    v38 = ((int (__thiscall *)(PlayerCharacter *))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(TESDataHandler_g_PlayerRef);
    Level = Actor_GetLevel(*(Actor **)(a1 + 0xD8), v48);
    v11 = Actor_GetLevel((Actor *)TESDataHandler_g_PlayerRef, Level);
    sub_547B00(*(float *)&v49.m_data, v11, v35, v36, v9, v47, v38, 0x20, *(float *)&a2a);
    v13 = (signed int)v12;
    v49.m_data = v12;
    if ( Actor_GetSkillMasteryLevel(0x20) == 4 )
      v13 = Double_To_SInt32((double)(int)v49.m_data * dbl_A2FAA0);
    v14 = *(_DWORD *)(a1 + 0xD8);
    *(float *)&v49.m_data = fBribeCurve;
    v15 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v14 + 0x284))(v14, 0x20);
    v16 = ((int (__thiscall *)(PlayerCharacter *, int, int))TESDataHandler_g_PlayerRef->vtbl->super.GetActorValue)(
            TESDataHandler_g_PlayerRef,
            0x20,
            v15);
    a2b = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)v14 + 0x284))(v14, 0x24, v16);
    v39 = TESDataHandler_g_PlayerRef;
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v14 + 0x224))(v14);
    v18 = sub_547B40(v17, *(float *)&v39, v50, (int)a2b, a3);
    v19 = *(_DWORD *)(a1 + 0xD8);
    v20 = TESDataHandler_g_PlayerRef;
    v21 = v18;
    v22 = *(void (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v19 + 0x374);
    *(_DWORD *)&v49.m_dataLen = v21;
    v22(v19, v20);
    *(_DWORD *)(a1 + 0xF8) += v21;
    *(_DWORD *)(a1 + 0xF4) = v21;
    ContainerChanges = (float *)ExtraDataList_GetContainerChanges(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
    sub_491700(ContainerChanges, st5_0, a4, (double)v21, (TESObjectREFR *)TESDataHandler_g_PlayerRef, v13, 0);
    v24 = TESDataHandler_LookupFormByID((TESForm *)0xF);
    (*(void (__thiscall **)(_DWORD, TESForm *, _DWORD, signed int))(**(_DWORD **)(a1 + 0xD8) + 0x114))(
      *(_DWORD *)(a1 + 0xD8),
      v24,
      0,
      v13);
    v25 = (TESTopic *)TESTopic::GEtTopic(3, 0x24);
    DialogueInfo = TESTopic::CreateDialogueInfo(
                     v25,
                     *(Actor **)(a1 + 0xD8),
                     (TESObjectREFR *)TESDataHandler_g_PlayerRef,
                     0,
                     0);
    v27 = DialogueInfo;
    if ( DialogueInfo )
    {
      sub_6B7BA0(DialogueInfo);
      v28 = (const char **)sub_6B7C20(v27);
      if ( v28 )
      {
        *(_BYTE *)(sub_5E12B0(*(Actor **)(a1 + 0xD8)) + 0x1DB) = 0;
        *(_DWORD *)(*(_DWORD *)(a1 + 0xD8) + 0x70) = 7;
        (*(void (__stdcall **)(float, const char **))(**(_DWORD **)(a1 + 0xD8) + 0x304))(flt_B33E9C, v28);
        if ( byte_B13200 )
        {
          v29 = *v28;
          a2c = flt_A30634;
          v30 = (*(int (__stdcall **)(_DWORD))(**(_DWORD **)(*(_DWORD *)(a1 + 0xD8) + 0x58) + 0x33C))(0);
          GameUI_QueueMessage(v29, v30, 0, a2c);
        }
      }
      sub_6B81D0(v27->unk00);
      FormHeapFree((unsigned int)v27);
    }
    sub_5BF170(a4, 1);
    sub_57DE50(0x23);
  }
  v49.m_data = 0;
  *(_DWORD *)&v49.m_dataLen = 0;
  v31 = *(_DWORD *)(a1 + 0xD8);
  v32 = *(int (__thiscall **)(int, PlayerCharacter *))(*(_DWORD *)v31 + 0x224);
  a2d = TESDataHandler_g_PlayerRef;
  v51 = 0;
  v33 = v32(v31, a2d);
  BSStringT_Static_Format(&v49, "%i", v33);
  m_data = v49.m_data;
  Tile_SetString(*(_DWORD **)(a1 + 0xCC), (_DWORD *)0xFDE, v49.m_data);
  if ( !sub_5BE870((int)m_data, a1) )
    Tile_SetFloat(*(Tile **)(a1 + 0xB8), (_DWORD *)0xFAF, 1.0);
  FormHeapFree((unsigned int)m_data);
}
