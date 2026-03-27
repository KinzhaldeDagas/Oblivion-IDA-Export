void __cdecl sub_A16D60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DA0);
  if ( off_B02DA4 )
  {
    if ( *off_B02DA4 == 0x53 )
      FormHeapFree((unsigned int)off_B02DA4);
  }
}
