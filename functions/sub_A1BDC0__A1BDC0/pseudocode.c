void __cdecl sub_A1BDC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B09AF8);
  if ( off_B09AFC )
  {
    if ( *off_B09AFC == 0x53 )
      FormHeapFree((unsigned int)off_B09AFC);
  }
}
