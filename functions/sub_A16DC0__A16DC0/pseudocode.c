void __cdecl sub_A16DC0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&flt_B02DB0);
  if ( off_B02DB4 )
  {
    if ( *off_B02DB4 == 0x53 )
      FormHeapFree((unsigned int)off_B02DB4);
  }
}
