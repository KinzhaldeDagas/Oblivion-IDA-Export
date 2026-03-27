CHAR *__thiscall sub_4F9630(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 6);
  if ( !result )
    return EmptyString;
  return result;
}
