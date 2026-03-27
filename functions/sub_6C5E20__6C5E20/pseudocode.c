char __thiscall sub_6C5E20(const char **this, const char *a2, _DWORD *a3)
{
  const char *v3; // ebp
  unsigned int v4; // eax

  *a3 = 0;
  v3 = *(this + 2);
  if ( !*(this + 4) )
    return 0;
  while ( strcmp(v3, a2) )
  {
    v4 = strlen(v3) + 1;
    *a3 += v4;
    v3 += v4;
    if ( *a3 >= (unsigned int)*(this + 4) )
      return 0;
  }
  return 1;
}
