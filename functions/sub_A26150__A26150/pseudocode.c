void __cdecl sub_A26150()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161B8);
  if ( off_B161BC )
  {
    if ( *off_B161BC == 0x53 )
      FormHeapFree((unsigned int)off_B161BC);
  }
}
