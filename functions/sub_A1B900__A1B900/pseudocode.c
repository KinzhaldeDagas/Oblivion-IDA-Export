void __cdecl sub_A1B900()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B08B64);
  if ( off_B08B68 )
  {
    if ( *off_B08B68 == 0x53 )
      FormHeapFree((unsigned int)off_B08B68);
  }
}
