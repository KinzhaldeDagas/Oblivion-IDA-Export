void __cdecl sub_A244F0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13230);
  if ( off_B13234 )
  {
    if ( *off_B13234 == 0x53 )
      FormHeapFree((unsigned int)off_B13234);
  }
}
