void __cdecl sub_A246D0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&unk_B135C0); /*0xa246da*/
  if ( off_B135C4 ) /*0xa246e6*/
  {
    if ( *off_B135C4 == 0x53 ) /*0xa246eb*/
      FormHeapFree((unsigned int)off_B135C4); /*0xa246ee*/
  }
}
