int __cdecl ArchiveManager_GetFileTypemask(char *a1)
{
  char *v1; // eax
  int v2; // ebx
  int v3; // ebp
  unsigned int v4; // esi
  int v5; // edi
  int v6; // eax

  v1 = a1;
  v2 = 0;
  v3 = 0x18;
  if ( *a1 == 0x2E )
  {
    v1 = ++a1;
  }
  else if ( a1[1] == 0x2E )
  {
    v1 = a1 + 2;
    a1 += 2;
  }
  while ( 1 )
  {
    v4 = (unsigned int)(v3 - v2) >> 1;
    v5 = v4 + v2;
    v6 = _strcmp(v1, (char *)(8 * (v4 + v2) + 0xB04368));
    if ( v6 <= 0 )
    {
      if ( v6 >= 0 )
        break;
      v3 = v4 + v2;
    }
    else
    {
      v2 += v4;
    }
    if ( !v4 )
      break;
    v1 = a1;
  }
  if ( v6 )
    return 0x100;
  else
    return dword_B0436C[2 * v5];
}
