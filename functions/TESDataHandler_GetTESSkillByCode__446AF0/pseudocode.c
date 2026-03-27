char *__thiscall TESDataHandler_GetTESSkillByCode(char *this, char a2)
{
  if ( (unsigned __int8)a2 > 0x14u )
    return 0;
  else
    return this + 0x60 * a2 + 0xD8;
}
