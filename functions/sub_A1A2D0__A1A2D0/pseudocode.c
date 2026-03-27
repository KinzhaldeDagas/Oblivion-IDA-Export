void __cdecl sub_A1A2D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&UseWaterReflectionActors);
  if ( off_B0706C )
  {
    if ( *off_B0706C == 0x53 )
      FormHeapFree((unsigned int)off_B0706C);
  }
}
