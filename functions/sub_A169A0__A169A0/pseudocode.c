void __cdecl sub_A169A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02D00);
  if ( off_B02D04 )
  {
    if ( *off_B02D04 == 0x53 )
      FormHeapFree((unsigned int)off_B02D04);
  }
}
