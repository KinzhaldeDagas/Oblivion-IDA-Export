void __cdecl sub_6F94E0(int *a1)
{
  int v1; // edx
  int v2; // eax
  int v3; // edi
  unsigned int v4; // esi

  if ( a1 )
  {
    v1 = *a1;
    *((_WORD *)a1 + 0xC) = a1[6] & 0xFFE9 | 6;
    v2 = (*(int (**)(void))(v1 + 8))();
    v3 = v2;
    if ( v2 )
    {
      v4 = 0;
      if ( *(_WORD *)(v2 + 0xB6) )
      {
        do
          sub_6F94E0(*(int **)(*(_DWORD *)(v3 + 0xB0) + 4 * v4++));
        while ( *(unsigned __int16 *)(v3 + 0xB6) > v4 );
      }
    }
  }
}
