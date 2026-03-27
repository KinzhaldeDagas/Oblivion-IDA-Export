void __cdecl sub_A18B10()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C54);
  if ( off_B06C58 )
  {
    if ( *off_B06C58 == 0x53 )
      FormHeapFree((unsigned int)off_B06C58);
  }
}
