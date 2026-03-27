void __cdecl sub_A18CF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CA4);
  if ( off_B06CA8 )
  {
    if ( *off_B06CA8 == 0x53 )
      FormHeapFree((unsigned int)off_B06CA8);
  }
}
