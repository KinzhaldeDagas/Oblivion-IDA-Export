const char **__thiscall sub_7073F0(const char **this, const char *a2)
{
  const char *v2; // edx

  if ( !a2 )
    return 0;
  v2 = *(this + 2);
  if ( !v2 )
    return 0;
  if ( !strcmp(a2, v2) )
    return this;
  return 0;
}
