void __cdecl sub_A25640()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BCC);
  if ( off_B14BD0 )
  {
    if ( *off_B14BD0 == 0x53 )
      FormHeapFree((unsigned int)off_B14BD0);
  }
}
