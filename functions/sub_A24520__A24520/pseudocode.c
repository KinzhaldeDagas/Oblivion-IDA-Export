void __cdecl sub_A24520()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&byte_B13238);
  if ( off_B1323C[0] )
  {
    if ( *off_B1323C[0] == 0x53 )
      FormHeapFree((unsigned int)off_B1323C[0]);
  }
}
