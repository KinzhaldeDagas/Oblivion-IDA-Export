void __cdecl sub_A26370()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B1626C);
  if ( off_B16270 )
  {
    if ( *off_B16270 == 0x53 )
      FormHeapFree((unsigned int)off_B16270);
  }
}
