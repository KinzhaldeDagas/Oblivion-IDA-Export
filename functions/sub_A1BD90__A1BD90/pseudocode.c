void __cdecl sub_A1BD90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09AF0);
  if ( off_B09AF4 )
  {
    if ( *off_B09AF4 == 0x53 )
      FormHeapFree((unsigned int)off_B09AF4);
  }
}
