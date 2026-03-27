void __thiscall sub_43FB40(_DWORD **this)
{
  unsigned int v1; // eax
  unsigned int i; // edi
  unsigned int j; // esi
  TESObjectCELL *cell; // ecx
  _DWORD *ShadowSceneNode; // eax

  v1 = uGridsToLoad;
  for ( i = 0; i < v1; ++i )
  {
    for ( j = 0; j < v1; ++j )
    {
      cell = GetGridEntry((GridCellArray *)*(this + 2), i, j)->cell;
      if ( cell )
      {
        if ( cell->members.cellProcessLevel == 6 )
          sub_4CB670(cell, 1);
      }
      v1 = uGridsToLoad;
    }
  }
  ShadowSceneNode = (_DWORD *)GetShadowSceneNode(0);
  sub_7C7EB0(ShadowSceneNode, 1, 1);
}
