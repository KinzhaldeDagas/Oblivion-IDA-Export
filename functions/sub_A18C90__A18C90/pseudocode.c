void __cdecl sub_A18C90()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B06C94);
  if ( off_B06C98 )
  {
    if ( *off_B06C98 == 0x53 )
      FormHeapFree((unsigned int)off_B06C98);
  }
}
