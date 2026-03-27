void __cdecl sub_A25A40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B14ED8);
  if ( off_B14EDC )
  {
    if ( *off_B14EDC == 0x53 )
      FormHeapFree((unsigned int)off_B14EDC);
  }
}
