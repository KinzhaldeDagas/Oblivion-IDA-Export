void __cdecl sub_A169D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B02D08);
  if ( off_B02D0C )
  {
    if ( *off_B02D0C == 0x53 )
      FormHeapFree((unsigned int)off_B02D0C);
  }
}
