void __cdecl sub_A19CB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06F44);
  if ( off_B06F48 )
  {
    if ( *off_B06F48 == 0x53 )
      FormHeapFree((unsigned int)off_B06F48);
  }
}
