CHAR *__thiscall sub_4F99B0(_DWORD *this, int a2, int a3)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 4);
  if ( !result )
    return EmptyString;
  return result;
}
