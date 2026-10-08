void _mtterm_::__mtdeletelocks()
{
  LPCRITICAL_SECTION *v0; // esi
  LPCRITICAL_SECTION v1; // edi
  LPCRITICAL_SECTION *v2; // esi

  v0 = &lpCriticalSection; /*0x98c8ae*/
  do /*0x98c8d6*/
  {
    v1 = *v0; /*0x98c8b4*/
    if ( *v0 ) /*0x98c8b4*/
    {
      if ( v0[1] != (LPCRITICAL_SECTION)1 ) /*0x98c8be*/
      {
        DeleteCriticalSection(*v0); /*0x98c8c1*/
        free(v1); /*0x98c8c4*/
        *v0 = 0; /*0x98c8c9*/
      }
    }
    v0 += 2; /*0x98c8cd*/
  }
  while ( (int)v0 < (int)dword_B311E0 ); /*0x98c8d6*/
  v2 = &lpCriticalSection; /*0x98c8d8*/
  do /*0x98c8f6*/
  {
    if ( *v2 ) /*0x98c8de*/
    {
      if ( v2[1] == (LPCRITICAL_SECTION)1 ) /*0x98c8e8*/
        DeleteCriticalSection(*v2); /*0x98c8eb*/
    }
    v2 += 2; /*0x98c8ed*/
  }
  while ( (int)v2 < (int)dword_B311E0 ); /*0x98c8f6*/
}
