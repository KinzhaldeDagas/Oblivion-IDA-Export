void __cdecl sub_A1D480()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B11E2C);
  if ( off_B11E30 )
  {
    if ( *off_B11E30 == 0x53 )
      FormHeapFree((unsigned int)off_B11E30);
  }
}
