void __cdecl sub_A1A910()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B0763C);
  if ( off_B07640 )
  {
    if ( *off_B07640 == 0x53 )
      FormHeapFree((unsigned int)off_B07640);
  }
}
