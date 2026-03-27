void __thiscall TESSpellList_SaveComponent(int *this)
{
  int *v2; // esi
  int v3; // eax
  int *v4; // esi
  int v5; // eax

  v2 = this + 1;
  if ( this != (int *)0xFFFFFFFC )
  {
    do
    {
      v3 = *v2;
      if ( !*v2 )
        break;
      if ( (*(_DWORD *)(v3 + 8) & 0x20) == 0 )
        TESForm_PutCurrentChunkData4(0x4F4C5053, *(_DWORD *)(v3 + 0xC));
      v2 = (int *)v2[1];
    }
    while ( v2 );
  }
  v4 = this + 3;
  if ( this != (int *)0xFFFFFFF4 )
  {
    do
    {
      v5 = *v4;
      if ( !*v4 )
        break;
      if ( (*(_DWORD *)(v5 + 8) & 0x20) == 0 )
        TESForm_PutCurrentChunkData4(0x4F4C5053, *(_DWORD *)(v5 + 0xC));
      v4 = (int *)v4[1];
    }
    while ( v4 );
  }
}
