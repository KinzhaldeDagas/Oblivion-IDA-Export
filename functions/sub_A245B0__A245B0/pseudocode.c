void __cdecl sub_A245B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B13590);
  if ( off_B13594 )
  {
    if ( *off_B13594 == 0x53 )
      FormHeapFree((unsigned int)off_B13594);
  }
}
