TESRace *__thiscall TESRace::GetRaceVoiceOverride(TESRace *this, int a2)
{
  TESRace *result; // eax

  result = this->voiceRaces[a2]; /*0x52b474*/
  if ( !result ) /*0x52b47d*/
    return this; /*0x52b47f*/
  return result; /*0x52b481*/
}
