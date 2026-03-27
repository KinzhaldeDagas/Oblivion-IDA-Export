void __cdecl sub_A26120()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161B0);
  if ( off_B161B4 )
  {
    if ( *off_B161B4 == 0x53 )
      FormHeapFree((unsigned int)off_B161B4);
  }
}
