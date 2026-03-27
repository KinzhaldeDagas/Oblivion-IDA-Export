void __cdecl sub_A16A60()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&bUSeThreadedMorhper);
  if ( off_B02D24 )
  {
    if ( *off_B02D24 == 0x53 )
      FormHeapFree((unsigned int)off_B02D24);
  }
}
