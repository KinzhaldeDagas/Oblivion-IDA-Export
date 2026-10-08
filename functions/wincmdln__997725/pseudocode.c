CHAR *_wincmdln()
{
  BOOL v0; // edi
  CHAR *v1; // esi
  unsigned __int8 v2; // al

  v0 = 0; /*0x997727*/
  if ( !unk_BABC14 ) /*0x99772f*/
    __initmbctable(); /*0x997731*/
  v1 = (CHAR *)unk_BABC04; /*0x997736*/
  if ( !unk_BABC04 ) /*0x99773e*/
    v1 = EmptyString; /*0x997740*/
  while ( 1 ) /*0x997745*/
  {
    v2 = *v1; /*0x997745*/
    if ( (unsigned __int8)*v1 <= 0x20u ) /*0x997749*/
    {
      if ( !v2 ) /*0x99774d*/
        return v1; /*0x99774d*/
      if ( !v0 ) /*0x997751*/
        break; /*0x997751*/
    }
    if ( v2 == 0x22 ) /*0x997755*/
      v0 = !v0; /*0x99775e*/
    if ( _ismbblead(v2) ) /*0x997764*/
      ++v1; /*0x99776e*/
    ++v1; /*0x99776f*/
  }
  while ( *v1 && (unsigned __int8)*v1 <= 0x20u ) /*0x997774*/
    ++v1; /*0x997776*/
  return v1; /*0x99777d*/
}
