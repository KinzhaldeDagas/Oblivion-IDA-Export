void __cdecl sub_A1BF70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B09B40);
  if ( off_B09B44 )
  {
    if ( *off_B09B44 == 0x53 )
      FormHeapFree((unsigned int)off_B09B44);
  }
}
