CHAR *__thiscall sub_4F1A60(CHAR **this)
{
  int v1; // eax
  CHAR *result; // eax
  bool v3; // zf
  CHAR *v4; // ecx

  v1 = (int)*(this + 0x1F);
  if ( v1 )
  {
    result = *(CHAR **)(v1 + 0x28);
    v3 = result == 0;
  }
  else
  {
    v4 = *(this + 0xA);
    v3 = v4 == 0;
    result = v4;
  }
  if ( v3 )
    return EmptyString;
  return result;
}
