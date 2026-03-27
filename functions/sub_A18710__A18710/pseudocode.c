void __cdecl sub_A18710()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B068D0);
  if ( off_B068D4 )
  {
    if ( *off_B068D4 == 0x53 )
      FormHeapFree((unsigned int)off_B068D4);
  }
}
