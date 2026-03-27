bool __thiscall sub_517B20(char **this, char **a2)
{
  char *v2; // ecx

  if ( *a2 && (v2 = *this) != 0 )
    return _strcmp(v2, *a2) != 0;
  else
    return 2 * (*a2 == 0) != 1;
}
