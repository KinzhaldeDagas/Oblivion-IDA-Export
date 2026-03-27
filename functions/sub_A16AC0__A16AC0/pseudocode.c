void __cdecl sub_A16AC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B02D30);
  if ( off_B02D34 )
  {
    if ( *off_B02D34 == 0x53 )
      FormHeapFree((unsigned int)off_B02D34);
  }
}
