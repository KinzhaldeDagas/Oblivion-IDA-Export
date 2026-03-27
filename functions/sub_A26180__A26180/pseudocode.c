void __cdecl sub_A26180()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&useSoundDebugInfo);
  if ( off_B161C4 )
  {
    if ( *off_B161C4 == 0x53 )
      FormHeapFree((unsigned int)off_B161C4);
  }
}
