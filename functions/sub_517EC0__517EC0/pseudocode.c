CHAR *__thiscall sub_517EC0(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0xC);
  if ( !result )
    return EmptyString;
  return result;
}
