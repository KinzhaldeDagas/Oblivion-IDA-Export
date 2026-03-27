void __cdecl sub_A1C010()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&externalLodFiles);
  if ( off_B09DB4 )
  {
    if ( *off_B09DB4 == 0x53 )
      FormHeapFree((unsigned int)off_B09DB4);
  }
}
