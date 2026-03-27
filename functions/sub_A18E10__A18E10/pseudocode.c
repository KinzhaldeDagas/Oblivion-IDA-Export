void __cdecl sub_A18E10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CD4);
  if ( off_B06CD8 )
  {
    if ( *off_B06CD8 == 0x53 )
      FormHeapFree((unsigned int)off_B06CD8);
  }
}
