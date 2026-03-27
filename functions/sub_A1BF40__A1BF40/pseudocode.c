void __cdecl sub_A1BF40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B09B38);
  if ( off_B09B3C )
  {
    if ( *off_B09B3C == 0x53 )
      FormHeapFree((unsigned int)off_B09B3C);
  }
}
