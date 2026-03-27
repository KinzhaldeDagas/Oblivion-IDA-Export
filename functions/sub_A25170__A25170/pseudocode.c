void __cdecl sub_A25170()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14874);
  if ( off_B14878 )
  {
    if ( *off_B14878 == 0x53 )
      FormHeapFree((unsigned int)off_B14878);
  }
}
