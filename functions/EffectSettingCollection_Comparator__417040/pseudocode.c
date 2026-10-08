int __cdecl EffectSettingCollection_Comparator(int a1, int a2)
{
  const char *v2; // ecx
  const char *v3; // eax

  v2 = *(const char **)(a2 + 0x3C); /*0x417049*/
  if ( !v2 ) /*0x41704b*/
    v2 = EmptyString; /*0x41704d*/
  v3 = *(const char **)(a1 + 0x3C); /*0x417056*/
  if ( !v3 ) /*0x41705b*/
    v3 = EmptyString; /*0x41705d*/
  return strcmp(v3, v2); /*0x417080*/
}
