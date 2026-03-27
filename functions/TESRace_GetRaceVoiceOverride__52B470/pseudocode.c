TESRace *__thiscall TESRace::GetRaceVoiceOverride(TESRace *this, int a2)
{
  TESRace *result; // eax

  result = this->voiceRaces[a2];
  if ( !result )
    return this;
  return result;
}
