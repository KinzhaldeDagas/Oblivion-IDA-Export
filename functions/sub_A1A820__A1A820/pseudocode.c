void __cdecl sub_A1A820()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B07614);
  if ( off_B07618 )
  {
    if ( *off_B07618 == 0x53 )
      FormHeapFree((unsigned int)off_B07618);
  }
}
