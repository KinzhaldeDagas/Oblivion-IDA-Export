void __cdecl sub_A19A40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B06EDC);
  if ( off_B06EE0 )
  {
    if ( *off_B06EE0 == 0x53 )
      FormHeapFree((unsigned int)off_B06EE0);
  }
}
