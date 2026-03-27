void __cdecl sub_A246D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B135C0);
  if ( off_B135C4 )
  {
    if ( *off_B135C4 == 0x53 )
      FormHeapFree((unsigned int)off_B135C4);
  }
}
