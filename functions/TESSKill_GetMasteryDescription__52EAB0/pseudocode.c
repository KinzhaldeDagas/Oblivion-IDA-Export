CHAR *__thiscall TESSKill_GetMasteryDescription(_DWORD *this, int a2)
{
  if ( !a2 )
    return (CHAR *)sNoviceSkillLevelText;
  if ( a2 - 1 >= 4 )
    return EmptyString;
  return (CHAR *)(*(int (__thiscall **)(_DWORD *, _DWORD *, _DWORD))(*(this + 2 * a2 + 0xE) + 0x10))(
                   this + 2 * a2 + 0xE,
                   this,
                   *(_DWORD *)(4 * a2 + 0xB10D7C));
}
