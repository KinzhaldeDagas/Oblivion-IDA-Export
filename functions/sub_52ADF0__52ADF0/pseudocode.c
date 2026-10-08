void __usercall sub_52ADF0(int a1@<ecx>, double a2@<st2>, double a3@<st1>, double GameDay@<st0>)
{
  int v5; // eax
  unsigned __int16 *v6; // edi
  char v7; // al
  unsigned __int16 *v8; // eax
  bool v9; // zf
  TESQuest *v10; // ecx
  int v11; // esi
  char **ExtraScriptEventList; // eax
  unsigned __int16 GameMonth; // [esp-8h] [ebp-24h]
  unsigned __int16 GameYear; // [esp-4h] [ebp-20h]

  if ( *(_DWORD *)(a1 + 0x64) && (v5 = *(_DWORD *)(a1 + 0x68)) != 0 && (*(_BYTE *)(v5 + 0x3C) & 8) == 0 ) /*0x52ae26*/
  {
    PrintError("Trying to resolve a quest stage item that already has a log date."); /*0x52ae2d*/
  }
  else if ( ConditionList_EvaluateForActor((unsigned __int8 **)(a1 + 4), (Actor *)reference, 0) ) /*0x52ae52*/
  {
    v6 = (unsigned __int16 *)FormHeapAlloc(4u); /*0x52ae66*/
    if ( v6 ) /*0x52ae79*/
    {
      GameYear = TimeGlobals_GetGameYear(&MEMORY[0xB332E0]); /*0x52ae85*/
      GameMonth = TimeGlobals_GetGameMonth(&MEMORY[0xB332E0]); /*0x52ae90*/
      GameDay = TimeGlobals_GetGameDay(&MEMORY[0xB332E0]); /*0x52ae96*/
      v8 = sub_47D390(v6, v7, GameMonth, GameYear); /*0x52aea2*/
    }
    else
    {
      v8 = 0; /*0x52aea9*/
    }
    v9 = (*(_BYTE *)a1 & 1) == 0; /*0x52aeab*/
    *(_DWORD *)(a1 + 0x64) = v8; /*0x52aeb6*/
    if ( !v9 ) /*0x52aeb9*/
    {
      v10 = *(TESQuest **)(a1 + 0x68); /*0x52aebb*/
      if ( v10 ) /*0x52aec0*/
      {
        TESQuest::SetCompleted(v10, 1); /*0x52aec4*/
        if ( *(TESQuest **)(a1 + 0x68) == reference->activeQuest ) /*0x52aed8*/
          GameDay = sub_660450(reference, GameDay, 0); /*0x52aedc*/
      }
    }
    if ( *(_BYTE *)(a1 + 0x61) ) /*0x52aee1*/
      sub_6697A0((char *)reference, a2, a3, GameDay, a1); /*0x52aeee*/
    v11 = a1 + 0xC; /*0x52aef3*/
    if ( sub_4F9FA0() ) /*0x52aef6*/
    {
      if ( v11 ) /*0x52af01*/
      {
        if ( *(_DWORD *)(v11 + 0x20) ) /*0x52af03*/
        {
          *(_BYTE *)(v11 + 0x28) = 0; /*0x52af09*/
          ExtraScriptEventList = (char **)ExtraDataList_GetExtraScriptEventList(&reference->super.super.super.super.baseExtraList); /*0x52af1a*/
          Script_Run((Script *)v11, GameDay, a3, (TESObjectREFR *)reference, ExtraScriptEventList, 0, 1); /*0x52af28*/
        }
      }
    }
  }
}
