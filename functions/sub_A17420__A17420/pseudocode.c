void __cdecl sub_A17420()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B0317C);
  if ( off_B03180[0] )
  {
    if ( *off_B03180[0] == 0x53 )
      FormHeapFree((unsigned int)off_B03180[0]);
  }
}
