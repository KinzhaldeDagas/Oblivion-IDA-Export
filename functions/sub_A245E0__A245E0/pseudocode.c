void __cdecl sub_A245E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B13598);
  if ( off_B1359C )
  {
    if ( *off_B1359C == 0x53 )
      FormHeapFree((unsigned int)off_B1359C);
  }
}
