unsigned int *__userpurge Menu_CreateTileFromTemplate@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        TileWindow *a5,
        char *Str2,
        int a7)
{
  char ***v7; // edi
  char **v8; // esi
  int v10; // ebp
  int *v11; // eax
  int *v12; // edi
  unsigned int *v13; // ebx
  unsigned int *v14; // edi
  unsigned int v15; // esi

  if ( a7 )
    *(this + 4) = a7;
  v7 = (char ***)(this + 2);
  if ( this == (_DWORD *)0xFFFFFFF8 )
    return 0;
  do
  {
    v8 = *v7;
    if ( *v7 )
    {
      if ( !(Str2 && *v8 ? _strcmp(*v8, Str2) : 2 * (Str2 == 0) - 1) )
        break;
    }
    v7 = (char ***)v7[1];
  }
  while ( v7 );
  if ( !v8 )
    return 0;
  v10 = dword_B3B0A8;
  v11 = (int *)FormHeapAlloc(0x14u);
  v12 = 0;
  if ( v11 )
    v12 = sub_58CD30(v11);
  dword_B3B0A8 = (int)v12;
  v13 = (unsigned int *)*v12;
  if ( *v12 )
  {
    sub_5852C0(v13);
    FormHeapFree((unsigned int)v13);
  }
  *v12 = (int)v8;
  v14 = sub_590330(a5, (int)v8);
  sub_58CF40(st5_0, a3, st7_0, (int)v8);
  *(_DWORD *)dword_B3B0A8 = 0;
  v15 = dword_B3B0A8;
  if ( dword_B3B0A8 )
  {
    sub_58CDB0((unsigned int **)dword_B3B0A8);
    FormHeapFree(v15);
  }
  dword_B3B0A8 = v10;
  return v14;
}
