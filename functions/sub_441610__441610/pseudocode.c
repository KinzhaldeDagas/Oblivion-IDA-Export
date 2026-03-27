void __thiscall sub_441610(_DWORD *this)
{
  void *v2; // ecx
  unsigned int v3; // eax
  unsigned int i; // ebx
  unsigned int j; // esi
  GridEntry *GridEntry; // eax

  v2 = (void *)*(this + 0xD);
  if ( v2 )
  {
    sub_4CB9E0(v2, this + 0x20);
  }
  else
  {
    v3 = uGridsToLoad;
    for ( i = 0; i < v3; ++i )
    {
      for ( j = 0; j < v3; ++j )
      {
        GridEntry = GetGridEntry((GridCellArray *)*(this + 2), i, j);
        sub_4CB9E0(GridEntry->cell, this + 0x20);
        v3 = uGridsToLoad;
      }
    }
  }
}
