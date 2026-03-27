void __cdecl sub_A172A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&NearDistance);
  if ( off_B03138 )
  {
    if ( *off_B03138 == 0x53 )
      FormHeapFree((unsigned int)off_B03138);
  }
}
