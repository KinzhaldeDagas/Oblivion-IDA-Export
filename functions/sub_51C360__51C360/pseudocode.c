unsigned int __thiscall sub_51C360(const char **this)
{
  const char *v1; // eax
  const char *v2; // ecx
  int v3; // eax

  v1 = *(this + 7);
  if ( !v1 )
    v1 = EmptyString;
  v2 = *(this + 0xC);
  v3 = (unsigned __int16)(strlen(v1) + 0x35) + 1;
  if ( !v2 )
    v2 = EmptyString;
  return strlen(v2) + v3;
}
