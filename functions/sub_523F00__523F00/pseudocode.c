const char *__thiscall sub_523F00(int this)
{
  unsigned int v1; // eax
  const char *result; // eax

  LOWORD(v1) = *(_WORD *)(this + 8);
  if ( (_WORD)v1 == 0xFFFF )
    v1 = strlen(*(const char **)(this + 4));
  else
    v1 = (unsigned __int16)v1;
  if ( !v1 )
    return "Characters\\_Male\\skeleton.nif";
  result = *(const char **)(this + 4);
  if ( !result )
    return EmptyString;
  return result;
}
