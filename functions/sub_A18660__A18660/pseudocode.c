void __cdecl sub_A18660()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bLoadHelmentsBackground);
  if ( off_B0660C[0] )
  {
    if ( *off_B0660C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B0660C[0]);
  }
}
