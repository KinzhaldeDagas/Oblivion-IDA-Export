void __cdecl sub_A18890()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B06AA8);
  if ( off_B06AAC )
  {
    if ( *off_B06AAC == 0x53 )
      FormHeapFree((unsigned int)off_B06AAC);
  }
}
