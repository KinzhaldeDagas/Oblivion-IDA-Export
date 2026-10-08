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

  v18 = 0; /*0x52e43d*/
  v19 = 0; /*0x52e441*/
  v20 = 0; /*0x52e446*/
  v21 = 1; /*0x52e44b*/
  v17.m_data = 0; /*0x52e44f*/
  v17.m_dataLen = 0; /*0x52e453*/
  v17.m_bufLen = 0; /*0x52e458*/
  CreateDialogueFileName(this, a3, a4, a5, &v17, 0); /*0x52e477*/
  v7 = (Actor *)OblivionDynamicCast( /*0x52e492*/
                  a2,
                  0,
                  (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                  &Actor `RTTI Type Descriptor',
                  0);
  if ( !v7 ) /*0x52e499*/
    goto LABEL_5; /*0x52e499*/
  OverrideFile = TESForm_GetOverrideFile(a5, 0xFFFFFFFF); /*0x52e4bc*/
  v25 = OverrideFile; /*0x52e4c1*/
  v9 = TESForm_GetOverrideFile(a5, 0); /*0x52e4c5*/
  v22 = v9; /*0x52e4cc*/
  if ( !OverrideFile ) /*0x52e4d0*/
  {
    v25 = v9; /*0x52e4d4*/
    if ( !v9 ) /*0x52e4d8*/
    {
LABEL_5:
      FormHeapFree((unsigned int)v17.m_data); /*0x52e4da*/
      FormHeapFree(0); /*0x52e4e5*/
      return; /*0x52e4ed*/
    }
    OverrideFile = v9; /*0x52e4f2*/
  }
  IsFemale = Actor_IsFemale(v7); /*0x52e501*/
  RaceIfNPC = Actor::GetRaceIfNPC(v7); /*0x52e503*/
  if ( !RaceIfNPC ) /*0x52e50a*/
    goto LABEL_5; /*0x52e50a*/
  RaceVoiceOverride = TESRace::GetRaceVoiceOverride(RaceIfNPC, IsFemale); /*0x52e527*/
  if ( !RaceVoiceOverride ) /*0x52e52e*/
    goto LABEL_5; /*0x52e52e*/
  raceName = RaceVoiceOverride->name.name.m_data; /*0x52e539*/
  if ( !raceName ) /*0x52e53d*/
    raceName = EmptyString; /*0x52e53f*/
  if ( raceName ) /*0x52e54b*/
  {
    name = OverrideFile->name; /*0x52e55a*/
    if ( OverrideFile != (Data *)0xFFFFFFE4 || (v25 = v22, name = v22->name, v22 != (Data *)0xFFFFFFE4) ) /*0x52e571*/
    {
      v13 = Actor_IsFemale(v7); /*0x52e579*/
      if ( v13 ) /*0x52e580*/
      {
        if ( v13 == 1 ) /*0x52e585*/
          sex = "F"; /*0x52e58e*/
        else
          sex = EmptyString; /*0x52e587*/
      }
      else
      {
        sex = "M"; /*0x52e595*/
      }
      v15 = mp3String[0]; /*0x52e59a*/
      m_data = v17.m_data; /*0x52e5a0*/
      if ( !BSStringT::SetDialogueAndFindFile( /*0x52e5f9*/
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
        BSStringT::SetDialogueAndFindFile(a6, "Data\\Sound\\Voice", (UInt32 *)v22->name, raceName, sex, m_data, v15);// create path with first master. EDIT: Is this either the first or the last? /*0x52e612*/
      }
    }
  }
  LOBYTE(v21) = 0; /*0x52e61f*/
  BSStringT_Clear((unsigned int *)&v17); /*0x52e623*/
  v21 = 0xFFFFFFFF; /*0x52e62c*/
  BSStringT_Clear(&v18); /*0x52e634*/
}
