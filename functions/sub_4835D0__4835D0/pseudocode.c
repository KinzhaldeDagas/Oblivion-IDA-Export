void __cdecl sub_4835D0(int a1, TESWorldSpace *a2)
{
  if ( a2 )
  {
    if ( TESWorldSpace_GetParentWorldpsace(a2) )
      byte_B34420 = 1;
    if ( !TESWorldSpace_GetParentWorldpsace(a2) )
      byte_B34420 = 0;
  }
}
