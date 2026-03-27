void __cdecl sub_A16820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CC0);
  if ( off_B02CC4 )
  {
    if ( *off_B02CC4 == 0x53 )
      FormHeapFree((unsigned int)off_B02CC4);
  }
}
