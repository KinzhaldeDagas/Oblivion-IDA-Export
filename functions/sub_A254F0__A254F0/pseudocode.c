void __cdecl sub_A254F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14B94);
  if ( off_B14B98 )
  {
    if ( *off_B14B98 == 0x53 )
      FormHeapFree((unsigned int)off_B14B98);
  }
}
