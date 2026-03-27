void __cdecl sub_A182D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B055B4);
  if ( off_B055B8 )
  {
    if ( *off_B055B8 == 0x53 )
      FormHeapFree((unsigned int)off_B055B8);
  }
}
