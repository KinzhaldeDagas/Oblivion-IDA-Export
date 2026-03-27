void __cdecl sub_A26240()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B161E0);
  if ( off_B161E4[0] )
  {
    if ( *off_B161E4[0] == 0x53 )
      FormHeapFree((unsigned int)off_B161E4[0]);
  }
}
