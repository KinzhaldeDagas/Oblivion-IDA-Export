double **__thiscall sub_4FA910(char *this)
{
  int *v2; // eax
  int *v3; // ebp
  char *v4; // ebx
  int v5; // edi
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int *v9; // edi
  bool v10; // zf
  int *v11; // eax

  v2 = (int *)FormHeapAlloc(8u);
  if ( v2 )
  {
    *v2 = 0;
    v2[1] = 0;
    v3 = v2;
  }
  else
  {
    v3 = 0;
  }
  v4 = this + 0x48;
  if ( this != (char *)0xFFFFFFB8 )
  {
    do
    {
      v5 = *(_DWORD *)v4;
      if ( !*(_DWORD *)v4 )
        break;
      v4 = *((char **)v4 + 1);
      v6 = FormHeapAlloc(0x18u);
      v7 = v6;
      if ( v6 )
      {
        *(_BYTE *)(v6 + 0x10) = *(_BYTE *)(v5 + 0x10);
        *(_DWORD *)v6 = *(_DWORD *)v5;
        v8 = (int)(v3 + 1);
        *(double *)(v7 + 8) = *(double *)(v5 + 8);
        v9 = v3;
        if ( v3[1] )
        {
          do
          {
            v9 = *(int **)v8;
            v10 = *(_DWORD *)(*(_DWORD *)v8 + 4) == 0;
            v8 = *(_DWORD *)v8 + 4;
          }
          while ( !v10 );
        }
        if ( *v9 )
        {
          v11 = (int *)FormHeapAlloc(8u);
          if ( v11 )
          {
            *v11 = v7;
            v11[1] = 0;
            v9[1] = (int)v11;
          }
          else
          {
            v9[1] = 0;
          }
        }
        else
        {
          *v9 = v7;
        }
      }
    }
    while ( v4 );
  }
  return (double **)v3;
}
