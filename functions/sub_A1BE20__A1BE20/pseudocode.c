void __cdecl sub_A1BE20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bGrassPointLightening);
  if ( off_B09B0C )
  {
    if ( *off_B09B0C == 0x53 )
      FormHeapFree((unsigned int)off_B09B0C);
  }
}
