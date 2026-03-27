void __cdecl sub_A16790()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CA8);
  if ( off_B02CAC )
  {
    if ( *off_B02CAC == 0x53 )
      FormHeapFree((unsigned int)off_B02CAC);
  }
}
