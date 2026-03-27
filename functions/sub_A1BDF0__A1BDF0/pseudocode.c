void __cdecl sub_A1BDF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B09B00);
  if ( off_B09B04 )
  {
    if ( *off_B09B04 == 0x53 )
      FormHeapFree((unsigned int)off_B09B04);
  }
}
