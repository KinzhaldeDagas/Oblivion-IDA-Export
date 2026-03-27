void __cdecl sub_A17D50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B051E4);
  if ( off_B051E8[0] )
  {
    if ( *off_B051E8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B051E8[0]);
  }
}
