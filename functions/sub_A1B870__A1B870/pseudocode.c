void __cdecl sub_A1B870()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B08B4C);
  if ( off_B08B50 )
  {
    if ( *off_B08B50 == 0x53 )
      FormHeapFree((unsigned int)off_B08B50);
  }
}
