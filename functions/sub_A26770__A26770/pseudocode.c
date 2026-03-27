void __cdecl sub_A26770()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B23C58);
  if ( off_B23C5C )
  {
    if ( *off_B23C5C == 0x53 )
      FormHeapFree((unsigned int)off_B23C5C);
  }
}
