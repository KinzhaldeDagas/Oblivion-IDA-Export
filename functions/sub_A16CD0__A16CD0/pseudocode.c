void __cdecl sub_A16CD0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B02D88);
  if ( off_B02D8C )
  {
    if ( *off_B02D8C == 0x53 )
      FormHeapFree((unsigned int)off_B02D8C);
  }
}
