void __cdecl __freetlocinfo(char *Memory)
{
  _UNKNOWN **v1; // eax
  _DWORD *v2; // eax
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  int v6; // eax
  void **v7; // edi
  int v8; // ebx
  _DWORD *v9; // eax

  v1 = *((_UNKNOWN ***)Memory + 0x2F); /*0x989f0c*/
  if ( v1 ) /*0x989f17*/
  {
    if ( v1 != &off_B30DB4 ) /*0x989f1e*/
    {
      v2 = *((_DWORD **)Memory + 0x2C); /*0x989f20*/
      if ( v2 ) /*0x989f28*/
      {
        if ( !*v2 ) /*0x989f2a*/
        {
          v3 = *((_DWORD **)Memory + 0x2E); /*0x989f2e*/
          if ( v3 ) /*0x989f36*/
          {
            if ( !*v3 ) /*0x989f38*/
            {
              free(*((void **)Memory + 0x2E)); /*0x989f3d*/
              __free_lconv_mon(*((_DWORD *)Memory + 0x2F)); /*0x989f48*/
            }
          }
          v4 = *((_DWORD **)Memory + 0x2D); /*0x989f4f*/
          if ( v4 ) /*0x989f57*/
          {
            if ( !*v4 ) /*0x989f59*/
            {
              free(*((void **)Memory + 0x2D)); /*0x989f5e*/
              __free_lconv_num(*((_DWORD *)Memory + 0x2F)); /*0x989f69*/
            }
          }
          free(*((void **)Memory + 0x2C)); /*0x989f76*/
          free(*((void **)Memory + 0x2F)); /*0x989f81*/
        }
      }
    }
  }
  v5 = *((_DWORD **)Memory + 0x30); /*0x989f88*/
  if ( v5 ) /*0x989f90*/
  {
    if ( !*v5 ) /*0x989f92*/
    {
      free((void *)(*((_DWORD *)Memory + 0x31) - 0xFE)); /*0x989fa2*/
      free((void *)(*((_DWORD *)Memory + 0x33) - 0x80)); /*0x989fb5*/
      free((void *)(*((_DWORD *)Memory + 0x34) - 0x80)); /*0x989fc3*/
      free(*((void **)Memory + 0x30)); /*0x989fce*/
    }
  }
  v6 = *((_DWORD *)Memory + 0x35); /*0x989fdc*/
  if ( (_UNKNOWN **)v6 != off_B31EF0 && !*(_DWORD *)(v6 + 0xB4) ) /*0x989fe5*/
  {
    _free_lc_time(*((void ***)Memory + 0x35)); /*0x989fee*/
    free(*((void **)Memory + 0x35)); /*0x989ff5*/
  }
  v7 = (void **)(Memory + 0x50); /*0x989ffe*/
  v8 = 6; /*0x98a001*/
  do /*0x98a037*/
  {
    if ( v7[0xFFFFFFFE] != "C" ) /*0x98a009*/
    {
      if ( *v7 ) /*0x98a00b*/
      {
        if ( !*(_DWORD *)*v7 ) /*0x98a011*/
          free(*v7); /*0x98a016*/
      }
    }
    if ( v7[0xFFFFFFFF] ) /*0x98a01c*/
    {
      v9 = v7[1]; /*0x98a021*/
      if ( v9 ) /*0x98a026*/
      {
        if ( !*v9 ) /*0x98a028*/
          free(v7[1]); /*0x98a02d*/
      }
    }
    v7 += 4; /*0x98a033*/
    --v8; /*0x98a036*/
  }
  while ( v8 ); /*0x98a037*/
  free(Memory); /*0x98a03a*/
}
