void __cdecl sub_A1B840()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B08B44);
  if ( off_B08B48 )
  {
    if ( *off_B08B48 == 0x53 )
      FormHeapFree((unsigned int)off_B08B48);
  }
}
