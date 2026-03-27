void __cdecl sub_A18470()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B05BC4);
  if ( off_B05BC8[0] )
  {
    if ( *off_B05BC8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05BC8[0]);
  }
}
