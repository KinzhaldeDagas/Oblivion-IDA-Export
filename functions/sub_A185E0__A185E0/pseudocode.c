void __cdecl sub_A185E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06540);
  if ( off_B06544 )
  {
    if ( *off_B06544 == 0x53 )
      FormHeapFree((unsigned int)off_B06544);
  }
}
