void __cdecl sub_A25C50()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14F30);
  if ( off_B14F34 )
  {
    if ( *off_B14F34 == 0x53 )
      FormHeapFree((unsigned int)off_B14F34);
  }
}
