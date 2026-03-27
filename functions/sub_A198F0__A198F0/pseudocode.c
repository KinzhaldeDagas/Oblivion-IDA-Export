void __cdecl sub_A198F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EA4);
  if ( off_B06EA8 )
  {
    if ( *off_B06EA8 == 0x53 )
      FormHeapFree((unsigned int)off_B06EA8);
  }
}
