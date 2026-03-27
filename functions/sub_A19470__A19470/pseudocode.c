void __cdecl sub_A19470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bIsHDR);
  if ( off_B06DE8 )
  {
    if ( *off_B06DE8 == 0x53 )
      FormHeapFree((unsigned int)off_B06DE8);
  }
}
