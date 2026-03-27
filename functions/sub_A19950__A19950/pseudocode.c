void __cdecl sub_A19950()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EB4);
  if ( off_B06EB8 )
  {
    if ( *off_B06EB8 == 0x53 )
      FormHeapFree((unsigned int)off_B06EB8);
  }
}
