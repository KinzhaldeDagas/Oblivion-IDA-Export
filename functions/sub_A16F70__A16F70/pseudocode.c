void __cdecl sub_A16F70()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B02DF8);
  if ( off_B02DFC )
  {
    if ( *off_B02DFC == 0x53 )
      FormHeapFree((unsigned int)off_B02DFC);
  }
}
