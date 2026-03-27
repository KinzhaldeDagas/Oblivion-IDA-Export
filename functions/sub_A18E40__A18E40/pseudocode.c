void __cdecl sub_A18E40()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B06CDC);
  if ( off_B06CE0 )
  {
    if ( *off_B06CE0 == 0x53 )
      FormHeapFree((unsigned int)off_B06CE0);
  }
}
