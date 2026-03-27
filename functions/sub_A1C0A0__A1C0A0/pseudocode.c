void __cdecl sub_A1C0A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B09E28);
  if ( off_B09E2C[0] )
  {
    if ( *off_B09E2C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B09E2C[0]);
  }
}
