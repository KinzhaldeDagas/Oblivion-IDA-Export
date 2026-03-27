void __cdecl sub_A16D30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02D98);
  if ( off_B02D9C )
  {
    if ( *off_B02D9C == 0x53 )
      FormHeapFree((unsigned int)off_B02D9C);
  }
}
