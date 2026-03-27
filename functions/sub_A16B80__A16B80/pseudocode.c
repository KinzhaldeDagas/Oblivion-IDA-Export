void __cdecl sub_A16B80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B02D50);
  if ( off_B02D54 )
  {
    if ( *off_B02D54 == 0x53 )
      FormHeapFree((unsigned int)off_B02D54);
  }
}
