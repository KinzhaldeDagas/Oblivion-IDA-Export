void __cdecl sub_A18F00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06CFC);
  if ( off_B06D00 )
  {
    if ( *off_B06D00 == 0x53 )
      FormHeapFree((unsigned int)off_B06D00);
  }
}
