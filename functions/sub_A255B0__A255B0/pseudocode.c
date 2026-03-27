void __cdecl sub_A255B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14BB4);
  if ( off_B14BB8 )
  {
    if ( *off_B14BB8 == 0x53 )
      FormHeapFree((unsigned int)off_B14BB8);
  }
}
