void __cdecl sub_A1D4B0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B11E34);
  if ( off_B11E38 )
  {
    if ( *off_B11E38 == 0x53 )
      FormHeapFree((unsigned int)off_B11E38);
  }
}
