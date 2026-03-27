void __cdecl sub_A16B20()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B02D40);
  if ( off_B02D44 )
  {
    if ( *off_B02D44 == 0x53 )
      FormHeapFree((unsigned int)off_B02D44);
  }
}
