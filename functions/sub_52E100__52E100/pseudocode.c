// ?what@runtime_error@@UBEPBDXZ
// doubtful name
CHAR *__thiscall sub_52E100(_DWORD *this)
{
  CHAR *result; // eax

  result = (CHAR *)*(this + 4);
  if ( !result )
    return EmptyString;
  return result;
}
