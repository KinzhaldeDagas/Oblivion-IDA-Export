void __cdecl sub_A18440()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B05BBC);
  if ( off_B05BC0 )
  {
    if ( *off_B05BC0 == 0x53 )
      FormHeapFree((unsigned int)off_B05BC0);
  }
}
