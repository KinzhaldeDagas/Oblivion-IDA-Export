void __usercall sub_4416F0(_DWORD *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>)
{
  _BYTE *v5; // ecx
  unsigned int v6; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx

  if ( TESDataHandler )
  {
    v5 = (_BYTE *)*(this + 0xD);
    if ( v5 )
    {
      if ( v5[0x26] == 6 )
        sub_4CD090(v5, (char)this, a2, a3, a4);
    }
    v6 = uGridsToLoad;
    for ( i = 0; i < v6; ++i )
    {
      for ( j = 0; j < v6; ++j )
      {
        cell = GetGridEntry((GridCellArray *)*(this + 2), i, j)->cell;
        if ( cell )
        {
          if ( cell->members.cellProcessLevel == 6 )
            sub_4CD090(cell, (char)this, a2, a3, a4);
        }
        v6 = uGridsToLoad;
      }
    }
  }
}
