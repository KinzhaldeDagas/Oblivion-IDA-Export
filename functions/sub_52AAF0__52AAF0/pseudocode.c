CHAR *__thiscall sub_52AAF0(TESQuest *this)
{
  CHAR *result; // eax

  result = *((CHAR **)this + 0x18);
  if ( !result )
    return EmptyString;
  return result;
}
