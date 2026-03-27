CHAR *__thiscall sub_4EDD90(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 9);
  if ( !result )
    return EmptyString;
  return result;
}
