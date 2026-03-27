void __cdecl sub_A17C00()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B048F4);
  if ( off_B048F8[0] )
  {
    if ( *off_B048F8[0] == 0x53 )
      FormHeapFree((unsigned int)off_B048F8[0]);
  }
}
