void __cdecl sub_A24F30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14814);
  if ( off_B14818 )
  {
    if ( *off_B14818 == 0x53 )
      FormHeapFree((unsigned int)off_B14818);
  }
}
