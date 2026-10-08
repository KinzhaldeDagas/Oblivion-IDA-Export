void __cdecl sub_A168E0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)off_B02CE0); /*0xa168ea*/
  if ( off_B02CE4 ) /*0xa168f6*/
  {
    if ( *off_B02CE4 == 0x53 ) /*0xa168fb*/
      FormHeapFree((unsigned int)off_B02CE4); /*0xa168fe*/
  }
}
