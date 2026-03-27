void __cdecl sub_A19380()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&ForcePow2Text);
  if ( off_B06DC0 )
  {
    if ( *off_B06DC0 == 0x53 )
      FormHeapFree((unsigned int)off_B06DC0);
  }
}
