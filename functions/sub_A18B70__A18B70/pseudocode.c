void __cdecl sub_A18B70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C64);
  if ( off_B06C68 )
  {
    if ( *off_B06C68 == 0x53 )
      FormHeapFree((unsigned int)off_B06C68);
  }
}
