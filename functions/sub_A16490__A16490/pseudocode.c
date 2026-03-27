void __cdecl sub_A16490()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bBackgroundMouse);
  if ( off_B02C40 )
  {
    if ( *off_B02C40 == 0x53 )
      FormHeapFree((unsigned int)off_B02C40);
  }
}
