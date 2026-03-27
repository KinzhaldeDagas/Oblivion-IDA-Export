void __cdecl sub_4E51F0(int a1, char a2)
{
  TESObjectCELL *currentInteriorCell; // ecx
  _DWORD **v3; // eax
  unsigned int v4; // ebx
  unsigned int i; // edi
  unsigned int v6; // esi

  currentInteriorCell = TES->currentInteriorCell;
  if ( currentInteriorCell )
  {
    v3 = (_DWORD **)sub_4AF170(currentInteriorCell);
    if ( v3 )
      SetLinkedPointsEnabled(v3, a1, a2);
    else
      sub_4E5275();
  }
  else
  {
    v4 = uGridsToLoad;
    for ( i = 0; i < v4; ++i )
    {
      v6 = 0;
      do
      {
        if ( GetGridEntry(TES->gridCellArray, i, v6) )
          JUMPOUT(0x4E5247);
        ++v6;
      }
      while ( v6 < v4 );
    }
    sub_4E5275();
  }
}
