void __cdecl sub_A18090()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B05554);
  if ( off_B05558[0] )
  {
    if ( *off_B05558[0] == 0x53 )
      FormHeapFree((unsigned int)off_B05558[0]);
  }
}
