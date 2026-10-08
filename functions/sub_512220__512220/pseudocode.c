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
  UInt32 **v8; // ebx
  UInt32 *v9; // esi
  TESForm *v10; // edi
  char *LogText; // eax
  unsigned __int16 *v12; // edi
  _DWORD *v13; // eax
  const char *v14; // ebp
  unsigned __int16 Day; // ax
  const char *v16; // esi
  size_t v17; // [esp-4h] [ebp-128h]
  int Year; // [esp-4h] [ebp-128h]
  UInt32 *a3[2]; // [esp+10h] [ebp-114h] BYREF
  UInt16 v20[2]; // [esp+18h] [ebp-10Ch] BYREF
  unsigned __int8 v21[260]; // [esp+1Ch] [ebp-108h] BYREF

  a3[0] = a8; /*0x512269*/
  *(_DWORD *)v20 = 0; /*0x51227d*/
  if ( Script_ExtractArgs(a1, a2, a8, a4, argC, a5, l, v20) )
  {
    a3[0] = 0; /*0x512299*/
    a3[1] = 0; /*0x51229d*/
    sub_52A8A0(a3, *(TESForm **)v20, 0, 0); /*0x5122ab*/
    v8 = a3; /*0x5122b3*/
    do
    {
      if ( !*v8 ) /*0x5122b7*/
        break; /*0x5122ba*/
      v9 = *v8; /*0x5122c0*/
      v10 = (TESForm *)(*v8)[0x1A]; /*0x5122c2*/
      v8 = (UInt32 **)v8[1]; /*0x5122c5*/
      _memset((int)v21, 0, sizeof(v21)); /*0x5122d4*/
      LogText = QuestStageItem_GetLogText(v9, v10); /*0x5122df*/
      LODWORD(v17) = 0x103; /*0x5122e4*/
      _mbsnbcpy(v21, (const unsigned __int8 *)LogText, v17); /*0x5122ef*/
      v12 = (unsigned __int16 *)v9[0x19]; /*0x5122f4*/
      Interface_ConsolePrint("------------------------------------------------"); /*0x5122fc*/
      v13 = *(_DWORD **)(4 * QuestStageItem_GetMonth(v12) + 0xB06FA4); /*0x51230b*/
      v14 = v13 ? (const char *)*v13 : 0;
      Year = (unsigned __int16)QuestStageItem_GetYear(v12); /*0x512326*/
      Day = QuestStageItem_GetDay(v12); /*0x51232a*/
      Interface_ConsolePrint("%d of %s, %d", Day, v14, Year); /*0x512338*/
      v16 = *(const char **)(v9[0x1A] + 0x34); /*0x512343*/
      if ( !v16 ) /*0x51234b*/
        v16 = EmptyString; /*0x51234d*/
      Interface_ConsolePrint("%s", v16); /*0x512358*/
      Interface_ConsolePrint("%s", (const char *)v21); /*0x512367*/
    }
    while ( v8 );
  }
}
