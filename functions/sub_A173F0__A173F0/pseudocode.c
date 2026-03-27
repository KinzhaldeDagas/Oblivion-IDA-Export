void __cdecl sub_A173F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0316C);
  if ( off_B03170 )
  {
    if ( *off_B03170 == 0x53 )
      FormHeapFree((unsigned int)off_B03170);
  }
}
