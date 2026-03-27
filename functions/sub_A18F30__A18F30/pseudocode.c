void __cdecl sub_A18F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06D04);
  if ( off_B06D08 )
  {
    if ( *off_B06D08 == 0x53 )
      FormHeapFree((unsigned int)off_B06D08);
  }
}
