void __thiscall GenerateVoiceAudioString(
        unsigned __int8 *this,
        TESObjectREFR *a2,
        TESQuest *a3,
        TESTopic *a4,
        TESForm *a5,                            // TESTopic?
        BSStringT *a6)
{
  Actor *v7; // edi
  Data *OverrideFile; // ebp
  Data *v9; // eax
  UINT32 IsFemale; // esi
  TESRace *RaceIfNPC; // eax
  TESRace *RaceVoiceOverride; // eax
  UINT32 v13; // eax
  char *sex; // edi
  char *v15; // esi
  char *m_data; // ebp
  BSStringT v17; // [esp+18h] [ebp-1Ch] BYREF
  unsigned int v18; // [esp+20h] [ebp-14h] BYREF
  __int16 v19; // [esp+24h] [ebp-10h]
  __int16 v20; // [esp+26h] [ebp-Eh]
  int v21; // [esp+30h] [ebp-4h]
  Data *v22; // [esp+38h] [ebp+4h]
  char *name; // [esp+3Ch] [ebp+8h]
  CHAR *raceName; // [esp+40h] [ebp+Ch]
  Data *v25; // [esp+44h] [ebp+10h]

  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 1;
  v17.m_data = 0;
  v17.m_dataLen = 0;
  v17.m_bufLen = 0;
  CreateDialogueFileName(this, a3, a4, a5, &v17, 0);
  v7 = (Actor *)OblivionDynamicCast(
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( !v7 )
    goto LABEL_5;
  OverrideFile = TESForm_GetOverrideFile(a5, 0xFFFFFFFF);
  v25 = OverrideFile;
  v9 = TESForm_GetOverrideFile(a5, 0);
  v22 = v9;
  if ( !OverrideFile )
  {
    v25 = v9;
    if ( !v9 )
    {
LABEL_5:
      FormHeapFree((unsigned int)v17.m_data);
      FormHeapFree(0);
      return;
    }
    OverrideFile = v9;
  }
  IsFemale = Actor_IsFemale(v7);
  RaceIfNPC = Actor::GetRaceIfNPC(v7);
  if ( !RaceIfNPC )
    goto LABEL_5;
  RaceVoiceOverride = TESRace::GetRaceVoiceOverride(RaceIfNPC, IsFemale);
  if ( !RaceVoiceOverride )
    goto LABEL_5;
  raceName = RaceVoiceOverride->name.name.m_data;
  if ( !raceName )
    raceName = EmptyString;
  if ( raceName )
  {
    name = OverrideFile->name;
    if ( OverrideFile != (Data *)0xFFFFFFE4 || (v25 = v22, name = v22->name, v22 != (Data *)0xFFFFFFE4) )
    {
      v13 = Actor_IsFemale(v7);
      if ( v13 )
      {
        if ( v13 == 1 )
          sex = "F";
        else
          sex = EmptyString;
      }
      else
      {
        sex = "M";
      }
      v15 = mp3String[0];
      m_data = v17.m_data;
      if ( !BSStringT::SetDialogueAndFindFile(
              a6,
              "Data\\Sound\\Voice",
              (UInt32 *)name,
              raceName,                         // create the path with the last override in the modlist
              sex,
              v17.m_data,
              mp3String[0])
        && v25 != v22
        && v22 != (Data *)0xFFFFFFE4 )
      {
        BSStringT::SetDialogueAndFindFile(a6, "Data\\Sound\\Voice", (UInt32 *)v22->name, raceName, sex, m_data, v15);// create path with first master. EDIT: Is this either the first or the last?
      }
    }
  }
  LOBYTE(v21) = 0;
  BSStringT_Clear((unsigned int *)&v17);
  v21 = 0xFFFFFFFF;
  BSStringT_Clear(&v18);
}
