CHAR *__thiscall sub_4AF3F0(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 0xA);
  if ( !result )
    return EmptyString;
  return result;
}
