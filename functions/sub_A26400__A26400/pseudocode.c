void __cdecl sub_A26400()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16284);
  if ( off_B16288 )
  {
    if ( *off_B16288 == 0x53 )
      FormHeapFree((unsigned int)off_B16288);
  }
}
