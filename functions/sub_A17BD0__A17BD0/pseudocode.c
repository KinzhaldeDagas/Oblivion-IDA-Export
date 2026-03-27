void __cdecl sub_A17BD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B048EC);
  if ( off_B048F0 )
  {
    if ( *off_B048F0 == 0x53 )
      FormHeapFree((unsigned int)off_B048F0);
  }
}
