void __usercall sub_4E7D10(NiNode *a1@<eax>)
{
  TESObjectCELL *currentInteriorCell; // ecx
  TESObjectREFR *v2; // ecx
  unsigned int v3; // eax
  unsigned int i; // edi
  unsigned int v5; // esi
  TESObjectCELL *cell; // ecx
  TESObjectREFR *v7; // ecx

  LOBYTE(a1) = byte_B35F84 == 0;
  sub_4E76D0(a1);
  currentInteriorCell = TES->currentInteriorCell;
  if ( !currentInteriorCell )
  {
    v3 = uGridsToLoad;
    for ( i = 0; ; ++i )
    {
      if ( i >= v3 )
        return;
      v5 = 0;
      while ( v5 < v3 )
      {
        cell = GetGridEntry(TES->gridCellArray, i, v5)->cell;
        if ( cell && (v7 = (TESObjectREFR *)sub_4AF170(cell)) != 0 )
        {
          if ( !byte_B35F84 )
          {
            sub_4E5400((int)v7);
            goto LABEL_15;
          }
          sub_4E71A0(v7);
          v3 = uGridsToLoad;
          ++v5;
        }
        else
        {
LABEL_15:
          v3 = uGridsToLoad;
          ++v5;
        }
      }
    }
  }
  v2 = (TESObjectREFR *)sub_4AF170(currentInteriorCell);
  if ( v2 )
  {
    if ( byte_B35F84 )
      sub_4E71A0(v2);
    else
      sub_4E5400((int)v2);
  }
}
