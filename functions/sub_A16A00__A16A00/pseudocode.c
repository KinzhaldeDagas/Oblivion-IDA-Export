void __cdecl sub_A16A00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D10);
  if ( off_B02D14 )
  {
    if ( *off_B02D14 == 0x53 )
      FormHeapFree((unsigned int)off_B02D14);
  }
}
