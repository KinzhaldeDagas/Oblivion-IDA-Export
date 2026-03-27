void __cdecl sub_A167C0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&off_B02CB0);
  if ( off_B02CB4 )
  {
    if ( *off_B02CB4 == 0x53 )
      FormHeapFree((unsigned int)off_B02CB4);
  }
}
