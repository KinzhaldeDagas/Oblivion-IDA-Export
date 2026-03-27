char __userpurge sub_4AE220@<al>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st2>,
        double a4@<st1>,
        double a5@<st0>,
        _DWORD *a6,
        void *a7,
        int a8,
        int a9,
        int a10)
{
  PlayerCharacter *v11; // edi
  unsigned __int8 v12; // bl
  _DWORD *v13; // ebp
  void *v14; // eax
  Script *v15; // edi
  TESObjectREFR *v16; // ebx
  char *v17; // eax
  ExtraDataList *v18; // esi
  char *ExtraScript; // eax
  char **EventList; // eax
  char *v21; // eax
  char **ExtraScriptEventList; // eax
  PlayerCharacter *v23; // edi
  CHAR *v24; // eax
  char *m_data; // edi
  _DWORD *sound; // ecx
  int *v27; // eax
  int *v28; // esi
  float duration; // [esp+0h] [ebp-2Ch]
  float durationa; // [esp+0h] [ebp-2Ch]
  BSStringT string; // [esp+18h] [ebp-14h] BYREF
  int v33; // [esp+28h] [ebp-4h]
  TESObjectREFR *v34; // [esp+34h] [ebp+8h]

  v11 = (PlayerCharacter *)OblivionDynamicCast(
                             a7,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v34 = (TESObjectREFR *)v11;
  if ( a6 )
  {
    if ( v11 )
    {
      if ( (a6[2] & 0x2000) == 0
        && *(_DWORD *)(a1 - 8)
        && (v12 = *(_BYTE *)(sub_402DC0(&TimeGlobals) + a1 - 4)) != 0
        && GetRandomLargeInteger_(0) % 0x64 < v12 )
      {
        v13 = *(_DWORD **)(a1 - 8);
        v14 = OblivionDynamicCast(
                v13,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESScriptableForm `RTTI Type Descriptor',
                0);
        if ( v14 )
          v15 = *((Script **)v14 + 1);
        else
          v15 = 0;
        v16 = 0;
        if ( v15 )
        {
          v17 = (char *)FormHeapAlloc(0x14u);
          string.m_data = v17;
          v33 = 0;
          if ( v17 )
            v18 = (ExtraDataList *)ExtraDataList_constr(v17);
          else
            v18 = 0;
          v33 = 0xFFFFFFFF;
          ExtraDataList_SetExtraCount(v18, 1);
          if ( v18 )
          {
            if ( !ExtraDataList_GetExtraScript(v18) )
            {
              ExtraDataList_AddScript(v18, (int)v15);
              ExtraScript = (char *)ExtraDataList_GetExtraScript(v18);
              EventList = Script_CreateEventList(ExtraScript);
              ExtraDataList_SetScriptEventList(v18, (int)EventList);
              v21 = (char *)FormHeapAlloc(0x58u);
              string.m_data = v21;
              v33 = 1;
              if ( v21 )
                v16 = (TESObjectREFR *)TESObjectREFR_constr((TESChildCELL *)v21);
              v33 = 0xFFFFFFFF;
              ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v18);
              Script_Run(v15, a5, a4, v16, ExtraScriptEventList, 0, 0);
            }
          }
          v23 = (PlayerCharacter *)v34;
          ((void (__thiscall *)(TESObjectREFR *, _DWORD *, ExtraDataList *, int))v34->vtbl->AddItem)(v34, v13, v18, 1);
        }
        else
        {
          TESObjectREFR_AddItem_Abbrev(v34, (int)v13, 0, 1);
          v23 = (PlayerCharacter *)v34;
        }
        if ( v23 == TESDataHandler_g_PlayerRef )
        {
          string.m_data = 0;
          string.m_dataLen = 0;
          string.m_bufLen = 0;
          v24 = (CHAR *)v13[0xA];
          v33 = 2;
          if ( !v24 )
            v24 = EmptyString;
          BSStringT_Static_Format(&string, sFloraSuccessMessage, v24);
          __asm { fld     dword ptr ds:0A31E2Ch }
          m_data = string.m_data;
          __asm { fstp    [esp+34h+duration]; duration }
          GameUI_QueueMessage(string.m_data, 0, 1u, duration);
          sound = OSGlobals->sound;
          if ( sound )
          {
            v27 = PlaySound___(sound, "ITMPickupOrganic", 0x121, 1);
            v28 = v27;
            if ( v27 )
            {
              sub_6B7190(v27, 0);
              sub_6B73E0(v28);
              FormHeapFree((unsigned int)v28);
            }
          }
          v33 = 0xFFFFFFFF;
          FormHeapFree((unsigned int)m_data);
        }
      }
      else if ( v11 == TESDataHandler_g_PlayerRef )
      {
        __asm { fld     dword ptr ds:0A31E2Ch }
        __asm { fstp    [esp+2Ch+duration]; duration }
        GameUI_QueueMessage((const char *)sFloraFailureMessage, 0, 1u, durationa);
        sub_57DE50(0x1E);
      }
      sub_46AA00(a6, 1);
    }
  }
  return 1;
}
