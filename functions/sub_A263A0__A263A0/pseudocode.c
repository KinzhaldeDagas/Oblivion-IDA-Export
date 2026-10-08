void __cdecl sub_A263A0()
{
  BSSimpleList_Remove(dword_B07CFC, (int)&dword_B16274); /*0xa263aa*/
  if ( off_B16278 ) /*0xa263b6*/
  {
    if ( *off_B16278 == 0x53 ) /*0xa263bb*/
      FormHeapFree((unsigned int)off_B16278); /*0xa263be*/
  }
}
