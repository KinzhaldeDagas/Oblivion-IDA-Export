void __cdecl sub_4EA6E0(int a1, float a2, int a3, int a4)
{
  TESWorldSpace *CurrentWorldspace; // eax
  TESWorldSpace *ParentWorldpsace; // esi
  NiTMap_TESCELL *v6; // eax

  CurrentWorldspace = TES::GetCurrentWorldspace(TES);
  ParentWorldpsace = CurrentWorldspace;
  if ( CurrentWorldspace )
  {
    if ( TESWorldSpace_GetParentWorldpsace(CurrentWorldspace) )
    {
      do
        ParentWorldpsace = TESWorldSpace_GetParentWorldpsace(ParentWorldpsace);
      while ( TESWorldSpace_GetParentWorldpsace(ParentWorldpsace) );
    }
    v6 = (NiTMap_TESCELL *)sub_4EF7E0((int)ParentWorldpsace);
    sub_4EA160(a1, a2, a3, v6, a4);
  }
}
