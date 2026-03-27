void __cdecl sub_A18C30()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&Y);
  if ( off_B06C88 )
  {
    if ( *off_B06C88 == 0x53 )
      FormHeapFree((unsigned int)off_B06C88);
  }
}
