int __cdecl EffectSettingCollection_Comparator(int a1, int a2)
{
  const char *v2; // ecx
  const char *v3; // eax

  v2 = *(const char **)(a2 + 0x3C);
  if ( !v2 )
    v2 = EmptyString;
  v3 = *(const char **)(a1 + 0x3C);
  if ( !v3 )
    v3 = EmptyString;
  return strcmp(v3, v2);
}
