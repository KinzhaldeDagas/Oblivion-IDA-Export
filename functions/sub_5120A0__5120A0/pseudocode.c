void __cdecl sub_5120A0(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a8)
{
  UInt32 **v11; // ebx
  UInt32 *v12; // esi
  TESForm *v13; // edi
  const unsigned __int8 *LogText; // eax
  unsigned __int16 *v15; // edi
  _DWORD *v16; // eax
  const char *v17; // ebp
  unsigned __int16 Day; // ax
  const char *v19; // esi
  size_t v20; // [esp-4h] [ebp-128h]
  int Year; // [esp-4h] [ebp-128h]
  UInt32 *a3[2]; // [esp+10h] [ebp-114h] BYREF
  UInt16 v23[2]; // [esp+18h] [ebp-10Ch] BYREF
  unsigned __int8 v24[260]; // [esp+1Ch] [ebp-108h] BYREF

  a3[0] = a8;
  *(_DWORD *)v23 = 0;
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v23) )
  {
    a3[0] = 0;
    a3[1] = 0;
    sub_52A8A0((int)a3, a3, 0, *(_DWORD *)v23 != 0, 0);
    v11 = a3;
    do
    {
      if ( !*v11 )
        break;
      v12 = *v11;
      v13 = (TESForm *)(*v11)[0x1A];
      v11 = (UInt32 **)v11[1];
      _memset(v24, 0, sizeof(v24));
      LogText = (const unsigned __int8 *)QuestStageItem_GetLogText(v12, v13);
      LODWORD(v20) = 0x103;
      _mbsnbcpy(v24, LogText, v20);
      v15 = (unsigned __int16 *)v12[0x19];
      Interface_ConsolePrint("------------------------------------------------");
      v16 = *(_DWORD **)(4 * QuestStageItem_GetMonth(v15) + 0xB06FA4);
      v17 = v16 ? (const char *)*v16 : 0;
      Year = (unsigned __int16)QuestStageItem_GetYear(v15);
      Day = QuestStageItem_GetDay(v15);
      Interface_ConsolePrint("%d of %s, %d", Day, v17, Year);
      v19 = *(const char **)(v12[0x1A] + 0x34);
      if ( !v19 )
        v19 = EmptyString;
      Interface_ConsolePrint("%s", v19);
      Interface_ConsolePrint("%s", (const char *)v24);
    }
    while ( v11 );
  }
}
