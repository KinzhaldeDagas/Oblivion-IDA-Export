void __cdecl sub_A1BD60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09AE8);
  if ( off_B09AEC )
  {
    if ( *off_B09AEC == 0x53 )
      FormHeapFree((unsigned int)off_B09AEC);
  }
}
