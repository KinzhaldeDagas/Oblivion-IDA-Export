void __cdecl sub_A25DD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B15748);
  if ( off_B1574C )
  {
    if ( *off_B1574C == 0x53 )
      FormHeapFree((unsigned int)off_B1574C);
  }
}
