char __cdecl sub_689230(TESChildCELL *a1, NiPoint3 *a2, float *a3)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESObjectCELL *v5; // eax
  TESObjectCELL *v6; // esi
  TESWorldSpace *v7; // eax
  TESObjectCELL *v8; // eax
  char v9; // bl

  if ( byte_B3C089 )
    return 1;
  if ( ModelLoaderPtr )
  {
    if ( !TES->currentInteriorCell )
    {
      if ( TES::GetCurrentWorldspace(TES) )
      {
        CurrentWorldspace = TES::GetCurrentWorldspace(TES);
        TESWorldSpace::GetCellAtPos(CurrentWorldspace, &a2->x);
        v6 = v5;
        if ( !v5 )
          return 0;
        if ( sub_43E000(ModelLoaderPtr, v5) )
          return 0;
        v7 = TES::GetCurrentWorldspace(TES);
        TESWorldSpace::GetCellAtPos(v7, a3);
        if ( v8 != v6 && (!v8 || sub_43E000(ModelLoaderPtr, v8)) )
          return 0;
      }
    }
  }
  v9 = 0;
  if ( a1 )
  {
    if ( sub_480520(&a2->x, a3, flt_A2FF44) < 0 )
      return sub_688DC0(a1, a2, a3, 0);
  }
  return v9;
}
