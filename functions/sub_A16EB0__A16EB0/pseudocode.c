void __cdecl sub_A16EB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&lpCaption);
  if ( off_B02DDC[0] )
  {
    if ( *off_B02DDC[0] == 0x53 )
      FormHeapFree((unsigned int)off_B02DDC[0]);
  }
}
