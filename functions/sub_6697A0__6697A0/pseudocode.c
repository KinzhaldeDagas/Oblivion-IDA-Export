char __userpurge sub_6697A0@<al>(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  char *m_data; // ebp
  _DWORD *v7; // ecx
  char v8; // bl
  int *v9; // edx
  int v10; // eax
  bool v11; // zf
  const char *v12; // eax
  const char *v13; // eax
  char *v14; // edi
  char *v15; // ebp
  const char *v16; // eax
  int v17; // ecx
  TESQuest *activeQuest; // edx
  unsigned int v19; // ecx
  char *v20; // eax
  unsigned int v21; // edi
  TESForm *v22; // ecx
  unsigned int v23; // edi
  int v24; // edi
  TESForm *v25; // ecx
  char *v26; // ecx
  int v27; // [esp+8h] [ebp-254h]
  char v28; // [esp+23h] [ebp-239h]
  BSStringT v29; // [esp+24h] [ebp-238h] BYREF
  BSStringT v30; // [esp+2Ch] [ebp-230h] BYREF
  BSStringT v31; // [esp+34h] [ebp-228h] BYREF
  BSStringT v32; // [esp+3Ch] [ebp-220h] BYREF
  char v33[260]; // [esp+44h] [ebp-218h] BYREF
  char v34[260]; // [esp+148h] [ebp-114h] BYREF
  int v35; // [esp+258h] [ebp-4h]

  m_data = a1;
  v29.m_data = a1;
  if ( !a5 )
    return 0;
  v7 = a1 + 0x5EC;
  v8 = 0;
  v9 = (int *)(m_data + 0x5EC);
  v28 = 0;
  if ( m_data != (char *)0xFFFFFA14 )
  {
    do
    {
      v10 = *v9;
      if ( !*v9 )
        break;
      v9 = (int *)v9[1];
      if ( v10 == a5 )
      {
        if ( (*(_BYTE *)(*(_DWORD *)(v10 + 0x68) + 0x3C) & 8) == 0 )
          return 0;
        m_data = v29.m_data;
      }
      if ( *(_DWORD *)(v10 + 0x68) == *(_DWORD *)(a5 + 0x68) )
        v28 = 1;
    }
    while ( v9 );
    v8 = v28;
  }
  BSSimpleList_PushFront(v7, a5);
  if ( sub_4F9FA0() )
  {
    if ( sub_5790E0(0x3F1, 0) )
    {
      v30.m_data = 0;
      v30.m_dataLen = 0;
      v30.m_bufLen = 0;
      v35 = 0;
      v29.m_data = 0;
      v29.m_dataLen = 0;
      v29.m_bufLen = 0;
      BSStringT_Set(&v29, EmptyString, 0);
      v11 = (*(_BYTE *)a5 & 1) == 0;
      v12 = *(const char **)(*(_DWORD *)(a5 + 0x68) + 0x34);
      LOBYTE(v35) = 1;
      if ( v11 )
      {
        if ( v8 )
        {
          if ( !v12 )
            v12 = EmptyString;
          BSStringT_Static_Format(&v30, "%s: %s", *(const char **)sQuestUpdatedText, v12);
          BSStringT_Set(&v29, "UIQuestUpdate", 0);
        }
        else
        {
          if ( !v12 )
            v12 = EmptyString;
          BSStringT_Static_Format(&v30, "%s: %s", *(const char **)dword_B382C8, v12);
          BSStringT_Set(&v29, "UIQuestNew", 0);
          if ( !TESDataHandler_g_PlayerRef->activeQuest )
            a4 = sub_660450(m_data, a4, (char *)*(_DWORD *)(a5 + 0x68));
        }
      }
      else
      {
        if ( !v12 )
          v12 = EmptyString;
        BSStringT_Static_Format(&v30, "%s: %s", *(const char **)dword_B382D0, v12);
        BSStringT_Set(&v29, "UIQuestUpdate", 0);
        a4 = sub_660450(m_data, a4, 0);
      }
      v13 = *(const char **)(*(_DWORD *)(a5 + 0x68) + 0x28);
      if ( !v13 )
        v13 = EmptyString;
      _sprintf(v33, "%s", v13);
      v34[0] = 0;
      if ( v33[0] )
        _sprintf(v34, "%s\\%s", "Icons", v33);
      v14 = v29.m_data;
      a3 = flt_A31C80;
      v15 = v30.m_data;
      QueueUIMessage((char)v30.m_data, a4, a3, v30.m_data, flt_A31C80, (int)v34, (int)v29.m_data);
      FormHeapFree((unsigned int)v14);
      v35 = 0xFFFFFFFF;
      FormHeapFree((unsigned int)v15);
    }
    if ( !sub_5790E0(0x3F1, 0) || !InterfaceManager_MenuModeHasFocus(0) && !InterfaceManager_MenuModeHasFocus(0x3F1) )
    {
      if ( (*(_BYTE *)a5 & 1) != 0 || v8 )
        sub_57DE50(0xA);
      else
        sub_57DE50(9);
      v16 = *(const char **)(*(_DWORD *)(a5 + 0x68) + 0x28);
      if ( !v16 )
        v16 = EmptyString;
      _sprintf(v34, "%s", v16);
      v33[0] = 0;
      if ( v34[0] )
        _sprintf(v33, "%s\\%s", "Icons", v34);
      v17 = *(_DWORD *)(a5 + 0x68);
      activeQuest = TESDataHandler_g_PlayerRef->activeQuest;
      if ( activeQuest )
      {
        if ( (TESQuest *)v17 != activeQuest && (*(_BYTE *)(v17 + 0x3C) & 2) == 0 )
        {
          v31.m_data = 0;
          v31.m_dataLen = 0;
          v31.m_bufLen = 0;
          v27 = *(_DWORD *)(v17 + 0xC);
          v35 = 2;
          BSStringT_Static_Format(&v31, "%u", v27);
          if ( v8 )
            v29.m_data = *(char **)sQuestUpdatedText;
          else
            v29.m_data = *(char **)dword_B382C8;
          sub_47D400(*(unsigned __int16 **)(a5 + 0x64), &v32);
          v19 = *(_DWORD *)(a5 + 0x68);
          v20 = *(char **)(v19 + 0x34);
          LOBYTE(v35) = 3;
          v30.m_data = v20;
          if ( !v20 )
            v30.m_data = EmptyString;
          v21 = v19;
          QuestStageItem_GetLogText((void *)a5, (TESForm *)v19);
          sub_57B370(v29.m_data, a2, a3, a4, "quest_added.xml", (unsigned int)sub_665220, 1, v21, 2, (char)v29.m_data);
          LOBYTE(v35) = 2;
          BSStringT_Clear((unsigned int *)&v32);
          v35 = 0xFFFFFFFF;
          BSStringT_Clear((unsigned int *)&v31);
          return 1;
        }
        if ( (*(_BYTE *)(v17 + 0x3C) & 2) == 0 )
        {
          v24 = *(_DWORD *)sQuestUpdatedText;
          if ( !v8 )
            v24 = *(_DWORD *)dword_B382C8;
          goto LABEL_61;
        }
      }
      else if ( (*(_BYTE *)(v17 + 0x3C) & 2) == 0 )
      {
        if ( v8 )
          v29.m_data = *(char **)sQuestUpdatedText;
        else
          v29.m_data = *(char **)dword_B382C8;
        sub_47D400(*(unsigned __int16 **)(a5 + 0x64), &v32);
        v22 = *(TESForm **)(a5 + 0x68);
        v35 = 4;
        v23 = (unsigned int)v22;
        QuestStageItem_GetLogText((void *)a5, v22);
        sub_57B370(v29.m_data, a2, a3, a4, "quest_added.xml", (unsigned int)sub_665240, 1, v23, 2, (char)v29.m_data);
        v35 = 0xFFFFFFFF;
        BSStringT_Clear((unsigned int *)&v32);
        return 1;
      }
      v24 = *(_DWORD *)dword_B382D0;
LABEL_61:
      sub_47D400(*(unsigned __int16 **)(a5 + 0x64), &v29);
      v25 = *(TESForm **)(a5 + 0x68);
      v35 = 5;
      QuestStageItem_GetLogText((void *)a5, v25);
      sub_57B370(v26, a2, a3, a4, "quest_added.xml", 0, 1, 0, 2, v24);
      FormHeapFree((unsigned int)v29.m_data);
    }
  }
  return 1;
}
