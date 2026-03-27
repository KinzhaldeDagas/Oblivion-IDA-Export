void __cdecl sub_A24DB0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14380);
  if ( off_B14384 )
  {
    if ( *off_B14384 == 0x53 )
      FormHeapFree((unsigned int)off_B14384);
  }
}
