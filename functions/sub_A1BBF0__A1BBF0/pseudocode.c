void __cdecl sub_A1BBF0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B097E0);
  if ( off_B097E4[0] )
  {
    if ( *off_B097E4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B097E4[0]);
  }
}
