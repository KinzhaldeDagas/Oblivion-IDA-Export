char __userpurge sub_6697A0@<al>(char *a1@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, int a5)
{
  char *m_data; // ebp
  char *v7; // ecx
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
  const char *value; // edi
  TESForm *v25; // ecx
  char *v26; // ecx
  float v27; // [esp+0h] [ebp-25Ch]
  int v28; // [esp+8h] [ebp-254h]
  char v29; // [esp+23h] [ebp-239h]
  BSStringT v30; // [esp+24h] [ebp-238h] BYREF
  BSStringT v31; // [esp+2Ch] [ebp-230h] BYREF
  BSStringT v32; // [esp+34h] [ebp-228h] BYREF
  BSStringT v33; // [esp+3Ch] [ebp-220h] BYREF
  char v34[260]; // [esp+44h] [ebp-218h] BYREF
  char v35[260]; // [esp+148h] [ebp-114h] BYREF
  int v36; // [esp+258h] [ebp-4h]

  m_data = a1; /*0x6697e6*/
  v30.m_data = a1; /*0x6697e8*/
  if ( !a5 ) /*0x6697ec*/
    return 0; /*0x6697f0*/
  v7 = a1 + 0x5EC; /*0x6697f5*/
  v8 = 0; /*0x6697fb*/
  v9 = (int *)(m_data + 0x5EC); /*0x6697fd*/
  v29 = 0; /*0x669801*/
  if ( m_data != (char *)0xFFFFFA14 ) /*0x669805*/
  {
    do /*0x66983a*/
    {
      v10 = *v9; /*0x669810*/
      if ( !*v9 ) /*0x669810*/
        break; /*0x669814*/
      v9 = (int *)v9[1]; /*0x669818*/
      if ( v10 == a5 ) /*0x66981b*/
      {
        if ( (*(_BYTE *)(*(_DWORD *)(v10 + 0x68) + 0x3C) & 8) == 0 ) /*0x669823*/
          return 0; /*0x669823*/
        m_data = v30.m_data; /*0x669825*/
      }
      if ( *(_DWORD *)(v10 + 0x68) == *(_DWORD *)(a5 + 0x68) ) /*0x66982f*/
        v29 = 1; /*0x669831*/
    }
    while ( v9 ); /*0x66983a*/
    v8 = v29; /*0x66983c*/
  }
  BSSimpleList_PushFront(v7, a5); /*0x669841*/
  if ( sub_4F9FA0() )
  {
    if ( InterfaceManager_IsMenuVisibleByID(0x3F1, 0) )
    {
      v31.m_data = 0; /*0x669869*/
      v31.m_dataLen = 0; /*0x66986d*/
      v31.m_bufLen = 0; /*0x669872*/
      v36 = 0; /*0x669881*/
      v30.m_data = 0; /*0x669888*/
      v30.m_dataLen = 0; /*0x66988c*/
      v30.m_bufLen = 0; /*0x669891*/
      BSStringT_Set(&v30, EmptyString, 0); /*0x669896*/
      v11 = (*(_BYTE *)a5 & 1) == 0; /*0x66989b*/
      v12 = *(const char **)(*(_DWORD *)(a5 + 0x68) + 0x34); /*0x6698a1*/
      LOBYTE(v36) = 1; /*0x6698a4*/
      if ( v11 )
      {
        if ( v8 )
        {
          if ( !v12 ) /*0x66993f*/
            v12 = EmptyString; /*0x669941*/
          BSStringT_Static_Format(&v31, "%s: %s", MEMORY[0xB382D8].value, v12);
          BSStringT_Set(&v30, "UIQuestUpdate", 0); /*0x66996a*/
        }
        else
        {
          if ( !v12 ) /*0x6698f2*/
            v12 = EmptyString; /*0x6698f4*/
          BSStringT_Static_Format(&v31, "%s: %s", stru_B382C8.value, v12);
          BSStringT_Set(&v30, "UIQuestNew", 0); /*0x66991d*/
          if ( !reference->activeQuest ) /*0x669928*/
            a4 = sub_660450(m_data, a4, (char *)*(_DWORD *)(a5 + 0x68)); /*0x669936*/
        }
      }
      else
      {
        if ( !v12 ) /*0x6698b0*/
          v12 = EmptyString; /*0x6698b2*/
        BSStringT_Static_Format(&v31, "%s: %s", stru_B382D0.value, v12);
        BSStringT_Set(&v30, "UIQuestUpdate", 0); /*0x6698da*/
        a4 = sub_660450(m_data, a4, 0); /*0x6698e2*/
      }
      v13 = *(const char **)(*(_DWORD *)(a5 + 0x68) + 0x28); /*0x669972*/
      if ( !v13 ) /*0x669977*/
        v13 = EmptyString; /*0x669979*/
      _sprintf(v34, "%s", v13); /*0x669989*/
      v35[0] = 0; /*0x669996*/
      if ( v34[0] ) /*0x66999e*/
        _sprintf(v35, "%s\\%s", "Icons", v34); /*0x6699b7*/
      v14 = v30.m_data; /*0x6699bf*/
      __asm { fld     dword ptr ds:0A31C80h } /*0x6699c3*/
      v15 = v31.m_data; /*0x6699c9*/
      __asm { fstp    [esp+25Ch+var_25C]; float } /*0x6699d7*/
      QueueUIMessage(a4, a3, v31.m_data, v27, v35, v30.m_data); /*0x6699db*/
      FormHeapFree((unsigned int)v14); /*0x6699e1*/
      v36 = 0xFFFFFFFF; /*0x6699e7*/
      FormHeapFree((unsigned int)v15); /*0x6699f2*/
    }
    if ( !InterfaceManager_IsMenuVisibleByID(0x3F1, 0) /*0x669a24*/
      || !InterfaceManager_MenuModeHasFocus(0) && !InterfaceManager_MenuModeHasFocus(0x3F1) )
    {
      if ( (*(_BYTE *)a5 & 1) != 0 || v8 ) /*0x669a3b*/
        sub_57DE50(0xA); /*0x669a43*/
      else
        sub_57DE50(9); /*0x669a3f*/
      v16 = *(const char **)(*(_DWORD *)(a5 + 0x68) + 0x28); /*0x669a4b*/
      if ( !v16 ) /*0x669a53*/
        v16 = EmptyString; /*0x669a55*/
      _sprintf(v35, "%s", v16); /*0x669a68*/
      v34[0] = 0; /*0x669a78*/
      if ( v35[0] ) /*0x669a7d*/
        _sprintf(v34, "%s\\%s", "Icons", v35); /*0x669a96*/
      v17 = *(_DWORD *)(a5 + 0x68); /*0x669a9e*/
      activeQuest = reference->activeQuest; /*0x669aaa*/
      if ( activeQuest ) /*0x669ab6*/
      {
        if ( (TESQuest *)v17 != activeQuest && (*(_BYTE *)(v17 + 0x3C) & 2) == 0 ) /*0x669ac6*/
        {
          v32.m_data = 0; /*0x669acc*/
          v32.m_dataLen = 0; /*0x669ad0*/
          v32.m_bufLen = 0; /*0x669ad5*/
          v28 = *(_DWORD *)(v17 + 0xC); /*0x669add*/
          v36 = 2; /*0x669ae8*/
          BSStringT_Static_Format(&v32, "%u", v28); /*0x669af3*/
          if ( v8 ) /*0x669afd*/
            v30.m_data = (char *)MEMORY[0xB382D8].value; /*0x669b05*/
          else
            v30.m_data = (char *)stru_B382C8.value; /*0x669b11*/
          sub_47D400(*(unsigned __int16 **)(a5 + 0x64), &v33); /*0x669b1d*/
          v19 = *(_DWORD *)(a5 + 0x68); /*0x669b22*/
          v20 = *(char **)(v19 + 0x34); /*0x669b27*/
          LOBYTE(v36) = 3; /*0x669b38*/
          v31.m_data = v20; /*0x669b40*/
          if ( !v20 ) /*0x669b44*/
            v31.m_data = EmptyString; /*0x669b46*/
          v21 = v19; /*0x669b61*/
          QuestStageItem_GetLogText((void *)a5, (TESForm *)v19); /*0x669b66*/
          sub_57B370(v30.m_data, a2, a4, "quest_added.xml", (unsigned int)sub_665220, 1, v21, 2, (char)v30.m_data); /*0x669b8c*/
          LOBYTE(v36) = 2; /*0x669b98*/
          BSStringT_Clear((unsigned int *)&v33); /*0x669ba0*/
          v36 = 0xFFFFFFFF; /*0x669ba9*/
          BSStringT_Clear((unsigned int *)&v32); /*0x669bb4*/
          return 1; /*0x669bb9*/
        }
        if ( (*(_BYTE *)(v17 + 0x3C) & 2) == 0 ) /*0x669c72*/
        {
          value = MEMORY[0xB382D8].value; /*0x669c7e*/
          if ( !v8 ) /*0x669c84*/
            value = stru_B382C8.value; /*0x669c86*/
          goto LABEL_61; /*0x669c86*/
        }
      }
      else if ( (*(_BYTE *)(v17 + 0x3C) & 2) == 0 ) /*0x669bc8*/
      {
        if ( v8 ) /*0x669bd0*/
          v30.m_data = (char *)MEMORY[0xB382D8].value; /*0x669bd8*/
        else
          v30.m_data = (char *)stru_B382C8.value; /*0x669be3*/
        sub_47D400(*(unsigned __int16 **)(a5 + 0x64), &v33); /*0x669bef*/
        v22 = *(TESForm **)(a5 + 0x68); /*0x669bf4*/
        v36 = 4; /*0x669c04*/
        v23 = (unsigned int)v22; /*0x669c28*/
        QuestStageItem_GetLogText((void *)a5, v22); /*0x669c2d*/
        sub_57B370(v30.m_data, a2, a4, "quest_added.xml", (unsigned int)sub_665240, 1, v23, 2, (char)v30.m_data); /*0x669c4f*/
        v36 = 0xFFFFFFFF; /*0x669c5b*/
        BSStringT_Clear((unsigned int *)&v33); /*0x669c66*/
        return 1; /*0x669c6b*/
      }
      value = stru_B382D0.value; /*0x669c74*/
LABEL_61:
      sub_47D400(*(unsigned __int16 **)(a5 + 0x64), &v30); /*0x669c8c*/
      v25 = *(TESForm **)(a5 + 0x68); /*0x669c99*/
      v36 = 5; /*0x669ca9*/
      QuestStageItem_GetLogText((void *)a5, v25); /*0x669cd0*/
      sub_57B370(v26, a2, a4, "quest_added.xml", 0, 1, 0, 2, (char)value); /*0x669cec*/
      FormHeapFree((unsigned int)v30.m_data); /*0x669cf6*/
    }
  }
  return 1; /*0x669d00*/
}
