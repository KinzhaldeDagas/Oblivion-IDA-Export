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

  v1 = *((_UNKNOWN ***)Memory + 0x2F);
  if ( v1 )
  {
    if ( v1 != &off_B30DB4 )
    {
      v2 = *((_DWORD **)Memory + 0x2C);
      if ( v2 )
      {
        if ( !*v2 )
        {
          v3 = *((_DWORD **)Memory + 0x2E);
          if ( v3 )
          {
            if ( !*v3 )
            {
              free(*((void **)Memory + 0x2E));
              __free_lconv_mon(*((_DWORD *)Memory + 0x2F));
            }
          }
          v4 = *((_DWORD **)Memory + 0x2D);
          if ( v4 )
          {
            if ( !*v4 )
            {
              free(*((void **)Memory + 0x2D));
              __free_lconv_num(*((_DWORD *)Memory + 0x2F));
            }
          }
          free(*((void **)Memory + 0x2C));
          free(*((void **)Memory + 0x2F));
        }
      }
    }
  }
  v5 = *((_DWORD **)Memory + 0x30);
  if ( v5 )
  {
    if ( !*v5 )
    {
      free((void *)(*((_DWORD *)Memory + 0x31) - 0xFE));
      free((void *)(*((_DWORD *)Memory + 0x33) - 0x80));
      free((void *)(*((_DWORD *)Memory + 0x34) - 0x80));
      free(*((void **)Memory + 0x30));
    }
  }
  v6 = *((_DWORD *)Memory + 0x35);
  if ( (_UNKNOWN **)v6 != off_B31EF0 && !*(_DWORD *)(v6 + 0xB4) )
  {
    _free_lc_time(*((_DWORD *)Memory + 0x35));
    free(*((void **)Memory + 0x35));
  }
  v7 = (void **)(Memory + 0x50);
  v8 = 6;
  do
  {
    if ( v7[0xFFFFFFFE] != "C" )
    {
      if ( *v7 )
      {
        if ( !*(_DWORD *)*v7 )
          free(*v7);
      }
    }
    if ( v7[0xFFFFFFFF] )
    {
      v9 = v7[1];
      if ( v9 )
      {
        if ( !*v9 )
          free(v7[1]);
      }
    }
    v7 += 4;
    --v8;
  }
  while ( v8 );
  free(Memory);
}
