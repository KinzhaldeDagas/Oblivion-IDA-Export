void __cdecl sub_A18010()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05254);
  if ( off_B05258 )
  {
    if ( *off_B05258 == 0x53 )
      FormHeapFree((unsigned int)off_B05258);
  }
}
