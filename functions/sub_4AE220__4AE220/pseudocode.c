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
  int *sound; // ecx
  int *v27; // eax
  int *v28; // esi
  float duration; // [esp+0h] [ebp-2Ch]
  float durationa; // [esp+0h] [ebp-2Ch]
  BSStringT string; // [esp+18h] [ebp-14h] BYREF
  int v33; // [esp+28h] [ebp-4h]
  TESObjectREFR *v34; // [esp+34h] [ebp+8h]

  v11 = (PlayerCharacter *)OblivionDynamicCast( /*0x4ae261*/
                             a7,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                             &Actor `RTTI Type Descriptor',
                             0);
  v34 = (TESObjectREFR *)v11; /*0x4ae26c*/
  if ( a6 ) /*0x4ae270*/
  {
    if ( v11 ) /*0x4ae278*/
    {
      if ( (a6[2] & 0x2000) == 0 /*0x4ae2c4*/
        && *(_DWORD *)(a1 - 8)
        && (v12 = *(_BYTE *)(TimeGlobals_GetSeasonIndex(&MEMORY[0xB332E0]) + a1 - 4)) != 0
        && Game_RandomLargeInteger(0) % 0x64 < v12 )
      {
        v13 = *(_DWORD **)(a1 - 8); /*0x4ae2ca*/
        v14 = OblivionDynamicCast( /*0x4ae2dc*/
                v13,
                0,
                (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                &TESScriptableForm `RTTI Type Descriptor',
                0);
        if ( v14 ) /*0x4ae2e6*/
          v15 = *((Script **)v14 + 1); /*0x4ae2e8*/
        else
          v15 = 0; /*0x4ae2ed*/
        v16 = 0; /*0x4ae2ef*/
        if ( v15 ) /*0x4ae2f3*/
        {
          v17 = (char *)FormHeapAlloc(0x14u); /*0x4ae2fb*/
          string.m_data = v17; /*0x4ae303*/
          v33 = 0; /*0x4ae309*/
          if ( v17 ) /*0x4ae30d*/
            v18 = (ExtraDataList *)ExtraDataList_constr(v17); /*0x4ae316*/
          else
            v18 = 0; /*0x4ae31a*/
          v33 = 0xFFFFFFFF; /*0x4ae320*/
          ExtraDataList_SetExtraCount(v18, 1); /*0x4ae328*/
          if ( v18 ) /*0x4ae32f*/
          {
            if ( !ExtraDataList_GetExtraScript(v18) ) /*0x4ae333*/
            {
              ExtraDataList_AddScript(v18, (int)v15); /*0x4ae33f*/
              ExtraScript = (char *)ExtraDataList_GetExtraScript(v18); /*0x4ae346*/
              EventList = Script_CreateEventList(ExtraScript); /*0x4ae34d*/
              ExtraDataList_SetScriptEventList(v18, (int)EventList); /*0x4ae355*/
              v21 = (char *)FormHeapAlloc(0x58u); /*0x4ae35c*/
              string.m_data = v21; /*0x4ae364*/
              v33 = 1; /*0x4ae36a*/
              if ( v21 ) /*0x4ae372*/
                v16 = (TESObjectREFR *)TESObjectREFR_constr((TESChildCELL *)v21); /*0x4ae37b*/
              v33 = 0xFFFFFFFF; /*0x4ae383*/
              ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(v18); /*0x4ae38b*/
              Script_Run(v15, a5, a4, v16, ExtraScriptEventList, 0, 0); /*0x4ae394*/
            }
          }
          v23 = (PlayerCharacter *)v34; /*0x4ae39b*/
          ((void (__thiscall *)(TESObjectREFR *, _DWORD *, ExtraDataList *, int))v34->vtbl->AddItem)(v34, v13, v18, 1); /*0x4ae3ad*/
        }
        else
        {
          TESObjectREFR_AddItem_Abbrev(v34, (int)v13, 0, 1); /*0x4ae3b9*/
          v23 = (PlayerCharacter *)v34; /*0x4ae3be*/
        }
        if ( v23 == reference ) /*0x4ae3c8*/
        {
          string.m_data = 0; /*0x4ae3ce*/
          string.m_dataLen = 0; /*0x4ae3d2*/
          string.m_bufLen = 0; /*0x4ae3d7*/
          v24 = (CHAR *)v13[0xA]; /*0x4ae3dc*/
          v33 = 2; /*0x4ae3e1*/
          if ( !v24 ) /*0x4ae3e9*/
            v24 = EmptyString; /*0x4ae3eb*/
          BSStringT_Static_Format(&string, MEMORY[0xB35820], v24); /*0x4ae3fd*/
          __asm { fld     dword ptr ds:0A31E2Ch } /*0x4ae402*/
          m_data = string.m_data; /*0x4ae408*/
          __asm { fstp    [esp+34h+duration]; duration } /*0x4ae40c*/
          GameUI_QueueMessage(string.m_data, 0, 1u, duration); /*0x4ae417*/
          sound = (int *)MEMORY[0xB33398]->sound; /*0x4ae421*/
          if ( sound ) /*0x4ae429*/
          {
            v27 = PlaySound___(sound, "ITMPickupOrganic", 0x121, 1); /*0x4ae437*/
            v28 = v27; /*0x4ae43c*/
            if ( v27 ) /*0x4ae440*/
            {
              sub_6B7190(v27, 0); /*0x4ae445*/
              sub_6B73E0(v28); /*0x4ae44c*/
              FormHeapFree((unsigned int)v28); /*0x4ae452*/
            }
          }
          v33 = 0xFFFFFFFF; /*0x4ae45b*/
          FormHeapFree((unsigned int)m_data); /*0x4ae463*/
        }
      }
      else if ( v11 == reference ) /*0x4ae473*/
      {
        __asm { fld     dword ptr ds:0A31E2Ch } /*0x4ae475*/
        __asm { fstp    [esp+2Ch+duration]; duration }
        GameUI_QueueMessage((const char *)MEMORY[0xB35828], 0, 1u, durationa); /*0x4ae48a*/
        sub_57DE50(0x1E); /*0x4ae491*/
      }
      sub_46AA00(a6, 1); /*0x4ae49f*/
    }
  }
  return 1; /*0x4ae4a6*/
}
