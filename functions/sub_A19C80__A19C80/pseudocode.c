void __cdecl sub_A19C80()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F3C);
  if ( off_B06F40 )
  {
    if ( *off_B06F40 == 0x53 )
      FormHeapFree((unsigned int)off_B06F40);
  }
}
