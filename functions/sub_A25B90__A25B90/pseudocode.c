void __cdecl sub_A25B90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14F10);
  if ( off_B14F14 )
  {
    if ( *off_B14F14 == 0x53 )
      FormHeapFree((unsigned int)off_B14F14);
  }
}
