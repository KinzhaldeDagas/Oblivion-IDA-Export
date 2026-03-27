void __cdecl sub_A25FD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bSoundEnabled_Audio);
  if ( off_B1617C )
  {
    if ( *off_B1617C == 0x53 )
      FormHeapFree((unsigned int)off_B1617C);
  }
}
