char sub_4C9300()
{
  char v0; // bl
  int v1; // esi

  v0 = 0;
  v1 = TESDataHandler + 0x4C;
  if ( TESDataHandler != 0xFFFFFFB4 )
  {
    do
    {
      if ( !*(_DWORD *)(v1 + 4) && !*(_DWORD *)v1 )
        break;
      if ( sub_4C9230(*(int **)v1) )
        v0 = 1;
      v1 = *(_DWORD *)(v1 + 4);
    }
    while ( v1 );
  }
  return v0;
}
