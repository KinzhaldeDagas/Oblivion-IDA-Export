void __cdecl sub_A16C40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B02D70);
  if ( off_B02D74 )
  {
    if ( *off_B02D74 == 0x53 )
      FormHeapFree((unsigned int)off_B02D74);
  }
}
