void __cdecl sub_A267A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B23C60);
  if ( off_B23C64[0] )
  {
    if ( *off_B23C64[0] == 0x53 )
      FormHeapFree((unsigned int)off_B23C64[0]);
  }
}
