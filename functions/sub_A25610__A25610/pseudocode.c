void __cdecl sub_A25610()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B14BC4);
  if ( off_B14BC8 )
  {
    if ( *off_B14BC8 == 0x53 )
      FormHeapFree((unsigned int)off_B14BC8);
  }
}
