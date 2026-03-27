void __cdecl sub_A1A760()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B075F4);
  if ( off_B075F8 )
  {
    if ( *off_B075F8 == 0x53 )
      FormHeapFree((unsigned int)off_B075F8);
  }
}
