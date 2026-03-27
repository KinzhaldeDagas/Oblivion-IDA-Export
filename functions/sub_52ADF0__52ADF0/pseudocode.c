void __usercall sub_52ADF0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double GameDay@<st0>)
{
  int v5; // eax
  unsigned __int16 *v6; // edi
  char v7; // al
  unsigned __int16 *v8; // eax
  bool v9; // zf
  _BYTE *v10; // ecx
  TESQuest *v11; // edx
  int v12; // esi
  char **ExtraScriptEventList; // eax
  unsigned __int16 GameMonth; // [esp-8h] [ebp-24h]
  unsigned __int16 GameYear; // [esp-4h] [ebp-20h]

  if ( *(_DWORD *)(a1 + 0x64) && (v5 = *(_DWORD *)(a1 + 0x68)) != 0 && (*(_BYTE *)(v5 + 0x3C) & 8) == 0 )
  {
    PrintError("Trying to resolve a quest stage item that already has a log date.");
  }
  else if ( sub_56A950((unsigned __int8 **)(a1 + 4), (int)TESDataHandler_g_PlayerRef, 0) )
  {
    v6 = (unsigned __int16 *)FormHeapAlloc(4u);
    if ( v6 )
    {
      GameYear = TimeGlobals_GetGameYear(&TimeGlobals);
      GameMonth = TimeGlobals_GetGameMonth(&TimeGlobals);
      GameDay = TimeGlobals_GetGameDay(&TimeGlobals);
      v8 = sub_47D390(v6, v7, GameMonth, GameYear);
    }
    else
    {
      v8 = 0;
    }
    v9 = (*(_BYTE *)a1 & 1) == 0;
    *(_DWORD *)(a1 + 0x64) = v8;
    if ( !v9 )
    {
      v10 = *(_BYTE **)(a1 + 0x68);
      if ( v10 )
      {
        Quest_CompleteQuest(v10, 1);
        v11 = *(TESQuest **)(a1 + 0x68);
        if ( v11 == TESDataHandler_g_PlayerRef->activeQuest )
          sub_660450(TESDataHandler_g_PlayerRef, GameDay, (int)v11, 0);
      }
    }
    if ( *(_BYTE *)(a1 + 0x61) )
      sub_6697A0((int)TESDataHandler_g_PlayerRef, a2, a3, a1);
    v12 = a1 + 0xC;
    if ( sub_4F9FA0() )
    {
      if ( v12 )
      {
        if ( *(_DWORD *)(v12 + 0x20) )
        {
          *(_BYTE *)(v12 + 0x28) = 0;
          ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
          Script_Run(
            (Script *)v12,
            GameDay,
            a3,
            (TESObjectREFR *)TESDataHandler_g_PlayerRef,
            ExtraScriptEventList,
            0,
            1);
        }
      }
    }
  }
}
