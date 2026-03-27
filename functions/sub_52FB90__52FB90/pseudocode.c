CHAR *__thiscall sub_52FB90(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0xD);
  if ( !result )
    return EmptyString;
  return result;
}
