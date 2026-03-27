void __cdecl sub_A18800()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&GridDistantCount);
  if ( off_B06A94 )
  {
    if ( *off_B06A94 == 0x53 )
      FormHeapFree((unsigned int)off_B06A94);
  }
}
