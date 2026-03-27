void __cdecl sub_A17BA0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B048E4);
  if ( off_B048E8 )
  {
    if ( *off_B048E8 == 0x53 )
      FormHeapFree((unsigned int)off_B048E8);
  }
}
