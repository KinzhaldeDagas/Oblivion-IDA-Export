void __cdecl sub_A168E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B02CE0);
  if ( off_B02CE4 )
  {
    if ( *off_B02CE4 == 0x53 )
      FormHeapFree((unsigned int)off_B02CE4);
  }
}
