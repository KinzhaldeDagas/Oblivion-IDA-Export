void __cdecl sub_A26060()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B16190);
  if ( off_B16194 )
  {
    if ( *off_B16194 == 0x53 )
      FormHeapFree((unsigned int)off_B16194);
  }
}
