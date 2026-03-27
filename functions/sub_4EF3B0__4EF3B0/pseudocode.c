CHAR *__thiscall sub_4EF3B0(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0x30);
  if ( !result )
    return EmptyString;
  return result;
}
