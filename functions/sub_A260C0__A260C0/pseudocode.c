void __cdecl sub_A260C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B161A0);
  if ( off_B161A4 )
  {
    if ( *off_B161A4 == 0x53 )
      FormHeapFree((unsigned int)off_B161A4);
  }
}
