// Return a mastery-specific SKIL description. Novice uses the shared novice text; Apprentice through Master use the four descriptions stored at TESSkill+0x40..+0x58; invalid ranks return empty.
const char *__thiscall TESSkill_GetMasteryDescription(TESSkill *this, SkillMasteryLevel mastery)
{
  if ( mastery == kSkillMastery_Novice ) /*0x52eab6*/
    return (const char *)dword_B361CC[0xCD]; /*0x52eab8*/
  if ( mastery - 1 >= 4 ) /*0x52eac6*/
    return EmptyString; /*0x52eae3*/
  return (const char *)(*(int (__thiscall **)(char *, TESSkill *, _DWORD))(*((_DWORD *)this + 2 * mastery + 0xE) + 0x10))( /*0x52eabd*/
                         (char *)this + 8 * mastery + 0x38,
                         this,
                         *(_DWORD *)(4 * mastery + 0xB10D7C));
}
