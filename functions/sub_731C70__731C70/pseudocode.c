void __cdecl sub_731C70(unsigned int **a1, int a2)
{
  int v2; // ecx
  unsigned int v3; // eax
  int v4; // edx
  _DWORD *v5; // edx
  unsigned int *v6; // eax
  unsigned int v7; // esi
  unsigned int v8; // [esp-4h] [ebp-8h]

  v2 = *(_DWORD *)(a2 + 0xB0); /*0x731c74*/
  v3 = (unsigned int)*a1; /*0x731c7f*/
  if ( *a1 ) /*0x731c7f*/
  {
    v4 = *(_DWORD *)(*(_DWORD *)(v3 + 4) + 0xB0); /*0x731c88*/
    if ( v2 >= v4 ) /*0x731c90*/
    {
      if ( v2 == v4 ) /*0x731c92*/
      {
        v8 = (unsigned int)*a1; /*0x731c96*/
        *a1 = *(unsigned int **)v3; /*0x731c97*/
        FormHeapFree(v8); /*0x731c99*/
      }
      else
      {
        v5 = *a1; /*0x731ca3*/
        v6 = *(unsigned int **)v3; /*0x731ca5*/
        if ( v6 ) /*0x731ca9*/
        {
          while ( 1 ) /*0x731cb0*/
          {
            v7 = v6[1]; /*0x731cb0*/
            if ( v2 <= *(_DWORD *)(v7 + 0xB0) ) /*0x731cb9*/
              break; /*0x731cb9*/
            v5 = v6; /*0x731cbb*/
            v6 = (unsigned int *)*v6; /*0x731cbd*/
            if ( !v6 ) /*0x731cc1*/
              return; /*0x731cc1*/
          }
          if ( v2 == *(_DWORD *)(v7 + 0xB0) ) /*0x731cc5*/
          {
            *v5 = *v6; /*0x731cca*/
            FormHeapFree((unsigned int)v6); /*0x731ccc*/
          }
        }
      }
    }
  }
}
