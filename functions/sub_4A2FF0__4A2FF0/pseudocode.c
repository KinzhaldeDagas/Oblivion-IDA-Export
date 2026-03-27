int sub_4A2FF0()
{
  int v0; // ecx
  _DWORD *v1; // eax

  v0 = 0;
  v1 = (_DWORD *)(*(_DWORD *)(TESDataHandler + 0xBC) + 4);
  if ( *(_DWORD *)(TESDataHandler + 0xBC) != 0xFFFFFFFC )
  {
    do
    {
      if ( *v1 )
        ++v0;
      v1 = (_DWORD *)v1[1];
    }
    while ( v1 );
  }
  return 8 * v0 + 2;
}
