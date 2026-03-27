char *__cdecl sub_9510E0(char *a1, unsigned __int16 **a2, unsigned __int16 **a3, _BYTE *a4, _BYTE *a5, _BYTE *a6)
{
  int v6; // ecx
  int v7; // ebp
  int v8; // edi
  int v9; // esi
  int v10; // ebx
  int v11; // eax
  char v12; // dl

  v6 = *a2[4];
  v7 = *a2[5];
  v8 = *a2[6];
  v9 = *a3[4];
  v10 = *a3[5];
  v11 = *a3[6];
  v12 = 1;
  if ( v6 == v9 )
  {
    if ( v7 == v10 || v7 == v11 )
    {
      if ( *a4 )
        v12 = 0;
      *a4 = 1;
    }
    if ( v8 == v10 || v8 == v11 )
    {
      if ( *a5 )
        v12 = 0;
      *a5 = 1;
    }
  }
  if ( v6 == v10 )
  {
    if ( v7 == v11 )
    {
      if ( *a4 )
        v12 = 0;
      *a4 = 1;
    }
    if ( v8 == v11 )
    {
      if ( *a5 )
        v12 = 0;
      *a5 = 1;
    }
  }
  if ( v7 == v9 && (v8 == v10 || v8 == v11) || v7 == v10 && v8 == v11 )
  {
    if ( *a6 )
      v12 = 0;
    *a6 = 1;
  }
  *a1 = v12;
  return a1;
}
