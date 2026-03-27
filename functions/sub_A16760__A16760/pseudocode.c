void __cdecl sub_A16760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CA0);
  if ( off_B02CA4 )
  {
    if ( *off_B02CA4 == 0x53 )
      FormHeapFree((unsigned int)off_B02CA4);
  }
}
