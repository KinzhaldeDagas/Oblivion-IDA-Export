void __cdecl sub_A18B40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06C5C);
  if ( off_B06C60 )
  {
    if ( *off_B06C60 == 0x53 )
      FormHeapFree((unsigned int)off_B06C60);
  }
}
