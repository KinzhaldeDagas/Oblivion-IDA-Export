void __cdecl sub_512220(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  int v11; // edx
  UInt32 **v12; // ebx
  UInt32 *v13; // esi
  TESForm *v14; // edi
  const unsigned __int8 *LogText; // eax
  unsigned __int16 *v16; // edi
  _DWORD *v17; // eax
  const char *v18; // ebp
  unsigned __int16 Day; // ax
  const char *v20; // esi
  size_t v21; // [esp-4h] [ebp-128h]
  int Year; // [esp-4h] [ebp-128h]
  UInt32 *a3[2]; // [esp+10h] [ebp-114h] BYREF
  UInt16 v24[2]; // [esp+18h] [ebp-10Ch] BYREF
  unsigned __int8 v25[260]; // [esp+1Ch] [ebp-108h] BYREF

  a3[0] = a8;
  *(_DWORD *)v24 = 0;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v24) )
  {
    a3[0] = 0;
    a3[1] = 0;
    sub_52A8A0(v11, a3, *(TESForm **)v24, 0, 0);
    v12 = a3;
    do
    {
      if ( !*v12 )
        break;
      v13 = *v12;
      v14 = (TESForm *)(*v12)[0x1A];
      v12 = (UInt32 **)v12[1];
      _memset(v25, 0, sizeof(v25));
      LogText = (const unsigned __int8 *)QuestStageItem_GetLogText(v13, v14);
      LODWORD(v21) = 0x103;
      _mbsnbcpy(v25, LogText, v21);
      v16 = (unsigned __int16 *)v13[0x19];
      Interface_ConsolePrint("------------------------------------------------");
      v17 = *(_DWORD **)(4 * QuestStageItem_GetMonth(v16) + 0xB06FA4);
      v18 = v17 ? (const char *)*v17 : 0;
      Year = (unsigned __int16)QuestStageItem_GetYear(v16);
      Day = QuestStageItem_GetDay(v16);
      Interface_ConsolePrint("%d of %s, %d", Day, v18, Year);
      v20 = *(const char **)(v13[0x1A] + 0x34);
      if ( !v20 )
        v20 = EmptyString;
      Interface_ConsolePrint("%s", v20);
      Interface_ConsolePrint("%s", (const char *)v25);
    }
    while ( v12 );
  }
}
