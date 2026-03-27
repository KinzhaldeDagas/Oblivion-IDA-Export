void __cdecl sub_A17300()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B03144);
  if ( off_B03148 )
  {
    if ( *off_B03148 == 0x53 )
      FormHeapFree((unsigned int)off_B03148);
  }
}
